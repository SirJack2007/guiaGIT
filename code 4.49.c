#include<stdio.h>

int main(int arg, char const*argv[])
{
    float dist, dias, res, res2;

    printf ("distancia en km: ");
    scanf ("%f", &dist);
    printf ("dias de estancia: ");
    scanf ("%f", &dias);

    res = (25*dist);

    if (dist >=800 && dias >=7){
        res2= (res-(res*0.3));
        printf ("su precio total es de: %2.f\n", res2);

    }

    else {
        printf ("su precio: %2.f\n", res);
    }
    return 0;
}