#include <stdio.h> //Incluimos la biblioteca stdio.h pues es importante para leer y escribir. 

void ordena(int * array, int longitud); //Declaramos la función ordena.

int main(){ //Función main, donde inicia el programa.

	int disordened_array[] = { 8, 4, 10, 2, 1, 3, 7, 5, 69, 9, 3, 328, 12, 11, 21, 543, 12, 22, 14, 43, 47, 55, 2832, -4, -5, -1, 0};
	int longitud = sizeof(disordened_array)/sizeof(disordened_array[0]);
	int * array= disordened_array;

	ordena(array, longitud); //Mandamos a llamar a la función ordena con nuestra lista y su longitud.
	return 0; //Bye.
}

void ordena(int * array, int longitud){ //Función que ordena una lista.

	printf("*********LISTA DESORDENADA*********\n");

	for(int i= 0; i < longitud; i++){ //Imprimimos los elementos de nuestro arreglo.
		printf("%d ", *(array + i));
	}
	printf("\n");
	printf("\n");

	printf("*********LISTA ORDENADA*********\n");
	
	/* *** BUBBLE SORT ***
		Implementación de "Bubble Sort" en C.
		En este caso, cuando ordenado = 0, => ordenado = FALSO.
						y si ordenado = 1, => ordenado= VERDADERO.
	*/ 
	int i=1;
	int ordenado= 0;
	int aux;
	while(i < longitud && ordenado == 0){ //Repetimos este loop las veces necesarias, hasta que quede ordenado el arreglo.
		i++; //Cada iteración nos aseguramos que el último elemento ya está en su lugar, así aumentamos en 1 el valor de i.
		int ordenado= 1;
		for(int j= 0; j < longitud-1; j++){
			if( *(array + j) > *(array + j + 1)){ //Si e1 es mayor a e2, intercambiamos su lugar en el arreglo, y decimos que no está ordenada.
				ordenado= 0;
				aux= *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = aux;
			}
		}
	}

	for(int i= 0; i < longitud; i++){ //Ya que está ordenada, la volvemos a imprimir para mostrar nuestras habilidades programadorísticas.
		printf("%d ", *(array + i));
	}
	printf("\n");
	printf("\n");
}