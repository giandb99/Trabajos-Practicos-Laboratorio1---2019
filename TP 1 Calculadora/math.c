#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ingresarOpcion(void)
{
    int opcion;
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\nIngrese una opcion: ");
    fflush(stdin);
    scanf("%d",&opcion);

    while(opcion <1 || opcion>5)
    {
        printf("Error. Ingrese una opcion valida (1-5): ");
        fflush(stdin);
        scanf("%d",&opcion);
    }

    return opcion;
}

void ingresarNumero(float* pNumero)
{
    printf("\nIngrese un numero: ");
    fflush(stdin);
    scanf("%f",pNumero);
}

int sumar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1 + numero2;
    printf("\nEl resultado de la suma es %.2f\n", resultado);
    return resultado;
}

int restar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1 - numero2;
    printf("El resultado de la resta es %.2f\n", resultado);
    return resultado;
}

int multiplicar(float numero1, float numero2)
{
    float resultado;
    resultado=numero1 * numero2;
    printf("El resultado de la multiplicacion es %.2f\n", resultado);
    return resultado;
}

int dividir(float numero1, float numero2)
{
    float resultado;
    if(numero2==0)
    {
        printf("No es posible dividir por cero\n");
    }
    else
    {
        resultado=numero1 / numero2;
        printf("El resultado de la division es %.2f\n",resultado);
    }
    return resultado;
}

double mostrarFactorial(float numero1)
{
    int i;
    double resultado = 1;

    for(i=(int)numero1;i>=1;i--)
    {
        resultado=resultado*i;
    }
    printf("El factorial de %.2f es %.2lf\n",numero1, resultado);
    return resultado;
}
