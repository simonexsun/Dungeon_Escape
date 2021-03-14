
#include <Mouse.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

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
  if (previousBntValue == 0 && bntValue == 1) { //press and release onece
    Serial.println("button pressed");
    takeover = !takeover;
  }
  previousBntValue = bntValue;

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

    //Serial.println("moving mouse");
    // x position is reversed to match the mouse movement.
    Mouse.move(-g.gyro.x - a.acceleration.x, g.gyro.y + a.acceleration.y);
  }
  delay(20);
}
