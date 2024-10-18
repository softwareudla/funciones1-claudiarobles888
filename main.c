#include <stdio.h>
#include <string.h>
int main()
{
    char producto [10][30];
    char precio [10][30];
    int i,j;


    printf("----- Tienda virtual -----");
    
    for ( i = 0; i < 10; i++)
    {
        printf("Ingrese el producto %d:", i + 1);
        fgets(producto[i], 30, stdin);
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("Ingrese el precio %d:", i + 1);
        fgets(precio[i], 30, stdin);
    }

    return 0;

}