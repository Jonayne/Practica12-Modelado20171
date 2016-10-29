#include <stdio.h> //Incluimos la biblioteca stdio.h pues es importante para leer y escribir. 

void swap(int * a, int * b); //Declaramos la función swap, ¡me gusta tener el main arriba! >:<.

int main(){ //Función main, donde inicia el programa.
	int a= 1; //Valor de a.
	int b= 2812; //Valor de b.

	int * pointer1= &a; //Creamos el apuntador, que exáctamente apunta a "a".
	int * pointer2= &b; //Creamos el apuntador, que exáctamente apunta a "b".

	swap(pointer1, pointer2); //Mandamos a llamar a la función swap, con nuestros apuntadores correspondientes.

	return 0; //Bye.
}

void swap(int * a, int * b){ //Función que no regresa nada e intercambia el valor de dos variables apuntadores.

	printf("Valor inicial de a: %i\nValor inicial de b: %i\n", *a, *b); //Imprimimos el valor de las variables antes de intercambiar su valor.
	printf("*********AHORA CON LOS VALORES INTERCAMBIADOS*********\n"); //Linea innecesaria :( pero hace que se vea más guay.
	int temp1= *a; //Guardamos el valor de a.
	int temp2= *b; //Guardamos el valor de b.

	a= &temp2; //Intercambiamos el valir de a por el de b.
	b= &temp1; //Intercambiamos el valir de b por el de a.

	printf("Valor final de a: %i\nValor final de b: %i\n", *a, *b); //Imprimimos nuevamente los valores de a y b, pero cambiados :).

}