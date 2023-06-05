#ifndef DATOS_H_INCLUDED
#define DATOS_H_INCLUDED

/* DEFINICION DE LA ESTRUCTURA Clientes */
struct Otros
{
    char Correo_electronico[200];
};

struct Clientes
{
    char ID[20];
    char nombress[100];
    int edad;
    char sexo;
    char telefono[25];
    struct Otros dop;
};



#endif //Nombre, sexo, direccion, pais