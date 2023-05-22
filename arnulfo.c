#include<stdio.h>
#include <math.h>

int main(int arg, char const*argv[])
{
    int opcion = 0;
    float res, num1, num2;
    res = 0.0;
    num1 = 0.0;
    num2 = 0.0;
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
    scanf("%d", &opcion);
    printf("\n");
    //limpiamos el buffer de entrada y salida
    fflush(stdin);
    fflush(stdout);

    switch (opcion)
    {
    case 1:
        printf("usted ha ingresado a la - Opcion 1-\n");
        printf("Ingrese el numero 1\n");
        scanf("%f", &num1);
        printf("Ingrese el numero 2\n");
        scanf("%f", &num2);
        res = num1+num2;
        printf("el resultado de la suma es: %.2F :) \n", res);


        break;
    case 2:
        printf("usted ha ingresado a la - Opcion 2-\n");
        printf("Ingrese el numero 1\n");
        scanf("%f", &num1);
        printf("Ingrese el numero 2\n");
        scanf("%f", &num2);
        res = num1-num2;
        printf("el resultado de la resta es: %.2F :) \n", res);

        break;
    case 3:
        printf("usted ha ingresado a la - Opcion 3-\n");
        printf("Ingrese el numero 1\n");
        scanf("%f", &num1);
        printf("Ingrese el numero 2\n");
        scanf("%f", &num2);
        res = num1*num2;
        printf("el resultado de la multiplicacion es: %.2F :) \n", res);

        break;
    case 4:
        printf("usted ha ingresado a la - Opcion 4-\n");
        printf("Ingrese el numero 1 (mayor)\n");
        scanf("%f", &num1);
        printf("Ingrese el numero 2\n");
        scanf("%f", &num2);
        res = num1/num2;
        printf("el resultado de la division es: %.2F :) \n", res);

        break;
    case 5:
        printf("usted ha ingresado a la - Opcion 5-\n");
        printf("Ingrese el numero 1\n");
        scanf("%f", &num1);
        printf("Ingrese el numero 2\n");
        scanf("%f", &num2);
        res = (int)num1 % (int)num2;
        printf("el residuo de la division es: %.2F :) \n", res);

        break;
    case 6:
        printf("usted ha ingresado a la - Opcion 6-\n");
        printf("Ingrese el numero 1(base)\n");
        scanf("%f", &num1);
        printf("Ingrese el numero 2(exponente)\n");
        scanf("%f", &num2);
        res = pow(num1,num2);
        printf("el resultado de la potencia es: %.2F :) \n", res);

        break;
    case 7:
        printf("vayase a la verg\n");
        break;
    

    default:
        printf ("estimado usario, no sea gilipollas e ingrese un numero correcto");
        break;
    }

    return 0;
}