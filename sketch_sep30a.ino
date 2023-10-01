int count;
void setup(){
 Serial.begin(9600);
}
void loop(){
  Serial.print('hellow');
  delay(4000);
  Serial.print('hi');
  delay(4000);
}