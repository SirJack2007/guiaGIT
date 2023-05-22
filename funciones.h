#include<stdio.h>

int menu()
{
    int opc = 0;
    printf("/****** Menu Principal *********/  \n");
    printf("Opcion 1- Crear fichero \n");
    printf("Opcion 2- Insertar datos del atleta \n");
    printf("Opcion 3- Ver datos del atleta \n");
    printf("Opcion 4- Buscar datos del atleta \n");
    printf("Opcion 5- Eliminar datos del atleta \n");
    printf("Opcion 6- Salir \n");
    printf("Digite su opcion:  \n");
    scanf("%d" ,opc);
    return opc;
}