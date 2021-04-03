
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
  if (previousBntValue == 1 && bntValue == 0) { //toggled from off to on once
    Serial.println("toggle switched on");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
  } if (previousBntValue == 0 && bntValue == 1) { //toggled from on to off once
    Serial.println("toggle switched off");
    Keyboard.press(KEY_ESC);
    Keyboard.release(KEY_ESC);
  }

  previousBntValue = bntValue;

  if (bntValue == 0) {
    Serial.println("toggle on");
    takeover = true;
  } else {
    Serial.println("toggle off");
    takeover = false;
  }
  if (takeover) {
    /* Get new sensor events with the readings */
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    Serial.print("Volumn: ");
    Serial.print(voiceValue);
    Serial.println(" dB");

    float xAxis = -g.gyro.x - a.acceleration.x;  // x position is reversed to match the mouse movement.
    float yAxis = g.gyro.y + a.acceleration.y;

    //make the gyroscope movement to control the arrow keys
    if (xAxis < 0) {
      Keyboard.press('A');
      Keyboard.release('A');
      Serial.println("left");
    } else if (xAxis > 0) {
      Keyboard.press('D');
      Keyboard.release('D');
      Serial.println("right");
    } else if (yAxis < 0) {
      Keyboard.press('W');
      Keyboard.release('W');
      Serial.println("up");
    } else if (yAxis > 0) {
      Keyboard.press('S');
      Keyboard.release('S');
      Serial.println("down");

    }
  }
  delay(100);
}
