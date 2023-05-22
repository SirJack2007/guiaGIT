#include<stdio.h>

int main(int arg, char const*argv[]){
    int tabla2[12][3];

    tabla2[0][0] = 2;
    tabla2[0][1] = 1;
    tabla2[0][2] = 2;

    printf("la tabla de multiplicar del 2\n");
    printf("%d", tabla2[0][0]);
    printf(" * ");
    printf("%d", tabla2[0][1]);
    printf(" = ");
    printf("%d", tabla2[0][0]);
    printf(" \n ");
    fflush(stdout);

    return 0;
}