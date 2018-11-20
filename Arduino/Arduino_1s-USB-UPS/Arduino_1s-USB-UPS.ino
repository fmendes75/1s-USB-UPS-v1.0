int pin1 = 4;
int pinState= 0;
int count = 10;

void setup() {
  pinMode(pin1, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  
  Serial.begin(9600);
  count = 0;
}

void loop() {

  //Reset 
  count = 10;
  pinState = 0;
  //Pin polling
  while(count--){
    if(!digitalRead(pin1))
      pinState++;
  }
  //Pin detection
  if(pinState > 8){     //80% of readings LOW. Debouncing
    Serial.println("fail");
    digitalWrite(LED_BUILTIN, HIGH);  
  }
}
