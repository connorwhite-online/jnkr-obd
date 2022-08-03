// Instantiate applicable libraries here

// Pinout
int AmbientAir = 3; // Ambient air temp sensor at pin 3
int Relay = 4; // Relay at pin 4

void.setup() {
  // Initialize the library
  Serial.begin(9600);
  
  pinMode(AmbientAir, INPUT);
  pinMode(Relay, OUTPUT);

  // Relay port off until actuated
  digitalWrite(Relay, LOW);

}

void.loop() {

    int threshold = 70; // Threshold temperature for relay activation

    // Read the temperature sensor
    digitalRead(AmbientAir);

    // If temp is at or below 70 degrees, turn on the relay
    if (AmbientAir <= threshold) {
        digitalWrite(Relay, HIGH);
    } else {
        digitalWrite(Relay, LOW);
    }
}