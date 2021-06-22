//"SWITCH" COMUN
  switch ( /* variable que se usara para decidir que caso sucederá */ ){
    case /* caso 1 */ :
      /* codigo */
      break; //FINALIZA EL SWITCH
      
    case /* caso 2 */ :
      /* codigo */
      break; //FINALIZA EL SWITCH
      
    case /* caso 3 */ :
      /* codigo */
      break; //FINALIZA EL SWITCH
  }

  //EJEMPLO
  char x = 'b';
  int num;

  switch ( x ){
    case 'a':
      num = 10;
      break;
    case 'b':
      num = 12;
      break;
    case 'c':
      num = 100;
      break;
  }
  //SE EJECUTARA EL CASO 'b' POR LO QUE LA VARIABLE num ALMACENARÁ EL NUMERO 12


//"SWITCH" CON UN CASO DEFAULT
