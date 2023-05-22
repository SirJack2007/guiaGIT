#include<stdio.h>

int main(int arg, char const*argv[]){
    int tabla[3][3];
    tabla[0][0]=2;
    tabla[0][1]=8;
    tabla[0][2]=14;
    tabla[1][0]=4;
    tabla[1][1]=10;
    tabla[1][2]=16;
    tabla[2][0]=6;
    tabla[2][1]=12;
    tabla[2][2]=20;
    printf("%d  |", tabla[0][0]);
    printf("%d  |", tabla[1][0]);
    printf("%d\n", tabla[2][0]);
    //
    printf("%d  |", tabla[0][1]);
    printf("%d |", tabla[1][1]);
    printf("%d\n", tabla[2][1]);
    //
    printf("%d |", tabla[0][2]);
    printf("%d |", tabla[1][2]);
    printf("%d\n", tabla[2][2]);


    //siguiente ejercicio
    char tabla1[3][2];
    tabla1[0][0]='a';
    tabla1[0][1]='c';
    tabla1[0][2]='e';
    tabla1[1][0]='b';
    tabla1[1][1]='d';
    tabla1[1][2]='f';

    printf("%c  |", tabla1[0][0]);
    printf("%c  |", tabla1[0][1]);
    printf("%c\n", tabla1[0][2]);
    //
    printf("%c  |", tabla1[1][0]);
    printf("%c  |", tabla1[1][1]);
    printf("%c\n", tabla1[1][2]);














    return 0;
}