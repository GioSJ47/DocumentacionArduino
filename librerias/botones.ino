/* INFORMACION * /
  DEFINICION:
    Esta librería no solo es útil para el manejo de botones, es útil para cualquier componente digitál.
  
  FUNCIONES:
    buttonRead(BotonID):
      La función devuelve 0 si el botón no está siendo precionado.
      La función devuelve 1 si el botón está siendo precionado.
      La función devuelve 2 si el botón ya lleva rato siendo precionado.

/* RECURSO */
  //PINES PARA BOTONES
    byte BTN[] = { 2, 4, 7 };

  //NO TOCAR
    bool BTN_BOOL[sizeof(BTN)];
    unsigned long BTN_T[sizeof(BTN)];
    byte BTN_MILLIS = 5; //ANTI FALSO CONTACTO MECANICO

  //FUNCION
    byte buttonRead (byte id = 0) {
      if (BTN_T[id] < millis() && !BTN_BOOL[id] && digitalRead(BTN[id])){
        BTN_T[id] = millis() + BTN_MILLIS;
        BTN_BOOL[id] = true;
        return 1;
      } else if (BTN_T[id] < millis() && BTN_BOOL[id]&& !digitalRead(BTN[id])) {
        BTN_T[id] = millis() + BTN_MILLIS;
        BTN_BOOL[id] = false;
        return 0;
      } else if(BTN_BOOL[id]) {
        return 2;
      }
    }

void setup() {
  for(byte i = 0; i < sizeof(BTN); i++) {
    pinMode(BTN[i], INPUT);
  }
  
  Serial.begin(9600);
}

/* EJEMPLO DE USO */
  void loop() {
    Serial.print("A: ");
    Serial.println((int)buttonRead(0));

    Serial.print("B: ");
    Serial.println((int)buttonRead(1));

    Serial.print("C: ");
    Serial.println((int)buttonRead(2));

    Serial.println("");
    delay(1000);
  }
