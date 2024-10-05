#include <stdio.h>

int factorial (int n) {
	int i = 1;
	while (n > 1) {
		i = i * n;
	        n = n - 1;
	}

 	return i ;
}

int main (int argc, char *argv []) {

	int numero, resultado;

	//Solicitar el numero al que se le quiere calcular el factorial
	printf("Ingrese el numero para calcular su factorial: ");
	scanf("%d", &numero);

	resultado = factorial(numero); 
	printf("El resultado es: ");
	printf("%d! = %d\n", numero, resultado);

	return 0;

}	
