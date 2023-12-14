int buttonPin = 2;
int ledPin = 13;

int buttonValue = 0;

void setup(){

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  buttonValue = digitalRead(buttonPin);
  if(buttonValue == HIGH){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  Serial.println(buttonValue);
  delay(100);
}