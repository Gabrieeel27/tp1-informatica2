#include <stdio.h>
#include <string.h>
#include <funciones.h>
/*
 do
    {
        printf("Ingrese la descripcion del articulo: ");
        scanf("%s",articulo);

        // for (i = 0; i < CANT_ARTICULOS; i++)
        // {
        //     if(!strcmp(articulo,articulos[i])){ // si son iguales
        //         articulo_index = i;
        //         break;
        //     }

        //     if(articulos[i][0] == 0){ //'\b' Null
        //         strcpy(articulos[i], articulo);
        //         articulo_index = i;
        //         break;
        //     }
        // }
    
        i=0;
        while (articulos[i].descripcion[0] && strcmp(articulo, articulos[i].descripcion)) i++;
        articulo_index = i;
        strcpy(articulos[i].descripcion, articulo);

        printf("\n%s, Indice: %d\n", articulos[articulo_index].descripcion, articulo_index);

        printf("Para que sucursal va a realizar la carga? (1,2,3)");
        scanf("%d", &sucursal);

        // switch (sucursal)
        // {
        // case SUCURSAL_1:
        //     printf("Ingrese la cantidad del articulo para la sucursal 1: ");
        //     scanf("%d",&articulos[articulo_index].cantidad_sucursal[SUCURSAL_1]);
        //     break;
        // case SUCURSAL_2:
        //     printf("Ingrese la cantidad del articulo para la sucursal 2: ");
        //     scanf("%d",&articulos[articulo_index].cantidad_sucursal[SUCURSAL_2]);
        //     break;
        // case SUCURSAL_3:
        //     printf("Ingrese la cantidad del articulo para la sucursal 3: ");
        //     scanf("%d",&articulos[articulo_index].cantidad_sucursal[SUCURSAL_3]);
        //     break;
        // default:
        //     printf("\nLo siento no encontre la sucursal");
        //     break;
        // }
        printf("Ingrese la cantidad del articulo para la sucursal %d: ", sucursal);
        scanf("%d", &articulos[articulo_index].cantidad_sucursal[sucursal-1]);
        for(i=0;i<3;i++) articulos[articulo_index].total += articulos[articulo_index].cantidad_sucursal[i];        

        printf("Desea ingresar otro articulo? 1-Si, 2-No");
        scanf("%d",&opc);
    } while (opc==1);
