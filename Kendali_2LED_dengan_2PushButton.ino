const int buttonSaya_1 = D3; // mengubah ‘buttonSaya’ menjadi variabel pin 2
const int buttonSaya_2 = D4;
const int ledSaya_1 = D1; // mengubah ‘ledSaya’ menjadi variabel pin 3
const int ledSaya_2 = D2;
int buttonStatusSaya = 0; // mengubah ‘buttonStatusSaya’ menjadi variable 0
void setup()
{
pinMode(ledSaya_1, OUTPUT); // mengubah ‘ledSaya’ menjadi pin OUTPUT
pinMode(ledSaya_2, OUTPUT);
pinMode(buttonSaya_1, INPUT); //mengubah ‘buttonSaya’ menjadi pin INPUT
pinMode(buttonSaya_2, INPUT);
}
void loop()
{
// untuk membaca variabel 'buttonSaya' yang akan dipindahkan ke variabel
‘buttonStatusSaya’
buttonStatusSaya = digitalRead(buttonSaya_1);
// jika ‘buttonStatusSaya’ saya mendapatkan variabel nilai 1 atau HIGH atau
ditekan ‘buttonSaya’-nya
if (buttonStatusSaya == HIGH)
5
{
digitalWrite(ledSaya_1, HIGH); //maka ‘ledSaya’ menyala
}
else
{
digitalWrite(ledSaya_1, LOW); //apabila tidak ada, maka ‘ledSaya’ mati
}
buttonStatusSaya = digitalRead(buttonSaya_2);
// jika ‘buttonStatusSaya’ saya mendapatkan variabel nilai 1 atau HIGH atau
ditekan ‘buttonSaya’-nya
if (buttonStatusSaya == HIGH)
{
digitalWrite(ledSaya_2, HIGH); //maka ‘ledSaya’ menyala
}
else
{
digitalWrite(ledSaya_2, LOW); //apabila tidak ada, maka ‘ledSaya’ mati
}
}