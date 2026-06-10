#include <stdio.h>
#include <string.h>
//¿como tal hace falta poner aca las librerias? ya que despues cuando use esto dentro del codigo ya van a estar ahi, por las dudas las puse
#define S_1 1
#define S_2 2
#define S_3 3
typedef struct{
    char descripcion[90];
    int csl_1;  //cantidad de sucursal
    int csl_2;
    int csl_3;
    int total;
}articulos_t;

//los prototipos

void iniciar_articulos (articulos_t[], int cant); //deje el corchete vacio para que la funcion pueda recibir un vector cualquiera
void imprimir_articulos (articulos_t[], int cant, int orden[]);
void ordenar_articulos (articulos_t[], int cant, int orden[]);
