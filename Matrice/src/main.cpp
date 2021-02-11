#include <Arduino.h>
int i=0;
int cols[] = {99,13,3,4,10,6};//il primo valore è un valore vuoto per iniziare le colonne da 1 anzichè 0 solo per più facile comprensione gli altri valori sono valori dei pin assegnati
int rows[] = {99,9,14,8,12,5,1,7,2};//il primo valore è un valore vuoto per iniziare le colonne da 1 anzichè 0 solo per più facile comprensione

int pinArray[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15};
uint8_t t[] = {
1,1,1,1,1,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0};

uint8_t a[] = {
1,1,1,1,1,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0,
0,0,1,0,0};

void setup() {
 for (i=0;i<=14;i++) {
  pinMode(pinArray[i],OUTPUT);//inizializzo tutti i pin della matrice come output
 }
 if (i == 15){i=0;}
 Serial.begin(115200);
}

void write(uint8_t *image){  
Serial.print('1');

for (i=0; i<40;i++){
  //colonne
    if(image[i]==1 && (i==0 || i==5 || i==10 || i==15 || i==20 || i==25 || i==30 || i==35)){
      digitalWrite(cols[1], LOW);
      digitalWrite(cols[2], HIGH);
      digitalWrite(cols[3], HIGH);
      digitalWrite(cols[4], HIGH);
      digitalWrite(cols[5], HIGH);
    }
    else if(image[i]==1 && (i==1 || i==6 || i==11 || i==16 || i==21 || i==26 || i==31 || i==36)){
      digitalWrite(cols[1], HIGH);
      digitalWrite(cols[2], LOW);
      digitalWrite(cols[3], HIGH);
      digitalWrite(cols[4], HIGH);
      digitalWrite(cols[5], HIGH);
    }
    else if(image[i]==1 && (i==2 || i==7 || i==12 || i==17 || i==22 || i==27 || i==32 || i==37)){
      digitalWrite(cols[1], HIGH);
      digitalWrite(cols[2], HIGH);
      digitalWrite(cols[3], LOW);
      digitalWrite(cols[4], HIGH);
      digitalWrite(cols[5], HIGH);
    }
    else if(image[i]==1 && (i==3 || i==8 || i==13 || i==18 || i==23 || i==28 || i==33 || i==38)){
      digitalWrite(cols[1], HIGH);
      digitalWrite(cols[2], HIGH);
      digitalWrite(cols[3], HIGH);
      digitalWrite(cols[4], LOW);
      digitalWrite(cols[5], HIGH);
    }    
    else if(image[i]==1 && (i==4 || i==9 || i==14 || i==19 || i==24 || i==29 || i==34 || i==39)){
      digitalWrite(cols[1], HIGH);
      digitalWrite(cols[2], HIGH);
      digitalWrite(cols[3], HIGH);
      digitalWrite(cols[4], HIGH);
      digitalWrite(cols[5], LOW);
    }       

   //righe 
    if(image[i]==1 && i<=4){//se almeno 1 dei led di riga 1 è acceso
      digitalWrite(rows[1], HIGH);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=9){//se almeno 1 dei led di riga 2 è acceso 
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], HIGH);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=14){//se almeno 1 dei led di riga 3 è acceso
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], HIGH);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=19){//se almeno 1 dei led di riga 4 è acceso
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], HIGH);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=24){//se almeno 1 dei led di riga 5 è acceso
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], HIGH);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=29){//se almeno 1 dei led di riga 6 è acceso
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], HIGH);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=34){//se almeno 1 dei led di riga 7 è acceso
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], HIGH);
      digitalWrite(rows[8], LOW);
      //delay(1);
    }
    else if(image[i]==1 && i<=39){//se almeno 1 dei led di riga 8 è acceso
      digitalWrite(rows[1], LOW);
      digitalWrite(rows[2], LOW);  //spengo le altre righe
      digitalWrite(rows[3], LOW);  //spengo le altre righe
      digitalWrite(rows[4], LOW);
      digitalWrite(rows[5], LOW);
      digitalWrite(rows[6], LOW);
      digitalWrite(rows[7], LOW);
      digitalWrite(rows[8], HIGH);
      //delay(1);
    }
      digitalWrite(cols[1], HIGH);
      digitalWrite(cols[2], HIGH);
      digitalWrite(cols[3], HIGH);
      digitalWrite(cols[4], HIGH);
      digitalWrite(cols[5], HIGH);
}
}//fine funzione write

void loop() {

  write(t);
  write(a);
  

}