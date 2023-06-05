#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "datos.h"
#include "funciones.h"

int main(int argc, char const *argv[])
{
    struct Clientes ats;
    int opcion = 0;
    int bandera = 0;
    FILE *fileAt = NULL;
    
    while(!bandera){

        opcion = menu();
        limpiarBuffer();
        switch (opcion) //switch principal
        {
            case 1:
                system("cls");
                limpiarBuffer();
                int opcSMenu=0;
                opcSMenu = menuFichero();
                limpiarBuffer();
                switch (opcSMenu) //switch submenu fichero
                {
                case 1:
                    limpiarBuffer();
                    Informacion_para_usuario();
                    system("pause");
                    system("cls");
                    break;

                case 2:
                    limpiarBuffer();
                    explicaciones();
                    system("pause");
                    system("cls");
                    break;
                    
                case 3:
                    limpiarBuffer();
                    system("cls");
                    printf("\nRegresando al menu principal... \n");
                    break;

                default:
                    printf("Digite una opcion valida!!! \n");
                    system("pause");
                    system("cls");
                    break;
                }
                break;
            
            case 2:
                //case 3 del case 1
                limpiarBuffer();
                fileAt = nuevoFichero();//crea fichero con letra w
                system("pause");
                system("cls");
                //case 2 del case 1
                limpiarBuffer();
                fileAt = abrirFicheroA();//reutiliza codigo y cambia a letra a+
                system("pause");
                system("cls");
                //case 2 normal
                system("cls");
                limpiarBuffer();
                newClientes(fileAt, ats);//quien es fileat?
                break;
            
            case 3:
                //case 1 del case 1
                limpiarBuffer();
                fileAt = abrirFichero();
                system("pause");
                system("cls");
                //case 3 normal
                system("cls");
                limpiarBuffer();
                visualizarClientess(fileAt, ats);
                break;
            
            case 4:
                //case 2 del case 1
                limpiarBuffer();
                fileAt = abrirFicheroA();
                system("pause");
                system("cls");
                //case 4 normal 
                system("cls");
                limpiarBuffer();
                editarClientes(fileAt, ats);
                break;
            
            case 5:
                //case 2 del case 1
                limpiarBuffer();
                fileAt = abrirFicheroA();
                system("pause");
                system("cls");
                //case 5 normal                
                system("cls");
                limpiarBuffer();
                eliminarClientes(fileAt, ats);
                break;
            
            case 6:               
                limpiarBuffer();
                printf("Hasta pronto!!! \n");
                system("pause");
                bandera = 1;
                system("cls");
                break;
        
            default:
                printf("Digite una opcion valida!!! \n");
                system("pause");
                system("cls");
                break;
        } //cierra el switch





    }//cierra el while


    return 0;
}//cierra la funcion main()