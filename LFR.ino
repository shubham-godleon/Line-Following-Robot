int frntsen = A0; 
int leftsen = A1; 
int rightsen = A2;

int leftmotor1 = 9;
int leftmotor2 = 10;
int rightmotor1 = 3;
int rightmotor2 = 5;
void setup() 
{

pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

}

void loop() 
{

if((leftsen>=300&&frntsen<=100&&rightsen>=300) || (leftsen<=100&&frntsen<=100&&rightsen<=100))
{
digitalWrite(3,HIGH);
digitalWrite(5,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}
if((leftsen>=300&&frntsen>=300&&rightsen>=300) || (leftsen<=100&&frntsen>=300&&rightsen<=100))
{
digitalWrite(3,LOW);
digitalWrite(5,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
if((leftsen>=300&&frntsen>=300&&rightsen<=100) || (leftsen>=300&&frntsen<=100&&rightsen<=100))
{
digitalWrite(3,HIGH);
digitalWrite(5,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
}
if((leftsen<=100&&frntsen>=300&&rightsen>=300) || (leftsen<=100&&frntsen<=100&&rightsen>=300))
{
digitalWrite(3,LOW);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}

}
