int led = 13; //led pin 13 
int state = 0;
void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);
}

void loop() {
  if (Serial.available()>0)
  {
    state = Serial.read();
     if(state == 49)
        digitalWrite(led,HIGH);
     else if(state == 48)
        digitalWrite(led,LOW);
  }

}
