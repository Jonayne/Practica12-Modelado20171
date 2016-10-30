#include <stdio.h>

/* Declaración de funciones */
int misterio1(int (*fun) (int), int); //Función que regresa un int, recibe un apuntador a una función llamado fun, y un int.
void misterio2(void (*fun) (int), int); //Función que no regresa nada, recibe un apuntador a una función llamado fun, y un int.
int cuadrado_num(int); //Función que regresa un int y recibe otro.
void imprime_num(int); //Función que no regresa nada y recibe un int.

int main() //Función main, para iniciar nuestro programa.
{

  int (*fun1) (int); //Le avisamos al compilador que fun1 es un apuntador a una función f1(int) que acepta un parámetro de tipo int y regresa este mismo.
  void (*fun2) (int); //Le avisamos al compilador que fun2 es un apuntador a una función f2(int) que acepta un parámetro de tipo int y no regresa nada.

  fun1 = &cuadrado_num; //Le asignamos la dirección de la función "cuadrado sum"
  fun2 = &imprime_num; //Le asignamos la dirección de la función "imprime_num"

  int var = misterio1(fun1, 3); //Guardamos el valor de lo que nos regrese esta función en var, y le pasamos la función fun1 junto a un int.
  misterio2(fun2, var); //Usamos el valor de var y lo usamos con misterio2, usando la función fun2 también.
}


int misterio1(int (*fun) (int), int num) 
{
    return fun(num); //Simplemente llama a la función asociada a fun, uno de sus argumentos, regresará el valor que regrese fun(num).
}

void misterio2(void (*fun) (int), int num)
{
    fun(num); //Acá no regresa nada, pero manda a llamar a la función asociada a fun. (uno de los args que recibe).
}

int cuadrado_num(int num)
{
    return num * num; //Regresamos el cuadrado de un número, esta función fue asociada a fun1.
}

void imprime_num(int num)
{
    printf("Tada: %d\n", num); //Imprimimos el número que nos pasan, esta función está asociada a fun2.
}