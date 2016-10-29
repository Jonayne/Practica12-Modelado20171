#include <stdio.h> //Incluimos la biblioteca stdio.h pues es importante para leer y escribir. 

int main(){ //Función main.
	
	printf("El tipo int tiene tamanio %lu\n", sizeof(int)); //Imprimimos el tamanio en bytes de un int, con la funcion printf.
	printf("El tipo double tiene tamanio %lu\n", sizeof(double)); //Imprimimos el tamanio en bytes de un double, con la funcion printf.
	printf("El tipo short tiene tamanio %lu\n", sizeof(short)); //Imprimimos el tamanio en bytes de un short, con la funcion printf.
	printf("El tipo unsigned int tiene tamanio %lu\n", sizeof(unsigned int)); //Imprimimos el tamanio en bytes de un unsigned int, con la funcion printf.
	printf("El tipo int* tiene tamanio %lu\n", sizeof(int *)); //Imprimimos el tamanio en bytes de un int * (Un apuntador), con la funcion printf.
	printf("El tipo char tiene tamanio %lu\n", sizeof(char)); //Imprimimos el tamanio en bytes de un char, con la funcion printf.
	printf("El tipo float tiene tamanio %lu\n", sizeof(float)); //Imprimimos el tamanio en bytes de un float, con la funcion printf.
	//Uso la conversión de %lu pues por alguna mórbida razón, el sizeof regresa un long unsigned value. :0
	
	return 0;
}