//"MIENTRAS" COMUN
  while( /* condicion */ ){
    /* codigo que se ejecuta mientra que la condicion sea verdadera */
  }
  /*  LA PRIMERA VEZ SE CONSULTA LA CONDICION, SI ES VERDADERA SE EJECUTA EL
      CODIGO ENTRE LLAVES, AL FINALIZAR ESA EJECUCION SE VUELVE A CONSULTAR
      LA CONDICION Y SI ES VERDADERA SE VUELVE A REPETIR EL CODIGO Y ASÍ
      CICLICAMENTE HASTA QUE LA CONDICION SEA FALSA.
  */


//"MIENTRAS" CON SU CONDICION AL FINAL
  do {
    /* codigo que se ejecuta al menos una vez y se seguirá ejecutando mientras
    que la condicion sea verdadera */
  } while( /* condicion */ );


//INTERRUPCION DEL CICLO "MIENTRAS" CON LA INSTRUCCION break
  int i = 0;

  while( true ){
    //CODIGO
    
    if( i >= 10 ){
      break;
    }
    
    i++;
  }
  //EL CODIGO INTERNO DEL CICLO "MIENTRAS" SE SEGUIRÁ EJECUTANDO CICLICAMENTE HASTA
  //QUE LA VARIABLE i SEA IGUAL O MAYOR A 10, EN ESE CASO, SE EJECUTARÁ LA INSTRUCCION
  //break DANDO POR FINALIZADO EL CICLO.

//INTERRUPCION DEL CICLO "MIENTRAS" CON LA INSTRUCCION continue
  
