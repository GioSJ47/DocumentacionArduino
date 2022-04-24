/*
  CAPACIDADES DE EEPROM DE LOS DISTINTOS ARDUIONOS:
    - Duemilanove: 512 B
    - Mega:        4   kB
    - Uno:         1   kB
    - Nano:        1   kB
*/

//INCLUIR LIBRERIA
  #include <EEPROM.h>

//ESCRIBIR EN LA EEPROM
  EEPROM.write(posicion, valor byte);

  //EJ:
    EEPROM.write(8, 200); //Posicion 8, valor 200

//LEER LA EEPROM
  EEPROM.read(posicio);

  //EJ:
    byte x = EEPROM.read(8); //x valdrá 200

//TAMAÑO DE LA EEPROM
  EEPROM.length(); //Devuelve el tamaño de la EEPROM en Bytes.

//ELIMINAR DATOS DE LA EEPROM
  EEPROM.write(posicion, 0);

//VACIAR TODA LA EEPROM
  for (int i = 0; i < EEPROM.length(); i++) {
    EEPROM.write(i, 0);
  }
