#ifndef CONFIG_H
#define CONFIG_H 1

// This is the sensor definition field. Please comment *in* the 
// Sensor that you have installed.
// How many sensors are attached? Only 1 for the DHT22/DHT11 possible,
// but many more for the DS18S20.
#define MAX_NUM_SENSORS 1
// Option 1: you have a DHT22/DHT11 temp/hum sensor.
#define SENSOR_DHT22 1
//#define DHTTYPE DHT22
#define DHTTYPE DHT11
// Option 2: you have an DS18S20 temperature sensor
//#define SENSOR_DS18S20 1

const char* ssid = "****";
const char* password = "****";
const char* mdnsname = "roomsensor";

#endif /* CONFIG_H */
