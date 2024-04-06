
int led = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(A0);
Serial.println(x);
 delay (500);
 if (x<=400)
 {
  digitalWrite(13,LOW);
  
 }
  if (x>=400)
 {
  digitalWrite(13,HIGH);
  
 }
}
