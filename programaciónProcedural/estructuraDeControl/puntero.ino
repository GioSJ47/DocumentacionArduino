short i = 5;

//SE USA EL * PARA INDICAR QUE ESA VARIABLE SERÁ USADA COMO PUNTERO LUEGO
void suma(short *inp, short sum){
  *inp+=sum;
}

void setup(){
  Serial.begin(9600);
}

void loop(){
  suma(&i, 1); //AQUÍ SE USAR EL & PARA ENTREGAR LA VARIABLE A LA FUNCION Y ASÍ ESTA LA MODIFICA DIRECTAMENTE.
  Serial.println(i);
}
