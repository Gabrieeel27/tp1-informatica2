#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(){
   printf("Bienvenido al TP n°1 de Informatica 2");
  
  articulos_t articulos [CANT_ARTICULOS];
  iniciar_articulos (articulos, CANT_ARTICULOS);
  iniciar_sistema (articulos, CANT_ARTICULOS);
  
printf("\n--- LISTADO ORIGINAL ---\n");
  
  imprimir_articulos (articulos, CANT_ARTICULOS);
  ordenar_articulos (articulos, CANT_ARTICULOS);
  
    printf("\n\n###################################");
    printf("\n##############ORDENADO################");
    printf("\n################################### \n"); 
  
  return 0;
}
