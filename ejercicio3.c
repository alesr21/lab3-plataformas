#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 5

int findLargestLine(int matrix [][SIZE]) {
	int cantidad_mas_larga = 0;
	
	//Bucle 'for' para recorrer filas y columnas y registrar la cantidad de 1s
	for (int i = 0; i < SIZE; i++) {
		int contador = 0; //contador para fila

		for (int j = 0; j < SIZE; j++) {
			if (matrix [i][j] == 1) {
				contador++; }
			//Reiniciar el contador en caso de encontrar un cero
		       	else { 
				if (contador > cantidad_mas_larga) {
					cantidad_mas_larga = contador; }
				contador = 0;
			}
		}

		//Comprobar la secuencia de 1s en la fila actual
		
		if (contador > cantidad_mas_larga) {
			cantidad_mas_larga = contador; 
		}

	}

	return cantidad_mas_larga;	

}

//generar matriz aleatoria

void matriz_aleatoria(int matrix[][SIZE]) {
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 2; // Genera los 0s y 1s
       	}
    }
}

// imprimir matriz
void matriz(int matrix[][SIZE]) {

        for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
			printf("%d ", matrix[i][j]);

	}

        printf("\n");

        }
}

int main() {
    int matrix[SIZE][SIZE];

    //Genera la matriz aleatoria
 
    matriz_aleatoria(matrix);
    printf("La matriz aleatoria es: \n");
    matriz(matrix);

    int largestLine = findLargestLine(matrix);
    printf("La secuencia de 1s mas grande es: %d\n", largestLine);
    
    return 0;
}
