int palindromo(int numero){
    
    int numero_palindromo=0;	
    int copia_numero = numero; //copio il parametro della funzione per eseguire i calcoli

  	for(; copia_numero > 0; copia_numero = copia_numero / 10)
      numero_palindromo = numero_palindromo * 10 + copia_numero % 10;
  
  	if(numero_palindromo == numero)
      return 1;
  	else
  	  return 0;
}
