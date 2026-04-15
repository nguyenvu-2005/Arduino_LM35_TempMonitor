int sensorPins[3] = {A0, A1, A2};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc0 = analogRead(sensorPins[0]);
  int adc1 = analogRead(sensorPins[1]);
  int adc2 = analogRead(sensorPins[2]);

  float temp0 = (adc0 * 500.0) / 1023.0;
  float temp1 = (adc1 * 500.0) / 1023.0;
  float temp2 = (adc2 * 500.0) / 1023.0;

// Xuất dữ liệu qua Serial theo định dạng JSON cho cả 3 kênh
  Serial.print("{\"A0\":");
  Serial.print(temp0);
  Serial.print(",\"A1\":");
  Serial.print(temp1);
  Serial.print(",\"A2\":");
  Serial.print(temp2);
  Serial.println("}");

  delay(1000);
}