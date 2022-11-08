/* ULTRASONIDO:
     Rango: 2cm a 400cm
     Angulo: 30°
     Uso: la funcion fUS() devuelve el
          valor en centimetros.
*/

  //PINES (TRIG, ECHO)
    const byte US[] = { 2, 4 };

  //FUNCION
    float fUS(byte id = 0){
      long tiempo;
      digitalWrite(US[id * 2], HIGH);
      delay(10);
      digitalWrite(US[id * 2], LOW);
    
      tiempo = (pulseIn(US[id * 2 + 1], HIGH)/2);
    
      return tiempo * 0.0343;
    }



void setup(){
  /* ULTRASONIDO */
    for (byte i = 0; i < sizeof(US) / 2; i++) {
      pinMode(US[i * 2    ], OUTPUT);
      pinMode(US[i * 2 + 1], INPUT );
    }

  Serial.begin(9600);
}



void loop(){
  //EJ:
  Serial.print("Distancia: ");
  Serial.println(fUS(0));

  delay(500);
}
