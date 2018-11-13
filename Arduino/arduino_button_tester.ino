int pin1 = 4;
int pinState = 0;
int count = 0;

void setup() {
  pinMode(pin1, INPUT);
  Serial.begin(9600);
  count = 0;
}

void loop() {
  pinState = digitalRead(pin1);
  if(pinState==1){
    count++;
  }
  if(count == 10000){
    Serial.println("fail");
    count = 0;  
  }
}
