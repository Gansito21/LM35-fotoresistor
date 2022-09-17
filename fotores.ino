int fotodi = 34;  // Cada una de estas 3 opciones son equivalentes
// const int fotodi = 34;
//#define fotodi 34
//#define termo 34

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  int m =analogRead(fotodi); 
  Serial.println();

  Serial.println(analogRead(fotodi));
  delay(100); 
  //Esta instruccion es equivalente a la anterior
  
  //Ahora llamamos al sensor de temp
  //La conversion a grados C:
  //  5000÷10(4095)
  //Serial.println(analogRead(termo)*0.1221);
  //delay(1000);
  
  
}