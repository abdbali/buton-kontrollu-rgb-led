int kled=9;
int yled=10;
int mled=11;
int kbuton=7;
int ybuton=6;
int mbuton=5;
int kirmizi=0;
int yesil=0;
int mavi=0;
void setup() {
pinMode(kled,OUTPUT);
pinMode(yled,OUTPUT);
pinMode(mled,OUTPUT);
pinMode(kbuton,INPUT);
pinMode(ybuton,INPUT);
pinMode(mbuton,INPUT);
}
void loop() {
 if(digitalRead(kbuton)==HIGH)
 {
 kirmizi+=10;
 if(kirmizi>255)
 kirmizi=0;
 }
 if(digitalRead(ybuton)==HIGH)
 {
 yesil+=10;
 if(yesil>255)
 yesil=0;
 }
 if(digitalRead(mbuton)==HIGH)
 {
 mavi+=10;
 if(mavi>255)
 mavi=0;
 }
 renkayarla(kirmizi,yesil,mavi);
 delay(10);
}
void renkayarla(int kirmizi, int yesil, int mavi)
{
 kirmizi=255-kirmizi;
 yesil=255-yesil;
 mavi=255-mavi;
 analogWrite(kled,kirmizi);
 analogWrite(yled,yesil);
 analogWrite(mled,mavi);
 
}