#include <DHT.h>
#include <Adafruit_Sensor.h>

#define sensor1Pin 9
#define sensor2Pin 8
#define sensor3Pin 7
#define DHTTYPE DHT11

DHT dht1(sensor1Pin, DHTTYPE);
DHT dht2(sensor2Pin, DHTTYPE);
DHT dht3(sensor3Pin, DHTTYPE);

void setup() {
  pinMode(sensor1Pin, INPUT);
  pinMode(sensor2Pin, INPUT);
  pinMode(sensor3Pin, INPUT);

  dht1.begin();
  dht2.begin();
  dht3.begin();

  Serial.begin(9600);
  Serial.print("Temperature(°F): s1,s2,s3 , Humidity(%): s1,s2,s3\n");
}

void loop() {
  float h1 = dht1.readHumidity();
  float h2 = dht2.readHumidity();
  float h3 = dht3.readHumidity();

  float t1 = dht1.readTemperature(true);
  float t2 = dht2.readTemperature(true);
  float t3 = dht3.readTemperature(true);

  if ( isnan(h1) || isnan(t1) || isnan(h2) || isnan(t2) || isnan(h3) || isnan(t3)) {
    Serial.print("No Data.\n");
    delay(1000);
    return;
  }

  // Print in CSV format
  Serial.print(t1);
  Serial.print(",");
  Serial.print(t2);
  Serial.print(",");
  Serial.print(t3);
  Serial.print(",");

  Serial.print(h1);
  Serial.print(",");
  Serial.print(h2);
  Serial.print(",");
  Serial.print(h3);

  Serial.print("\n");

  delay(5000);
}
