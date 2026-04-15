int sensorPins[2] = {A0, A1};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc0 = analogRead(sensorPins[0]);
  int adc1 = analogRead(sensorPins[1]);

  float temp0 = (adc0 * 500.0) / 1023.0;
  float temp1 = (adc1 * 500.0) / 1023.0;

// Xuất dữ liệu qua Serial theo định dạng JSON
  Serial.print("{\"A0\":");
  Serial.print(temperatures[0]);
  Serial.print(",\"A1\":");
  Serial.print(temperatures[1]);
  Serial.println("}");

  delay(1000);
}