/* BOTONES */
  //PINES PARA BOTONES
    byte BTN[] = { 2, 4, 7 };

  //NO TOCAR
    bool BTN_BOOL[sizeof(BTN)];
    unsigned long BTN_T[sizeof(BTN)];
    byte BTN_MILLIS = 5;

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
