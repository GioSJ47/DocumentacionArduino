/* KY-040 - ENCODER ROTATORIO */
  //PINES (DT, CLK)
    const byte KY[] = { 4, 2 };

  //NO TOCAR
    byte KY_EST[sizeof(KY)/2];  //ESTADO

  //FUNCION
    int kyRead (byte id = 0) {
      bool a = digitalRead(KY[id * 2    ]);
      bool b = digitalRead(KY[id * 2 + 1]);
      int res = 0;
      
      if ( a && b ) {
        if      ( KY_EST[id] == 4 ) {
          res =  1;
        }
        else if ( KY_EST[id] == 9 ) {
          res = -1;
        }
        
        KY_EST[id] = 0;
      }
    
      else if ( !a && b ) {
        if ( !KY_EST[id] ) {
          KY_EST[id] = 1;
        }
        else if ( KY_EST[id] == 1 || KY_EST[id] == 3 ) {
          KY_EST[id] = 2;
        }
        else if ( KY_EST[id] == 8 ) {
          KY_EST[id] = 9;
        }
      }
      
      else if ( a && !b ) {
        if ( !KY_EST[id] ) {
          KY_EST[id] = 6;
        }
        else if ( KY_EST[id] == 3) {
          KY_EST[id] = 4;
        }
        else if ( KY_EST[id] == 6 || KY_EST[id] == 8 ) {
          KY_EST[id] = 7;
        }
      }
      
      else if ( !a && !b ) {
        if      ( KY_EST[id] == 2 || KY_EST[id] == 4 ) {
          KY_EST[id] = 3;
        }
        else if ( KY_EST[id] == 7 || KY_EST[id] == 9 ) {
          KY_EST[id] = 8;
        }
      }
      
      return res;
    }



void setup() {
  /* KY-040 AJUSTE */
    for (byte i = 0; i < sizeof(KY); i++) {
      pinMode(KY[i], INPUT);
    }
  
  Serial.begin(9600);
}



byte num = 0, anterior = 0;
void loop() {
  //EJ:
  num += kyRead(0);
  
  if ( num != anterior ) {
    Serial.println(num);
    anterior = num;
  }
}
