#include <stdio.h>
#include <stdlib.h>
#include "calcu.h"

float sumar(int numUno, int numDos)
{
    return (float) (numUno + numDos);
}

float restar(int numUno, int numDos)
{
   return (float) (numUno - numDos);
}

float multiplicar(int numUno, int numDos)
{
    return (float) (numUno * numDos);
}

float dividir(int numUno, int numDos)
{
    return (float) (numUno / numDos);
}

float factorizar(int num)
{
    float resultado = 1;

    for (int i = 1; i <= num; i++)
    {
        resultado = resultado * i;
    }

    return (float) resultado;
}
