#include<stdio.h>
#include<stdlib.h>
#include"datos.h"
#include"funciones.h"

int main(int arg, char const*argv[]){
    int opcion = 0;
    int bandera = 0;

    while (bandera)
    {
        opcion = menu();
        switch (opcion)
        {
            case 1:
            {
                system("cls");
                limpiarbuffer();
                break;
            }

            case 2:
            {
                system("cls");
                limpiarbuffer();
                break;
            }

            case 3:
            {
                system("cls");
                limpiarbuffer();
                break;
            }

            case 4:
            {
                system("cls");
                limpiarbuffer();
                break;
            }

            case 5:
            {
                system("cls");
                limpiarbuffer();
                break;
            }

            case 6:
            {
                system("cls");
                limpiarbuffer();
                break;
            }

            case 7:
            {
                limpiarbuffer();
                printf("Hasta pronto"\n);
                system("pause");
                bandera = 1;
                system("cls");
                break;
            }
            
            default:

                printf ("digite una opcion valida"\n);
                system("pause");
                system("cls");
                break;
        }//cierra switch
    }//cierra while
    

    return 0;
}//cierra funcion main