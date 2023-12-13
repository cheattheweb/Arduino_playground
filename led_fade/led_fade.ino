int led = 9;
int brightness = 0;
int fadeAmount = 5;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(brightness);
  analogWrite(led, brightness);

  brightness = brightness + fadeAmount;

  if(brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;
  }
  delay(100);
}
