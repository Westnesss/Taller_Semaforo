int rojo=10;      //definimos el valor del pin para el led rojo
int amarillo=9;  //definimos el valor del pin para el led amarillo
int verde=8;     //definimos el valor del pin para el led verde

//** Programa **//

void setup() {
  pinMode(verde,OUTPUT);   //declaramos el pin verde como salida  
  pinMode(amarillo,OUTPUT);//declaramos el pin amarillo como salida
  pinMode(rojo,OUTPUT);    //declaramos el pin rojo como salida  
}

void loop() {
 digitalWrite(verde,HIGH); //encendemos el led rojo
 delay(1000);             //esperamos 2 segundos
 digitalWrite(verde,LOW);  //apagamos el led rojo
 delay(1000);              //esperamos medio segundo
 
 digitalWrite(amarillo,HIGH); //encendemos el led amarillo
 delay(1000);                 //esperamos 2 segundos
 digitalWrite(amarillo,LOW);  //apagamos el led amarillo
 delay(1000);                  //esperamos medio segundo
 
 digitalWrite(rojo,HIGH); //encendemos el led verde
 delay(1000);              //esperamos 2 segundos
 digitalWrite(rojo,LOW);  //apagamos el led verde
 delay(1000);               //esperamos medio segundo
}
