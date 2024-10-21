#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main()
{

    char producto[10][30];
    float precio[10];
    int cantidad[10];
    int i, n=10;
    int opcion, opc2;   

    printf("----- Tienda virtual -----");


    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el producto %d:", i + 1);
        fgets(producto[i], 30, stdin);
        producto[i][strcspn(producto[i], "\n")] = 0;  
    
    do
        {
            printf("Ingrese el precio del producto %s: ", producto[i]);
            scanf("%f", &precio[i]);
            if (precio[i] < 0)
            {
                printf("El valor ingresado es incorrecto. Por favor, ingrese nuevamente el precio del producto %s.\n", producto[i]);
            }
        } while (precio[i] < 0);

    do
        {
            printf("Ingrese la cantidad del producto %s: ", producto[i]);
            scanf("%d", &cantidad[i]);
            if (cantidad[i] < 0)
            {
                printf("El valor ingresado es incorrecto. Por favor, ingrese nuevamente la cantidad del producto %s.\n", producto[i]);
            }
        } while (cantidad[i] < 0);

        while (getchar() != '\n');
    }

    do {
        printf("Seleccione la funcion a realizar:\n");
        printf("1. Precio total del inventario\n");
        printf("2. Producto mas caro y mas barato\n");
        printf("3. Promedio de los productos\n");
        printf("4. Busqueda de un producto\n");
        scanf("%d", &opcion);

        menu(opcion, n, precio, producto);

        printf("¿Desea realizar una nueva funcion?\n1. Sí\n2. No\n");
        scanf("%d", &opc2);

    } while (opc2 == 1);

    return 0;
}