void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);//p4g
  pinMode(2,OUTPUT);//p4y
  pinMode(3,OUTPUT);//p4r
  pinMode(4,OUTPUT);//p3g
  pinMode(5,OUTPUT);//p3y
  pinMode(6,OUTPUT);//p3r
  pinMode(7,OUTPUT);//p2g
  pinMode(8,OUTPUT);//p2y
  pinMode(9,OUTPUT);//p2r
  pinMode(10,OUTPUT);//p1g
  pinMode(11,OUTPUT);//p2y
  pinMode(12,OUTPUT);//p1r
}

void loop() {
  // put your main code here, to run repeatedly:
  //for pole1 green
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(9,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);//all reds high 
  digitalWrite(12,LOW);//p1 turning to green
  digitalWrite(11,HIGH);
  delay(200);
  digitalWrite(11,LOW);
 // digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(100);
  digitalWrite(11,LOW);
//for pole2 green
 
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(12,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);//all reds high 
  digitalWrite(9,LOW);//p2 turning to green
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(8,LOW);
  
 //pole 3
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(3,HIGH);//all reds high 
  digitalWrite(6,LOW);//p2 turning to green
  digitalWrite(5,HIGH);
  delay(200);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);

 // for pole 4
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(12,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);//all reds high 
  digitalWrite(3,LOW);//p2 turning to green
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(2,LOW);
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(2,LOW);
}
