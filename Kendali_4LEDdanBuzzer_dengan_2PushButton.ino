#define led1 D1
#define led2 D2
#define led3 D3
#define led4 D4
12
#define button1 D5
#define button2 D6
#define buzzer D7
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
pinMode(buzzer, OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
if (digitalRead(button1)){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(buzzer, LOW);
}else{
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(buzzer, HIGH);
if (digitalRead(button2)){
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(buzzer, LOW);
}else{
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(buzzer, HIGH);
}
}
}