#include<stdio.h>

struct datos_olimpicos
{
    char deporte[100];
    int nMedallas;
    char desRecord[200];
};

struct atleta
{
    char cedula[20];
    char nombrecompleto[100];
    int edad;
    char sexo;
    char telefono[20];
    char direccion[200];
    char pais[30];
    struct datos_olimpicos dap;
    
};





