/*
  WHILE: Mientras.
  DO: Hacer.
*/

//WHILE COMUN
  while( /* condicion */ ){
    /* codigo que se ejecuta mientra que la condicion sea verdadera */
  }
  /*  LA PRIMERA VEZ SE CONSULTA LA CONDICION, SI ES VERDADERA SE EJECUTA EL
      CODIGO ENTRE LLAVES, AL FINALIZAR ESA EJECUCION SE VUELVE A CONSULTAR
      LA CONDICION Y SI ES VERDADERA SE VUELVE A REPETIR EL CODIGO Y ASÍ
      CICLICAMENTE HASTA QUE LA CONDICION SEA FALSA.
  */


//WHILE CON SU CONDICION AL FINAL
  do {
    /* codigo que se ejecuta al menos una vez y se seguirá ejecutando mientras
    que la condicion sea verdadera */
  } while( /* condicion */ );


//INTERRUPCION DEL CICLO WHILE CON LA INSTRUCCION break
  int i = 0;

  while( true ){
    //CODIGO
    
    if( i >= 10 ){
      break;
    }
    
    i++;
  }
  //EL CODIGO INTERNO DEL CICLO WHILE SE SEGUIRÁ EJECUTANDO CICLICAMENTE HASTA
  //QUE LA VARIABLE i SEA IGUAL O MAYOR A 10, EN ESE CASO, SE EJECUTARÁ LA INSTRUCCION
  //break DANDO POR FINALIZADO EL CICLO.

//INTERRUPCION DEL CICLO WHILE CON LA INSTRUCCION continue
  int x = 0;  

  while( x < 10 ){
    //CODIGO 1
    
    if( x == 5 ){
      continue;
    }
    
    //CODIGO 2
  }
  //"CODIGO 2" NO SERÁ EJECUTADO CUANDO x VALGA 5, PERO SI SERÁ EJECUTADO EN
  //CUALQUIER OTRO VALOR DE x.
  //LA INSTRUCCION continue DESVIA EL FLUJO DE EJECUCION AL INICIO DEL CICLO DODNE
  //SE ENCUENTRA COMO SI SE HUBIERA TOPADO CON SU LLAVE DE CIERRE.
