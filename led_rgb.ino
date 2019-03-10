int b1 = 2; //pin boton 1
int b2 = 3; //pin boton 2
int b3 = 4; //pin boton 3
int red = 13; //pin rojo
int blue = 12; //pin azul
int green = 11; //pin verde
bool e1; //Estado de boton 1
bool e2; //Estado de boton 2
bool e3; //Estado de boton 3


void setup() {
  Serial.begin(9600);
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
 e1 = digitalRead(b1); //Lee estado del boton 1
 e2 = digitalRead(b2); //Lee estado del boton 2
 e3 = digitalRead(b3); //Lee estado del boton 3
 //En Pull-up, estado es 0 al presionar
 //En pull-up, estado es 1 son presionar
 
 if(!e1 && e2 && e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
 }
if(e1 && e2 && !e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
}
if(e1 && !e2 && e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
}
if(!e1 && !e2 && !e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  
}
if(e1 && e2 && e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
}

if(e1 && !e2 && !e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
}
if(!e1 && !e2 && e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
}
if(!e1 && e2 && !e3){
  //Prende si al menos uno está presionado
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
}
}
