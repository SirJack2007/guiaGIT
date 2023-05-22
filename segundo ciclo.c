#include<stdio.h>

int main(int arg, char const*argv[]){
    int clave = 1234;
    int claveTemp = 0;
    do{
        printf("Clave de acceso: \n");
        scanf("%d", &claveTemp);
        if(claveTemp==clave){
            printf("Clave Correcta: \n");
        }
        else{
            printf("Clave incorrecta: \n");
        }
    }while(claveTemp!=clave);
    printf("Bienvenido al sistemas!");

    return 0;

}