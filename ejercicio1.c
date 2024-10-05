#include <stdio.h>
 

//Crear una funcion que sume las digaonales

int suma_diagonales(int n,int matriz[][10]){
	int sum_principal=0, sum_secundaria=0;

	for (int i = 0 ; i < n; i++) {
		sum_principal += matriz[i][i];
		sum_secundaria += matriz[i][n - i - 1];
	}
	
	int total = sum_principal + sum_secundaria;
	return total;
}

//funcion para imprimir una matriz

void matriz(int n,int matriz[][10]) {
	
	printf("La matriz %dx%d es:\n", n, n);	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
	
        	printf("%d ", matriz[i][j]);
	
    	}	
	
    	printf("\n");
	
	}
}


//Probar las funciones en varios casos

int main () {
	//matriz 3x3
	int m1[3][10] = {
		{1, 5, 7},
		{3, 1, 8},
		{9, 4, 2},
	};

	matriz(3, m1); //Imprimir la matriz con la funcion 'matriz'
	
	int sum1 = suma_diagonales(3, m1);
	printf("La suma de las diagonales para la matriz 3x3 es: %d\n", sum1);

	 //matriz 4x4
        int m2[4][10] = {
                {1, 5, 7, 3},
                {2, 1, 8, 9},
                {9, 4, 1, 8},
		{1, 2, 0, 4},
        };

	matriz(4, m2);

        int sum2 = suma_diagonales(4, m2);
        printf("La suma de las diagonales para la matriz 4x4 es: %d\n", sum2);

	//matriz 5x5
        int m3[5][10] = {
                {0, 5, 7, 3, 6},
                {2, 1, 8, 9, 1},
                {9, 4, 1, 8, 0},
                {1, 2, 0, 4, 2},
		{3, 6, 0, 7, 1},
	};

	matriz(5, m3);

        int sum3 = suma_diagonales(5, m3);
        printf("La suma de las diagonales para la matriz 5x5 es: %d\n", sum3);	

	return 0;
}






