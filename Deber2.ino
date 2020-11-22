/*
 * Deber 2
 * Jerson Baez
 * Realizar un programa que al presionar el pulsador cada vez, se visualiza a cada número primo hasta el 99. 
 */

  const int D=11;
  const int C=10;
  const int B=9;
  const int A=8; 
  const int btn=7;
  int cont=1;
  int decenas=13;
  int unidades=12;
  int dec;
  int uni;
  int i;
  bool p;

void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(btn,INPUT);
  pinMode(unidades,OUTPUT);
  pinMode(decenas,OUTPUT);

}

void loop() {
  if (digitalRead (btn)==HIGH){
  delay(300);
    cont++;
    p = true;
    for (i=2; i<cont; i++){
    if (cont%i == 0){
    p = false;}
   //Para Imprimir
        }if(p){
            dec=cont/10; 
            uni=cont-(dec*10);
                  
    }
      digitalWrite(decenas,HIGH);
      digitalWrite(unidades,LOW);
      //Imprimir valor de decenas
      contador(dec);
      delay(200);
      digitalWrite(decenas,LOW);
      digitalWrite(unidades,HIGH);
      //Imprimir valor de unidades
      contador(uni);
      delay(200);
  }
}
//Metodo para Impresion
void contador(int i){
  
  switch(i){
   case 0:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 1:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 2:
        digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 3:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
      break;
      case 4:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
      break;
      case 5:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
      break;
      case 6:
        digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
      break;
      case 7:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
      break;
      case 8:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,HIGH);
      break;
      case 9:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,HIGH);
      break;
 
  }
}
