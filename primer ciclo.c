#include<stdio.h>

int main(int arg, char const*argv[]){
    int x = 0;
    int suma = 0;
    int contador = 0;
    printf("Dame un numero: ");
    scanf("%d", &x);
    printf("\n");

    while(x!=0){
        contador++;
        suma = suma + x;
        printf("el valor de la suma es: %d, ciclo No. %d\n", suma, contador);
        printf("Dime un numero: ");
        scanf("%d", &x);
    }
    printf("\n");
    printf("Fin del algoritmo\n");

    return 0;
}