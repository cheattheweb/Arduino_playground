
#define PIN_A A0
int sensor_value = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_A, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_value = analogRead(PIN_A);
  Serial.println(sensor_value);
  delay(100);
} 
