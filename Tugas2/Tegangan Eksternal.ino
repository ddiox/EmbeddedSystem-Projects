const int POTPin = A0;  // Kaki tengah potensiometer dihubungkan ke pin analog A0
const int LEDPin = 5; // Kaki LED positif atau anoda dihubungkan ke pin D1

int sensorValue = 0;        // Membaca nilai dari potensiometer
int outputValue = 0;        // PWM (analog out)

void setup() {
  Serial.begin(9600);
  pinMode(POTPin, OUTPUT);
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(POTPin); // Mendapatkan nilai dari potensiometer 
  
  outputValue = map(sensorValue, 0, 1023, 0, 255); // Mentransformasi nilai 0-1023 menjadi 0-255
 
  analogWrite(LEDPin, outputValue); // Mengatur tingkat kecerahan LED antara 0-255

  // Cetak hasilnya ke serial monitor
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  delay(2);
}
