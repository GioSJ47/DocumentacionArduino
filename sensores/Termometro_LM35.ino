/* LM35 */
  //PINES
    const byte LM35[] = { A0 };

  //FUINCION 
    float fLM35 (byte id = 0) {
      return (5.0 * analogRead(LM35[id]) * 100.0) / 1024.0;
    }



void setup() {
  /* LM35 */
    for (byte i = 0; i < sizeof(LM35); i++) {
      pinMode(LM35[i], INPUT);
    }
  
  Serial.begin(9600);
}



void loop() {
  //EJ:
  Serial.print(fLM35());
  Serial.println("°C");
  
  delay(1);
}
