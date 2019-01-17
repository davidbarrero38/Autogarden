void setup() {
 pinMode(13, OUTPUT);
 pinMode(8, OUTPUT);
 Serial.begin(9600);

}

void loop() {


 
  //sensor humedad //
  
 Serial.print("Valor del sensor de humedad : ");
 Serial.println(analogRead(A0));
 delay(1000);
 if(analogRead(A0)<500){
  digitalWrite( 13 , HIGH);
  delay(1000);  
  digitalWrite(13, LOW);
  delay(50000);
 }
 if(analogRead(A0)<500){
  digitalWrite( 13 , HIGH);
  delay(1000);  
  digitalWrite(13, LOW);
  delay(500);
 }
  digitalWrite(8, HIGH);   
  delay(500000);                       
  digitalWrite(8, LOW);   
  delay(500);     

  
}
