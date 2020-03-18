int redLED = 5; // Pinout D1  is connected with LED (red) anode
int yellowLED = 4; // Pinout D2 is connected with LED (yellow) anode
int greenLED = 0; // Pinout D3 is connected with LED (green) anode

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  digitalWrite(redLED, HIGH); // LED (red) is ON
  digitalWrite(yellowLED, LOW); // LED (yellow) is OFF
  digitalWrite(greenLED, LOW); // LED (green) is OFF
  delay(2000);

  digitalWrite(redLED, LOW); // LED (red) is OFF
  digitalWrite(yellowLED, HIGH); // LED (yellow) is ON
  digitalWrite(greenLED, LOW); //LED (green) is OFF
  delay(2000);

  digitalWrite(redLED, LOW);  // LED (red) is OFF
  digitalWrite(yellowLED, LOW); // LED (yellow) is OFF
  digitalWrite(greenLED, HIGH); //LED (green) is ON
  delay(2000);
}
