/* INFO:
   Rango: 2cm a 400cm
   Angulo: 30 grados
   Uso: la funcion ultraSonido() devuelve el
        valor en centimetros.
*/

const int pinTrig = 3; //PIN EMISOR
const int pinEcho = 2; //PIN RESEPTOR

float ultrasonido(byte trig, byte echo){
  long tiempo;
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  tiempo = (pulseIn(echo, HIGH)/2);

  return tiempo * 0.0343;
}

void setup(){
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);
}

void loop(){
  //Ejemplo:
  float var = ultrasonido(pinTrig, pinEcho);
}
