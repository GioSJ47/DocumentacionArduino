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
  switch ( /* variable que se usara para decidir que caso sucederá */ ){
    case /* caso 1 */ :
      /* codigo */
      break;
      
    case /* caso 2 */ :
      /* codigo */
      break;
      
    default /* caso alternativo */ :
      /* codigo */
      //NO ES NECESARIO HACER USO DE LA INSTRUCCION break
  }


//"SWITCH" CON MAS DE UNA POSIBILIDAD POR CASO
  int x = 122;

  switch ( x ){
    case ( 20, 25 ):
      /* codigo */
      break;
      
    case ( 30 ):
      /* codigo */
      break;
    
    case ( 80, 100, 122, 200 ):
      /* codigo */
      break;
      
    default /* caso alternativo */ :
      /* codigo alternativo */
  }
  //SE EJECUTARÁ EL TERCER CASO PORQUE x ALMACENA 122


//"SWITCH" HACIENDO USO DE MAS DE UNA VARIABLE ( COMPORTAMIENTO DE "O LOGICO" ( || ) )
  int x = 10;
  char c = 'b';

  switch ( x, c ){
    case ( 20, 'a', 'b' ):
      /* codigo */
      break;
      
    case ( 25, 'c' ):
      /* codigo */
      break;
    
    case ( 100 ):
      /* codigo */
      break;
      
    default /* caso alternativo */ :
      /* codigo alternativo */
  }
  //EN ESTE CASO SE EJECUTARÁ EL PRIMER CASO PORQUE LA VARIABLE c ALMACENA 'b'
  //FLUJO DE EJECUCION:
  //    x!=20 x!='a' x!='b' c!=20 c!='a' c=='b' ~se ejecuta primer caso~
