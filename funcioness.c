#include <stdio.h>
#include "funciones.h"

//FUNCION MENU DE OPCIONES
void menu(int opcion, float n, float precio[], char producto[], float m)
{
    float results;
    switch (opcion)
    {
    case 1: // Precio total del inventario

        printf("El total del inventario es: %.2f\n"), totalInventario(precio, n);
        break;

    case 2: // Producto mas caro a mas barato
        productoMasBaratoyMasCaro(producto, precio, n);
        break;

    case 3: // Promedio de los productos
        printf("El promedio de los productos es: %.2f\n\n "), promedioInventario(precio, n);
        break;

    case 4: // Busqueda de productos
        printf("Ingrese el nombre del producto que esta buscando");
        break;

    default:
        break;
    }
}

//FUNCION TOTAL INVENTARIO
float totalInventario(float precio[], int n){
float precioTotal=0;
for ( int i = 0; i < n; i++)
{
    precioTotal+=precio[i];
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
    printf("El producto mas caro es: %s con un precio de %.2f\n"), producto[masCaro], precio[masCaro];
    printf("El producto mas barato es: %s con un precio de %.2f\n"), producto[masBarato], precio[masBarato];
} 

//FUNCION PROMEDIO
float promedioInventario(float precio[], int n){
    float total=totalInventario(precio, n);
    return total/n;
}

//FUNCION PARA BUSCAR UN PRODUCTO
void buscarProducto(char producto[][30], float precio[]){

}
