#include <DHT.h>

// pins analog in
#define DHTPIN A0 
//définition du capteur dht11 
#define DHTTYPE DHT11
// création d'un objet dht avec son pins et son type
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 test...");
}

void loop() {
  delay(2000);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(humidity)) {
    Serial.println("Erreur.");
  } else {
    Serial.print("Humidité: ");
    Serial.print(humidity);
    Serial.print(" % | Temperature: ");
    Serial.print(humidity);
    Serial.println(" °C");
  }
}