#include <stdio.h>
#include <string.h>
#include "funciones.h"

//FUNCION MENU DE OPCIONES
void menu(int opcion, float n, float precio[], char producto[][30])
{
    float resultado;
    switch (opcion)
    {
    case 1: // Precio total del inventario
        resultado = totalInventario(precio, n);
        printf("El total del inventario es: %.2f\n", resultado);
        break;

    case 2: // Producto más caro y más barato
        productoMasBaratoyMasCaro(producto, precio, n);
        break;

    case 3: // Promedio de los productos
        resultado = promedioInventario(precio, n);
        printf("El promedio de los productos es: %.2f\n\n", resultado); 
        break;

    case 4: // Busqueda de productos
        buscarProducto(producto, precio, n);
        break;

    default:
        printf("Opción no válida\n");
        break;
    }
}

//FUNCION TOTAL INVENTARIO
float totalInventario(float precio[], int n)
{
    float precioTotal = 0;
    for (int i = 0; i < n; i++)
    {
        precioTotal += precio[i];
    }
    return precioTotal;
}

//FUNCION PRODUCTO MAS CARO Y MAS BARATO
void productoMasBaratoyMasCaro(char producto[][30], float precio[], int t)
{
    int masBarato = 0;
    int masCaro = 0;

    for (int i = 1; i < t; i++)
    {
        if (precio[i] > precio[masCaro])
        {
            masCaro = i;
        }
        if (precio[i] < precio[masBarato])
        {
            masBarato = i;
        }
    }
    printf("El producto más caro es: %s con un precio de %.2f\n", producto[masCaro], precio[masCaro]); // Corregido el printf
    printf("El producto más barato es: %s con un precio de %.2f\n", producto[masBarato], precio[masBarato]); // Corregido el printf
}

//FUNCION PROMEDIO
float promedioInventario(float precio[], int n)
{
    float total = totalInventario(precio, n);
    return total / n;
}

//FUNCION PARA BUSCAR UN PRODUCTO
void buscarProducto(char producto[][30], float precio[], int n)
{
    char productoBuscado[30];
    int encontrado = 0;
    printf("Ingrese el nombre del producto que está buscando: ");
    scanf("%s", productoBuscado);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(producto[i], productoBuscado) == 0)
        {
            printf("Producto encontrado: %s con un precio de %.2f\n", producto[i], precio[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("Producto no encontrado\n");
    }
}