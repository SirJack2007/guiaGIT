#include<stdio.h>

struct estructuras
{
    int Id;
    char nombres[50];
    char apellido[50];
    int edad;
    int sexo;
    char carrera[100];
}est;


int main(int arg, char const*argv[])
{
    est.Id = 00000792;
    est.nombres = "Isaias";
    est.apellido = "Pichardo";
    est.edad = 18;
    est.sexo = 1;
    est.carrera = "sistemas"

    printf("Id: %d\n", est.Id);
    printf("nombres: %d\n", est.nombres);
    printf("apellido: %d\n", est.apellido);
    printf("edad: %d\n", est.edad);
    printf("carrera: %d\n", est.carrera);




    return 0;


}


