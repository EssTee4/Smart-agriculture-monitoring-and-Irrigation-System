// Include DHT11 library
#include <DHT.h>

// Define pins
#define DHTPIN 2          // DHT11 connected to digital pin 2
#define DHTTYPE DHT11     // DHT11 Sensor
int soilPin = A0;         // Soil moisture sensor connected to A0
int relayPin = 7;         // Relay module connected to D7

// Create DHT object
DHT dht(DHTPIN, DHTTYPE);

// Variables
int soilValue = 0;        // Variable to store soil moisture value
int threshold = 1000;     // Soil moisture threshold
float temperature = 0.0;  // Variable to store temperature
float humidity = 0.0;     // Variable to store humidity

void setup() {
  pinMode(soilPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH);  // Relay OFF initially (Pump OFF)
  
  Serial.begin(9600);
  dht.begin();  // Initialize DHT sensor
}

void loop() {
  // Read soil moisture
  soilValue = analogRead(soilPin);
  
  // Read temperature and humidity
  humidity = dht.readHumidity();
  temperature = dht.readTemperature(); // Celsius

  // Print sensor readings
  Serial.println("------ Sensor Readings ------");
  Serial.print("Soil Moisture: ");
  Serial.println(soilValue);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  Serial.println("------------------------------");

  // Control the pump based on soil moisture
  if (soilValue < threshold) {
    // Soil is dry – turn pump ON
    digitalWrite(relayPin, LOW);  // Relay ON (Pump ON)
    Serial.println("Pump Status: ON (Soil is dry)");
  } else {
    // Soil is moist – turn pump OFF
    digitalWrite(relayPin, HIGH); // Relay OFF (Pump OFF)
    Serial.println("Pump Status: OFF (Soil is moist)");
  }

  delay(5000); // Wait 5 seconds before next reading
}
