int sensorPins[2] = {A0, A1};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc0 = analogRead(sensorPins[0]);
  int adc1 = analogRead(sensorPins[1]);

  float temp0 = (adc0 * 500.0) / 1023.0;
  float temp1 = (adc1 * 500.0) / 1023.0;

  Serial.print(temp0);
  Serial.print(",");
  Serial.println(temp1);

  delay(1000);
}