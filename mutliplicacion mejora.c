#include<stdio.h>

int main(int arg, char const*argv[]){
    int tabla2[12][3];

    tabla2[0][0] = 2;
    tabla2[0][1] = 1;
    tabla2[0][2] = 2;
    tabla2[0][3] = 3;
    tabla2[0][4] = 4;
    tabla2[0][5] = 5;
    tabla2[0][6] = 6;
    tabla2[0][7] = 7;
    tabla2[0][8] = 8;
    tabla2[0][9] = 9;
    tabla2[0][10] = 9;


    printf("la tabla de multiplicar del 2\n");
    printf("%d", tabla2[0][0]);
    printf(" * ");
    printf("%d", tabla2[0][1]);
    printf(" = ");
    printf("%d", tabla2[0][0]);
    printf(" \n ");
    fflush(stdout);
    //
    printf("%d", tabla2[0][0]);
    printf(" * ");
    printf("%d", tabla2[0][0]);
    printf(" = ");
    printf("%d", tabla2[0][4]);
    printf(" \n ");
    fflush(stdout);
    //
    printf("%d", tabla2[0][0]);
    printf(" * ");
    printf("%d", tabla2[0][3]);
    printf(" = ");
    printf("%d", tabla2[0][6]);
    printf(" \n ");
    fflush(stdout);
    //
    printf("%d", tabla2[0][0]);
    printf(" * ");
    printf("%d", tabla2[0][4]);
    printf(" = ");
    printf("%d", tabla2[0][8]);
    printf(" \n ");
    fflush(stdout);
    //
    printf("%d", tabla2[0][0]);
    printf(" * ");
    printf("%d", tabla2[0][5]);
    printf(" = ");
    printf("%d", tabla2[0][10]);
    printf(" \n ");
    fflush(stdout);





    return 0;
}