
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
  /*check switch to turn on/off controller*/
  checkSwitch();

  if (takeover) {
    /* Get new sensor events with the readings */
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);
    /*read the sound sensor*/
    voiceValue = analogRead(voicePin);
    /*Convert read values to readable values*/
    float xAxis = -g.gyro.x - a.acceleration.x;  // x position is reversed to map the 2D movement.
    float yAxis = g.gyro.y + a.acceleration.y;
    float xTilt = abs(xAxis);
    float yTilt = abs(yAxis);
    const int tiltThreshold = 1;

    /*Debug*/
    Serial.print("xAxis: ");
    Serial.print(xAxis);
    Serial.print(" yAxis: ");
    Serial.print(yAxis);
    Serial.print(" Volumn: ");
    Serial.print(voiceValue);
    Serial.println(" dB");

    /*determine strongest tilt*/
    float maxTilt = max(xTilt, yTilt);

    /*make the gyroscope movement to control the arrow keys*/
    if (maxTilt > tiltThreshold) {
      if (xTilt > yTilt) {
        if (xAxis < 0) {
          Keyboard.release('D'); Keyboard.press('A'); Serial.println("left");
        } else {
          Keyboard.release('A'); Keyboard.press('D'); Serial.println("Right");
        }
      } else {
        if (yAxis < 0) {
          Keyboard.release('S'); Keyboard.press('W'); Serial.println("Up");
        } else {
          Keyboard.release('W');  Keyboard.press('S'); Serial.println("Down");
        }
      }
    } else {
      Keyboard.releaseAll();
    }

    /*make the valume sensor values to control the space bar*/
    if (voiceValue > 45) {
      Keyboard.press(' ');
      Keyboard.release(' ');
    }
  }
  delay(100);
}

void checkSwitch() {
  //Toggle button
  int bntValue = digitalRead(bntPin); //1 = unpressed, 0 = pressed
  if (previousBntValue == 0 && bntValue == 1) { //press and release onece
    Serial.println("button pressed");
    takeover = !takeover;
  }
  previousBntValue = bntValue;
}
