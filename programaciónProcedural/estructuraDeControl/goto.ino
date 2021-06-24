//DESCRIPCION: "GOTO" TRANSFIERE EL FLUJO DEL PROGRAMA A UN PUNTO ETIQUETADO EN EL
//PROGRAMA.


//ESTABLECER PUNTO DE SALTO
  nombreDePunto:


//REALIZAR SALTO A UN PUNTO
  goto nombreDePunto;


//////////////////////////
// EJEMPLO 1 RETROCEDER //
//////////////////////////
  int x = 0;
  Serial.println( "X vale 0" );

  repetir:
    x++;
    Serial.print( "Ahora X vale " );
    Serial.println( x );

  if( x < 3 ){
    goto repetir;
  }

  Serial.println( "Fin" );

  /*  RESULTADO EN MONITOR SERIAL:
        X vale 0
        Ahora X vale 1
        Ahora X vale 2
        Ahora X vale 3
        Fin
  */


///////////////////////////////////
// EJEMPLO 2 SALTEAR O ADELANTAR //
///////////////////////////////////
  int x = 0;
  Serial.println( "X vale 0" );

  repetir:
    x++;
    if( x > 3 && x < 7 ){
      goto saltear;
    }
      Serial.print( "Ahora X vale " );
      Serial.println( x );
    saltear:

  if( x < 9 ){
    goto repetir;
  }

  Serial.println( "Fin" );

  /*  RESULTADO EN MONITOR SERIAL:
        X vale 0
        Ahora X vale 1
        Ahora X vale 2
        Ahora X vale 3
        Ahora X vale 7
        Ahora X vale 8
        Ahora X vale 9
        Fin
  */
