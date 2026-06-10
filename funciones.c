#include <stdio.h>
#include <string.h>
#include "funciones.h"

void iniciar_articulos(articulos_t art[], int cant){
  for(int i=0; i < cant; i++){
  art[i].descripcion[0] =;
  art[i].csl_1 = 0;
  art[i].csl_2 = 0;
  art[i].csl_3 = 0;
  art[i].total = 0;
  } //para asegurarme de que todo inicie en 0
}

  void iniciar_sistema (articulos_t[], int cant, int orden[]){
      int opc =0, i, sucursal, index;
       char articulo [90];
  }
//Ordenamiento (el burbujeo para el ordenamiento sera el mismo que se uso en el codigo original que nos dio)

 do
    {
        printf("Ingrese la descripcion del articulo: ");
        scanf("%s",articulo);
     
        i=0;
        while (articulos[i].descripcion[0] && strcmp(articulo, articulos[i].descripcion)) i++;
        articulo_index = i;
        strcpy(articulos[i].descripcion, articulo);

        printf("\n%s, Indice: %d\n", articulos[articulo_index].descripcion, articulo_index);

        printf("Para que sucursal va a realizar la carga? (1,2,3)");
        scanf("%d", &sucursal);
     
        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &articulos[articulo_index].cantidad_sucursal[sucursal-1]);
     
   for(i=0;i<3;i++){
        articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[i];        
   }
        printf("Desea ingresar otro articulo? 1-Si, 2-No");
        scanf("%d",&opc);
    } while (opc==1);

    void ordenar_articulos (articulos_t[], int cant, int orden[]){
         int opc,i;
         char articulo [90];
         int articulo_index;    //variables recicladas
    }
//burbujeo tambien reciclado
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

void imprimir_articulos (articulos_t[], int cant, int orden[]){
   int i=0;
   while (i < cant && articulos[i].descripcion[0]){
   printf("ARTICULO?\nSucursal: 1\nSucursal: 2\nSucursal: 3\Total");
       printf("%s\n %d\n %d\n %d\n %d\n %d\n", articulos[i].descripcion, articulos[i].cantidad_sucursal[SUCURSAL_1], articulos[i].cantidad_sucursal[SUCURSAL_2], articulos[i].cantidad_sucursal[SUCURSAL_3],, articulos[i].total);
       i++;
    }
}
