#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main()
{

    char producto[10][30];
    float precio[10];
    char cantidad[10][30];
    int i, j;
    int opcion, opc2;

    printf("----- Tienda virtual -----");


    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el producto %d:", i + 1);
        fgets(producto[i], 30, stdin);
    }

    for (i = 0; i < 10; i++)
    {
        printf("\nIngrese el precio del producto: %s\n", producto[i], i + 1);
        scanf("%f", &precio[i]);
        while (precio[i] < 0)
        {
            printf("El valor ingresado es incorrecto, ingrese nuevamnete el precio del producto %s: ", producto[i]);
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese la cantidad que va añadir en el inventario del producto:  %s\n", cantidad[i], i + 1);
        fgets(cantidad[i], 30, stdin);
    }

    do
    {
        printf("Seleccione la funcion a realizar:\n1.Precio total del inventario\n2.Producto mas caro a mas barato\n3.Promedio de los productos\n4.Busqueda de un producto\n");
        scanf("%d", &opcion);

        printf("Desea realizar una nueva funcion:\n1. Si\n2. No\n");
        scanf("%d", &opc2);
    } while (opc2 == 1);

    return 0;
}