int Buzzer = D4; //type data menyimpan bilangan bulat pada pin 8
int PushButton = D3; //type data menyimpan bilangan bulat pada pin 3

void setup() {
pinMode (Buzzer, OUTPUT); // Menjadikan pin D4 sebagai OUTPUT
pinMode (PushButton, INPUT); // Menjadikan pin D3 sebagai INPUT 

}

void loop() {

 if  (PushButton == HIGH) {  // Jika Push Button di tekan
digitalWrite (Buzzer, HIGH); // Maka Menyalakan pin D4, (HIGH = memberi tegangan pada pin D4 )
}
  else { // Jika tidak ditekan
  digitalWrite (Buzzer, LOW); //Mematikan pin D8 (LOW = tidak ada tengangan pada pin 8)
}

}