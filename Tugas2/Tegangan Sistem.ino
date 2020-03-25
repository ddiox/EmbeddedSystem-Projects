ADC_MODE(ADC_VCC);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("System voltage(mV): ");
  Serial.print(ESP.getVcc());
  Serial.print("\n");
  delay(300);
}
