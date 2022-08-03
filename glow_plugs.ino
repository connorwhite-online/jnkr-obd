// Instantiate applicable libraries here

void.setup() {
  // Initialize the library
  Serial.begin(9600);
  
  // Temperature sensor port

  // Relay port

}

void.loop() {
  // If temp is at or below 70 degrees, turn on the relay
    int temp = temperatureSensor.read();
    int threshold = 70;

  if (temp <= threshold) {
    digitalWrite(relay, HIGH);
  } else {
    digitalWrite(relay, LOW);
  }
}