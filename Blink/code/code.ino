#define TRIG_PIN 9
#define ECHO_PIN 10
#define BUZZER_PIN 8

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  long duration, distance;
  
  // Clear the trigger
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Set the trigger to HIGH for 10 microseconds
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Read the echo pin, return the sound wave travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate the distance (duration / 2) / 29.1 to convert to cm
  distance = (duration / 2) / 29.5;
  
  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Check if the distance is less than 10 cm
  if (distance < 10) {
    digitalWrite(BUZZER_PIN, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(BUZZER_PIN, LOW);   // Turn off the buzzer
  }
  
  delay(500); // Wait for half a second before the next loop
}


 



 
