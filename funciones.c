#include <stdio.h>
#include <string.h>
#include "funciones.h"

void iniciar_articulos(articulos_t art[], int cant){
  for(int i=0; i < cant; i++){
  art[i].descripcion[0] =;
  articulos[i].cantidad_sucursal[SUCURSAL_1] = 0;
  articulos[i].cantidad_sucursal[SUCURSAL_2] = 0;
  articulos[i].cantidad_sucursal[SUCURSAL_3] = 0;
  art[i].total = 0;
  } //para asegurarme de que todo inicie en 0
}

//Ordenamiento (el burbujeo para el ordenamiento sera el mismo que se uso en el codigo original que nos dio)

    void ordenar_articulos (articulos_t articulos[], int cant){
         int opc,i;
         char articulo [90];
         int articulo_index;  
  
    for ( opc = 1; opc < CANT_ARTICULOS; opc++){
        for ( i = 0; i < CANT_ARTICULOS-1; i++){
            if(articulos[i].total<articulos[i+1].total){
                strcpy (articulo,articulos[i].descripcion);
                strcpy(articulos[i].descripcion,articulos[i+1].descripcion);
                strcpy(articulos[i+1].descripcion, articulo);

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_1];
                articulos[i].cantidad_sucursal[SUCURSAL_1] = articulos[i+1].cantidad_sucursal[SUCURSAL_1];
                articulos[i+1].cantidad_sucursal[SUCURSAL_1] = articulo_index;

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_2];
                articulos[i].cantidad_sucursal[SUCURSAL_2] = articulos[i + 1].cantidad_sucursal[SUCURSAL_2];
                articulos[i + 1].cantidad_sucursal[SUCURSAL_2] = articulo_index;

                articulo_index = articulos[i].cantidad_sucursal[SUCURSAL_3];
                articulos[i].cantidad_sucursal[SUCURSAL_3] = articulos[i + 1].cantidad_sucursal[SUCURSAL_3];
                articulos[i + 1].cantidad_sucursal[SUCURSAL_3] = articulo_index;

                articulo_index = articulos[i].total;
                articulos[i].total = articulos[i + 1].total;
                articulos[i + 1].total = articulo_index;
            }
        }
    }
}
void imprimir_articulos (articulos_t[], int cant, int orden[]){
   int i=0;
   while (i < cant && articulos[i].descripcion[0]){
   printf("ARTICULO?\nSucursal: 1\nSucursal: 2\nSucursal: 3\Total");
       printf("%s\n %d\n %d\n %d\n %d\n %d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3],, articulos[i].total);
       i++;
    }
}
