int led_pin=2 ;
int Buzzer=4 ;
int analog_pin=A0 ;
int fan=A1 ;


void setup() {
  Serial.begin(9600);
   pinMode(led_pin, OUTPUT);
   pinMode(Buzzer, OUTPUT);
   pinMode(analog_pin,INPUT);
   pinMode(fan,OUTPUT);
}


void loop() {
  int conc ;                     // concentation(ppm)
  conc=analogRead(analog_pin);
   //Serial.println(temp);
  
  if(conc>270)
  {
    Serial.println("Gas Detection!!");  
    digitalWrite(led_pin,HIGH);
    digitalWrite(Buzzer,HIGH);
    digitalWrite(fan,HIGH);
    //delay(1000);
    //digitalWrite(led_pin,LOW);
    // digitalWrite(Buzzer,LOW);
    //delay(1000);
   }
   else
   {
      Serial.println("No dangerous!"); 
      digitalWrite(led_pin,LOW);
      digitalWrite(Buzzer,LOW);
      digitalWrite(fan,LOW);
      //delay(500);
   }
}
