int right = 13;
int left = 12;
int gripper2 = 10;
int gripper1 = 11;
  int v = 0;
 int h = 0;
 int f = 0;
 int g = 0;



void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}
void loop() 
{
int y = analogRead(A4);

//delay (500);
int x = analogRead(A5);
///Serial.println(a);
 
  
  
if(y>=330&&y <=350)
{
  digitalWrite(11,LOW);
//Serial.println("stop");
  digitalWrite(10,LOW);
}

if (y >= 370 )
{
    digitalWrite(11,HIGH);
//Serial.println("forward");
  digitalWrite(10,LOW);
// v = v+1;
//h = 0;
 //Serial.println(v);
 
}

if (y <= 300)
{
  digitalWrite(11,LOW);
//Serial.println("backward");
  digitalWrite(10,HIGH);
 //// h = h+1;
  v = 0;
   //  Serial.println(h);
}

if(x >=300  )
{

  digitalWrite(13, HIGH); 
  Serial.println("open");
      digitalWrite(12, LOW); 
//g = g+1;
//f = 0;

}

if(x <=300 )
{


    digitalWrite(13,LOW);
    digitalWrite(12, HIGH); 
//f = f+1;
//g = 0;
}
//if ( v == 9)
//{
//digitalWrite (10,LOW);
//digitalWrite (11,LOW);


//}
//if ( h == 9 )
//{
//digitalWrite (10,LOW);
//digitalWrite (11,LOW);

//}
//if ( f == 9)
//{
//digitalWrite (13,LOW);
//digitalWrite (12,LOW);



//}
////if ( g == 9 )
//{
 
//digitalWrite (13,LOW);
//digitalWrite (12,LOW);

//}

}
