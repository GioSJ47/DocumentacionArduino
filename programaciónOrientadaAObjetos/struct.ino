/*
  Struct: Estructura.
  Buena práctica: Los identificadores de estructuras comienzan en mayúsculas.
*/

//CREAR STRUCT
  struct Persona {
    byte edad;
    
    void decirEdad() {
      if (edad) {
        Serial.print("Tengo ");
        Serial.print(edad);
        Serial.println(" años");
      } else {
        Serial.println("No se mi edad");
      }
    }
    
    String ciudad;
    
    void decirCiudad() {
      Serial.print("Vivo en la ciudad de ");
      Serial.print(ciudad);
    }
  }

//USAR UNA STRUCT
  Persona juan;
  juan.edad = 31;
  juan.ciudad = "New York";
