#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

float sumar(float A,float B);
float restar(float A,float B);
float multiplicar(float A,float B);
float dividir (float A, float B);
float factorial (float A);

int main()
{

    float operando1=0;//siempre se debe terminar con ;
    float operando2=0;
    int opcionDeseada;// se crea para guardar el n de opcion deseada del menu//
    float flagA=0; //param A
    float flagB=0;
    float sumaRealizada=0;
    float restaRealizada=0;
    float divisionRealizada=0;
    float multiplicacionRealizada=0;
    float factorialRealizada1=0;
    float factorialRealizada2=0;

    do
    {
        system("cls");

        printf("\n********** MENU **********\n");
        printf("\n1 Ingresar el operando (A=%.2f)",operando1);
        printf("\n2 Ingresar el otro operando (B=%.2f)",operando2);
        printf("\n3 Calculo de operaciones");
        printf("\n4 Informar los resultados");
        printf("\n5 Salir \n");
        printf("\n Elegir la opcion deseada: ");
        scanf("%d", &opcionDeseada);//el &va pegado a la variable (nombre)


        switch(opcionDeseada)
        {
        case 1:
            printf("\nIngrese el operando(A=X)");
            scanf("%f",&operando1);
            flagA=1;

            break;
        case 2:
            printf("\nIngrese el otro operando(B=Y)");
            scanf("%f",&operando2);
            flagB=1;
            break;

        case 3:
            if(flagA==1||flagB==1)
            {
                system("cls");
                printf("\nHaciendo calculo....\n\n");
                system ("pause");
                sumaRealizada=sumar(operando1,operando2);
                restaRealizada=restar(operando1,operando2);
                multiplicacionRealizada=multiplicar(operando1,operando2);
                factorialRealizada1=factorial(operando1);
                factorialRealizada2=factorial(operando2);
                divisionRealizada=dividir(operando1,operando2);

            }
            else
            {
                system("cls");
                printf("\n\nERROR falta ingresar algun operando.\n\n");


                system ("pause");

            }

            break;
//se si preciona opcion 4 los mensajes que aparecen son estos:
        case 4:
            system("cls");

            printf("\nEl resultado de la suma realizada: %.2f",sumaRealizada);
            printf("\nEl resultado de la resta realizada: %.2f",restaRealizada);
            printf("\nEl resultado de la multiplicacion realizada: %.2f",multiplicacionRealizada );
            printf("\nEl resultado del factorial Realizado de operando 1 es : %.2f",factorialRealizada1);
            printf("\nEl resultado del factorial Realizado del operando 2 es : %.2f",factorialRealizada2);
            if(operando2==0)
            {
                printf("\nERROR Verifique el operando 2,ya que no puede ser igual a 0.\n\n");
            }
            else
            {
                printf("\nEl resultado de la division es %.2f\n\n", divisionRealizada);
            }
            system("pause");

            operando1=0;
            operando2=0;
            flagA=0;
            flagB=0;
            break;

        case 5:
            system("cls");
            printf("SALIR\n");
            system("pause");
            break;

        default:
            printf("Error ingrese una opcion valida!\n");
            system("pause");

        }

    }
    while(opcionDeseada !=5);



    return 0;
}
//comienzan las operaciones aritmeticas

