
#include <Mouse.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <Keyboard.h>

Adafruit_MPU6050 mpu;

int bntPin = 4;
bool takeover = false;
int previousBntValue = 1;

int voicePin = A0;
int voiceValue;

void setup(void) {
  Serial.begin(9600);
  pinMode(bntPin, INPUT_PULLUP);
  pinMode(voicePin, INPUT);


  // Try to initialize!
  while (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    delay(500);
  }
  delay(1000);
  Serial.println("MPU6050 Found!");

  // set accelerometer range to +-8G
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);

  // set gyro range to +- 500 deg/s
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);

  // set filter bandwidth to 21 Hz
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

  delay(100);
}

void loop() {
  //read the sound sensor
  voiceValue = analogRead(voicePin);

  //Toggle button
  int bntValue = digitalRead(bntPin); //1 = unpressed, 0 = pressed
  //  if (previousBntValue == 0 && bntValue == 1) { //press and release onece
  //    Serial.println("button pressed");
  //    takeover = !takeover;
  //  }
  //  previousBntValue = bntValue;
  if (bntValue == 0) {
    Serial.println("toggle on");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    takeover = true;
  } else {
    Serial.println("toggle off");
    Keyboard.press(KEY_ESC);
    Keyboard.release(KEY_ESC);
    takeover = false;
  }
  if (takeover) {
    /* Get new sensor events with the readings */
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    /* Print out the values */
    /*
      Serial.print("Acceleration X: ");
      Serial.print(a.acceleration.x);
      Serial.print(", Y: ");
      Serial.print(a.acceleration.y);
      Serial.print(", Z: ");
      Serial.print(a.acceleration.z);
      Serial.println(" m/s^2");

      Serial.print("Rotation X: ");
      Serial.print(g.gyro.x);
      Serial.print(", Y: ");
      Serial.print(g.gyro.y);
      Serial.print(", Z: ");
      Serial.print(g.gyro.z);
      Serial.println(" rad/s");
    */
    Serial.print("Volumn: ");
    Serial.print(voiceValue);
    Serial.println(" dB");
    // x position is reversed to match the mouse movement.

    //debugging
    //Serial.println("moving mouse");
    //Serial.print("mouseX.move: ");
    //Serial.print(-g.gyro.x - a.acceleration.x);
    //Serial.print("mouseY.move: ");
    //Serial.println(g.gyro.y + a.acceleration.y);

    float xAxis = -g.gyro.x - a.acceleration.x;  // x position is reversed to match the mouse movement.
    float yAxis = g.gyro.y + a.acceleration.y;

    //make the gyroscope movement to control the arrow keys
    if (xAxis < 0) {
      Keyboard.press(KEY_LEFT_ARROW);
      Keyboard.release(KEY_LEFT_ARROW);
      Serial.println("left");
    } else if (xAxis > 0) {
      Keyboard.press(KEY_RIGHT_ARROW);
      Keyboard.release(KEY_RIGHT_ARROW);
      Serial.println("right");
    }
    if (yAxis < 0) {
      Keyboard.press(KEY_UP_ARROW);
      Keyboard.release(KEY_UP_ARROW);
      Serial.println("up");
    } else if (yAxis > 0) {
      Keyboard.press(KEY_DOWN_ARROW);
      Keyboard.release(KEY_DOWN_ARROW);
      Serial.println("down");

    }
  }
  delay(200);
}
