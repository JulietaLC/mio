
#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

/**
 *\ brief Funcion que hace la suma de dos numeros flotantes
 *\ param  A float que llega como parametro para hacer la operacion
 *\ param  B float que llega como parametro para hacer la operacion
 *\ return Retorna el valor de la operacion
 */

float sumar(float A,float B)
{
    float sumar;
    sumar=A+B;
    return sumar;
}
/**
 *\ brief Funcion que hace la resta de dos numeros flotantes
 *\ param  A float que llega como parametro para hacer la operacion
 *\ param  B float que llega como parametro para hacer la operacion
 *\ return Retorna el valor de la operacion
 */
float restar(float A,float B)
{
    float restar;
    restar=A-B;
    return restar;
}

/**
 *\ brief Funcion que hace la multiplicacion de dos numeros flotantes
 *\ param  A float que llega como parametro para hacer la operacion
 *\ param  B float que llega como parametro para hacer la operacion
 *\ return Retorna el valor de la operacion
 */

float multiplicar(float A,float B)
{
    float multiplicar;
    multiplicar=A*B;
    return multiplicar;
}
/**
 *\ brief Funcion que hace la division de dos numeros flotantes
 *\ param  A float que llega como parametro para hacer la operacion
 *\ param  B float que llega como parametro para hacer la operacion
 *\ return Retorna el valor de la operacion
 */


float dividir (float A, float B)
{
    float dividir;
    dividir=A/B;
    return dividir;
}

/**
 *\ brief Funcion que hace factoriza los numeros
 *\ param  A float que llega como parametro para hacer la operacion
 *\ param  B float que llega como parametro para hacer la operacion
 *\ return Retorna el valor de la operacion
 */
float factorial (float A)
{
    float factorial=1;
    int i;

    for(i=1; i<=A ; i++)
    {

        factorial*=i;

    }
    return factorial;
}
