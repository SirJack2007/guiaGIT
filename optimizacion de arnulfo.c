#include<stdio.h>
#include <math.h>

int menu()
{
    int opc = 0;
    //imprimimos las opciones del menu
    printf ("******************************MENU******************************\n");
    printf ("digite 1 para sumar dos numeros;\n");
    printf ("digite 2 para restar 2 numeros;\n");
    printf ("digite 3 para multiplicar dos numeros;\n");
    printf ("digite 4 para dividir dos numeros;\n");
    printf ("digite 5 para obtneer el resultado de dos numeros\n");
    printf ("digite 6 para calcular la potencia de un numero\n");
    printf ("digite 7 para salir.\n");
    printf ("****************************************************************\n" );
    printf ("digite su opcion: ");
    scanf("%d", &opc);
    return opc;
}

void limpiarbuffer()
{
    //limpiamos el buffer de entrada y salida
    fflush(stdin);
    fflush(stdout);
}

void imprimirRes(float result)
{
    printf("el resultado de la operacion aritmetica es: %.2F :) \n", result);
}

float sumar (float a, float b)
{
    float resultado = 0.0;
    resultado = a+b;
    return resultado;
}

float restar (float a, float b)
{
    float resultado = 0.0;
    resultado = a-b;
    return resultado;
}

float multiplicar (float a, float b)
{
    float resultado = 0.0;
    resultado = a*b;
    return resultado;
}

float dividir (float a, float b)
{
    float resultado = 0.0;
    resultado = a/b;
    return resultado;
}

float calcPod (float a, float b)
{
    float resultado = 0.0;
    resultado = ab;
    return resultado;
}

float calcPotencia (int base, int exp)
{
    float resultado = 0.0;
    resultado = pow(base, exp);
    return resultado;
}



int main(int argc, char const*argv[])
{
    int opcion = 0;
    float res, num1, num2;
    res = 0.0;
    num1 = 0.0;
    num2 = 0.0;


opcion = menu();
    printf("\n"); 
    limpiarbuffer();

    printf("Ingrese el numero 1\n");
    scanf("%f", &num1);
    printf("Ingrese el numero 2\n");
    scanf("%f", &num2);

    limpiarbuffer();

    switch (opcion)
    {
    case 1:
        printf("usted ha ingresado a la - Opcion 1-\n");

        res = sumar(num1, num2);
        break;
    case 2:
        printf("usted ha ingresado a la - Opcion 2-\n");
        res = restar(num1, num2);
        break;
    case 3:
        printf("usted ha ingresado a la - Opcion 3-\n");
        res = multiplicar(num1, num2);
        break;
    case 4:
        printf("usted ha ingresado a la - Opcion 4-\n");
        res = divir(num1, num2);
        break;
    case 5:
        printf("usted ha ingresado a la - Opcion 5-\n");
        res = calcPod(int)num1, (int)num2;
        break;
    case 6:
        printf("usted ha ingresado a la - Opcion 6-\n");
        res = calcPotencia((int)num1,(int)num2);
        break;
    case 7:
        printf("vayase a la verg\n");
        break;
    

    default:
        printf ("estimado usario, no sea gilipollas e ingrese un numero correcto");
        break;
    }

    imprimirRes(res);


return 0;
}