
void forward(){
 digitalWrite(6,HIGH) 
 digitalWrite(9,LOW) 
 digitalWrite(10,HIGH) 
 digitalWrite(11,LOW) 
}
void backward(){
 digitalWrite(6,LOW) 
 digitalWrite(9,HIGH) 
 digitalWrite(10,LOW) 
 digitalWrite(11,HIGH) 
}
void right(){
 digitalWrite(6,LOW) 
 digitalWrite(9,HIGH) 
 digitalWrite(10,HIGH) 
 digitalWrite(11,LOW) 
}
void left(){
 digitalWrite(6,HIGH) 
 digitalWrite(9,LOW) 
 digitalWrite(10,LOW)
 digitalWrite(11,HIGH) 
}
void loop(){
 forward(); 
}
