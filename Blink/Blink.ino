#define BUZZER_PIN 8  // Define the pin connected to the buzzer

void setup() {
  pinMode(BUZZER_PIN, OUTPUT); // Set the buzzer pin as OUTPUT
}

void loop() {
  // Turn the buzzer ON
  digitalWrite(BUZZER_PIN, HIGH);
  delay(1000); // Buzzer sounds for 1 second

  // Turn the buzzer OFF
  digitalWrite(BUZZER_PIN, LOW);
  delay(1000); // Buzzer off for 1 second
}
