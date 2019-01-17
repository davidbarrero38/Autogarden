void setup() {
 pinMode(13, OUTPUT);
 pinMode(8, OUTPUT);
 Serial.begin(9600);

}

void loop() {

  //Luz

  digitalWrite(8, HIGH);   
  delay(5000);                       
  digitalWrite(8, LOW);   
  delay(5000);     


 
  //sensor humedad //
  
 Serial.print("Valor del sensor de humedad : ");
 Serial.println(analogRead(A0));
 delay(1000);
 if(analogRead(A0)<500){
  digitalWrite( 13 , HIGH);  
 }
 if(analogRead(A0)>500){
  digitalWrite( 13 , LOW);    //codigo de riego
  
 }


}
