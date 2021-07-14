int pinDB = 12; //pin numero 12, direccion motor B
int pinVB = 3; //Velocidad de motor B

int pinDA = 13;
int pinVA = 11;  
 

void setup() {
  pinMode(pinDB, OUTPUT); // pin 12
  pinMode(pinVB, OUTPUT); //pin 3 (Salida PWM)


  pinMode(pinDA, OUTPUT); // pin 13
  pinMode(pinVA, OUTPUT); //pin 11 (Salida PWM)
}



//Instrucciones para avanzar
void advance(){
  digitalWrite(pinDB, HIGH); // para que ande hacia adelante
  digitalWrite(pinDA, HIGH); // para que ande hacia adelante

  analogWrite(pinVB, 255);
  analogWrite(pinVA, 255);
}

void finish(){
  digitalWrite(pinDB, LOW); // para que ande hacia adelante
  digitalWrite(pinDA, LOW); // para que ande hacia adelante

  analogWrite(pinVB, 255);
  analogWrite(pinVA, 255);
}


void loop() {
 advance(); 
 delay(1000); 
 finish(); 
 delay(1000); 

}
