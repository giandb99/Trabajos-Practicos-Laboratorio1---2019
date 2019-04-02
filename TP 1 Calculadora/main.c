#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "math.c"

int ingresarOpcion(void);

int main()
{
    float numeroA;
    float numeroB;
    float resultado;
    int banderaA=0;
    int banderaB=0;
    int opcion;

    do
    {
        printf("\n~~~~~~~~~~~~~~~~~CALCULADORA~~~~~~~~~~~~~~~~~\n\n");

        if(banderaA==1)
        {
            printf("1.Ingrese el primer numero (A=%.2f)\n",numeroA);
        }
        else
        {
            printf("1.Ingrese el primer numero (A=x)\n");
        }

        if(banderaB==1)
        {
            printf("2.Ingrese el segundo numero (B=%.2f)\n",numeroB);
        }
        else
        {
            printf("2.Ingrese el segundo numero (B=x)\n");
        }

        printf("3.Realizar los Calculos\n");
        printf("4.Mostrar los resultados\n");
        printf("5.Salir\n");

        opcion=ingresarOpcion();

        switch(opcion)
        {
            case 1:
                banderaA=1;
                ingresarNumero(&numeroA);
                break;

            case 2:
                banderaB=1;
                ingresarNumero(&numeroB);
                break;

            case 3:
                if(banderaA==1 && banderaB==1)
                {
                    printf("\nCalculando la suma %.2f + %.2f ...\n",numeroA,numeroB);
                    printf("Calculando la resta %.2f - %.2f ...\n",numeroA,numeroB);
                    printf("Calculando la multiplicacion %.2f * %.2f ...\n",numeroA,numeroB);
                    printf("Calculando la division %.2f / %.2f ...\n",numeroA,numeroB);
                    printf("Calculando los factoriales de %.2f y %.2f ...\n\n",numeroA,numeroB);
                }
                else
                {
                    printf("\nError! Primero ingrese los 2 numeros...\n\n");
                }
                break;

            case 4:
                if(banderaA==1 && banderaB==1)
                {
                    resultado=sumar(numeroA,numeroB);

                    resultado=restar(numeroA,numeroB);

                    resultado=multiplicar(numeroA,numeroB);

                    resultado=dividir(numeroA,numeroB);

                    if(numeroA<0)
                    {
                        printf("(Error %.2f) No se pueden factorizar los numeros negativos!!!\n",numeroA);
                    }
                    else
                    {
                        mostrarFactorial(numeroA);
                    }

                    if(numeroB<0)
                    {
                        printf("(Error %.2f) No se pueden factorizar los numeros negativos!!!\n",numeroB);
                    }
                    else
                    {
                        mostrarFactorial(numeroB);
                    }
                }
                else
                {
                    printf("\nError!!! Aun no hiciste los calculos!!\n\n");
                }
                break;

            case 5:
                printf("Saliendo...\n");
                break;

            default:
                 printf("Error. Ingrese una opcion valida (1-5): ");

        }

        system("pause"); //pausa la consola
        system("cls");  //limpia

    } while(opcion!=5);

    return 0;
}
