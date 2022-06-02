/*  FUNCIONES:
      fDigitos(num, sistemaNumerico = 10):
        num: ingresa el número al que quieres contar sus dígitos.
        sistemaNumerico: especifica a que sistema numerico pertenece el número.
        
        return: la función devolverá un valor numerico (byte) que indica la cantidad de
          dígitos que conforman el numero ingresado.
          
        EJ 1: Contar digitos del número 1024 en el sistema decimál.
          fDigitos(1024);      //return: 4
        EJ 2: Contar digitos del número 0xA13 en el sistema exadecimál.
          fDigitos(0xA13, 16); //return: 3
        EJ 3: Contar digitos del número 71503 en el sistema octál (coloca 0 al inicio del número).
          fDigitos(071503, 8); //return: 5
	  
      sistemaNumerico(num, baseA, baseB = 10, _permitidos, permitidos[]):
	num: ingresa el número a ser convertido (solo admite numeros decimales, por ejemplo para
	  un numero octal no debe debe ingrsar 0765, en lugar de eso debe ingresar solo 765 ya que
	  al colocar cero delantes realmente convierte el número en decimal. Si ingresa 0765 debe
	  colocar 10 en baseA).
	baseA: especifica a que sistema numerico pertenece num.
	baseB: especifica a que base lo quieres pasar.

*/

byte fDigitos(unsigned long num, byte sistemaNumerico = 10) {
  byte cont = 0;
  
  while (num) {
    cont = cont + 1;
    num /= sistemaNumerico;
  }
  
  return (cont) ? cont : 1;
}

unsigned long sistemaNumerico(unsigned long num, uint8_t baseA, uint8_t baseB = 10, bool _permitidos = false, uint8_t permitidos[] = { }) {
  unsigned long ram = num;
  
  //DIGITOS
    int digitos = (int)fDigitos(num);

    int max = (int)(baseA/baseB) * digitos + 1;
    int frag[max]; //NUMERO FRAGMENTADO
    for (int i = 0; i<sizeof(frag)/sizeof(frag[0]); i++) {
      frag[i] = 0;
    }

  //FRAGMENTACION
    ram = num;
    for (int i = 0; i < digitos; i++) {
      frag[i] = ram - (ram / 10) * 10;
      ram /= 10;
    }
  
  //TRANSFORMACION A DECIMAL
  	unsigned long dec = 0;
  	int multi = 1;
  	for (int i = 0; i < max; i++) {
      dec += frag[i] * multi;
      multi *= 10;
    }
  
  //TRANSFORMACION A BASE B
  	int hasta = max;
    for (int i = 0; i < max; i++) {
      if (dec) {
        frag[i] = dec % baseB;
        dec = (int)(dec / baseB);
      }
      else {
        hasta = i;
        break;
      }
    }

  //RESULTADO
    num = 0;
  	multi = 1;
    if ( _permitidos ){
	  for (int i = 0; i < hasta; i++) {
        num += permitidos[frag[i]] * multi;
        multi *= 10;
      }
      if (!num) { num = permitidos[0]; }
    } else {
	  for (int i = 0; i < hasta; i++) {
        num += frag[i] * multi;
        multi *= 10;
      }
    }

  return num;
}


void setup() {
  Serial.begin(9600);
  
  int posibilidades = pow(sizeof(misNumeros), 4);
  Serial.print("Posibilidades: ");
  Serial.println(posibilidades);
  
  for(int i = 0; i < posibilidades; i++){
    unsigned long val = sistemaNumerico(i, 10, sizeof(misNumeros), true, misNumeros);
    
    byte digitos = fDigitos(val);
    for (byte i = 0; i < cantidadDeNumeros-digitos; i++) {
      Serial.print(misNumeros[0]);
    }
    
    Serial.println(val);
  }
}

void loop() { }
