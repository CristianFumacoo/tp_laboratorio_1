#include <stdio.h>
#include <stdlib.h>
#include "calcu.h"


int main()
{
    int numUno;
    int numDos;

    int salir = 0;
    int opc;

    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorialUno;
    float factorialDos;



    do
    {
        system("cls");
        printf("1.Ingresar primer numero.\n");
        printf("2.Ingresar segundo numero.\n");
        printf("3.Realizar operaciones.\n");
        printf("4.Mostrar operaciones.\n");
        printf("5.Salir.\n");
        printf("Ingresar opcion: ");
        scanf("%d",&opc);


        switch(opc)
        {
            case 1:
                printf("Ingrese numero: ");
                scanf("%d",&numUno);
            break;

            case 2:
                printf("Ingrese numero: ");
                scanf("%d",&numDos);
            break;

            case 3:
                suma = sumar(numUno,numDos);
                resta = restar(numUno,numDos);
                multiplicacion = multiplicar(numUno,numDos);
                division = dividir(numUno,numDos);
                factorialUno = factorizar(numUno);
                factorialDos = factorizar(numDos);
            break;

            case 4:
                printf("La suma dio: %.0f\n",suma);
                printf("La resta dio: %.0f\n",resta);
                printf("La multiplicacion dio: %.0f\n",multiplicacion);

                if(numUno != 0)
                {
                    printf("La division dio: %.2f\n",division);
                }
                else
                {
                    printf("No se puede dividir por 0\n");
                }

                printf("El factorial del primer numero es: %.0f Y del segundo numero es: %.0f\n",factorialUno,factorialDos);


                system("pause");
                break;
            case 5:
                printf("Nos vemos!");
                salir = 1;
                break;

        }

        //system("pause");

    }while(salir == 0);
    return 0;
}
































