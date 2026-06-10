#include <stdio.h>
#include <string.h>

//¿como tal hace falta poner aca las librerias? ya que despues cuando use esto dentro del codigo ya van a estar ahi, por las dudas las puse

/*#define S_1 1
#define S_2 2        lo habia hecho asi porque quise hacerme el distinto pero es mas facil para reutilizar codigo si lo dejo igual que como nos lo dio
#define S_3 3 */

#defineCANT_ARTICULOS 60
#define SUCURSAL_1 0
#define SUCURSAL_2 1
#define SUCURSAL_3 2
    typedef struct{
    char descripcion[90];
    int cantidad_sucursal[3]; // Posición 0 para Sucursal 1, 1 para Sucursal 2, 2 para Sucursal 3
    int total;
}articulos_t;

//los prototipos

void iniciar_articulos (articulos_t[], int cant); //deje el corchete vacio para que la funcion pueda recibir un vector cualquiera
void imprimir_articulos (articulos_t[], int cant, int orden[]);
void ordenar_articulos (articulos_t[], int cant, int orden[]);
void cargar_sistema (articulos_t[], int cant, int orden[]);
