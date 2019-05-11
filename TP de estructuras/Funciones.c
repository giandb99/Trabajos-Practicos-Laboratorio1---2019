#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Funciones.h"

int opcionF()
{
    int opcion;

    printf("\nIngrese una opcion por favor: ");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

char answerF()
{
    char answer;

    printf("[N o S]: ");
    fflush(stdin);
    scanf("%c",&answer);

    while(answer!='n' && answer!='N' && answer!='s' && answer!='S')
    {
        printf("\nLa opcion ingresada no es valida. Ingrese N o S por favor: \n");
        fflush(stdin);
        scanf("%c",&answer);
        system("pause");
        system("cls");
    }
    return answer;
}

int idF()
{
    int id;
    printf("\nIngrese el ID: ");
    scanf("%d",&id);
    return id;
}

void initEmployees(eEmployee listado[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        listado[i].isEmpty=1;

         listado[i].id = 0;

    }
}

int searchFree(eEmployee listado[],int len)
{
    int i;
    for(i=1;i<len;i++)
    {
        if(listado[i].isEmpty==1)
        {
            return i;
        }
    }
    return -1;
}

int addEmployees(eEmployee listado[],int auxFree,int len)
{
    int i;
    i=auxFree;
    //listado[i].id=auxFree;

    listado[i].id = mayorIdEstudio(listado, len) + 1;

    printf("\nEl id del empleado es: %d\n",auxFree);
    fflush(stdin);

    printf("\nIngrese nombre: ");
    gets(listado[i].name);
    fflush(stdin);

    printf("\nIngrese apellido: ");
    gets(listado[i].lastName);
    fflush(stdin);

    listado[i].salary=getFloat("\nIngrese salario: ");
    listado[i].sector=getInt("\nIngrese sector: ");

    listado[i].isEmpty=0;

    system("pause");
    system("cls");

    return 0;
}

int findEmployeeById(eEmployee listado[],int len,int id)
{
    int i;
    char answer;
    int opcion;

    for(i=0;i<len;i++)
    {
        if(id==listado[i].id&&listado[i].isEmpty==0)
        {
            printf("\nSe puede modificar el empleado.\n");
            printf("\nEsta seguro que quiere modificar al empleado? ");
            answerF();
            if(answer=='n'|| answer=='N')
            {
                printf("\nNo se ingresara empleado\n");
            }
            printf("\n1. Modificar nombre\n2. Modificar apellido\n3. Modificar salario\n4. Modificar sector\n");
            printf("\nQue desea modificar? Elija una opcion: ");
            fflush(stdin);
            scanf("%d",&opcion);

            switch(opcion)
            {
                case 1:
                    printf("\nIngrese el nuevo nombre: ");
                    fflush(stdin);
                    gets(listado[i].name);
                    system("cls");
                    break;

                case 2:
                    printf("\nIngrese el nuevo apellido: ");
                    fflush(stdin);
                    gets(listado[i].lastName);
                    system("cls");
                    break;

                case 3:
                    printf("\nIngrese el nuevo salario: ");
                    fflush(stdin);
                    scanf("%f",&listado[i].salary);
                    system("cls");
                    break;

                case 4:
                    printf("\nIngrese el nuevo sector: ");
                    fflush(stdin);
                    scanf("%d",&listado[i].sector);
                    system("cls");
                    break;

                default:
                    printf("\nERROR. La opcion ingresada no es valida\n\n");
                    break;
            }
        }
    }
    system("cls");
    return 0;
}

int removeEmployee(eEmployee listado[],int len,int id)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(id==listado[i].id&&listado[i].isEmpty==0)
        {
            printf("\nEl empleado %s %s fue dado de baja exitosamente.\n\n",listado[i].name,listado[i].lastName);
            listado[i].isEmpty=-1;
        }
    }
    system("pause");
    system("cls");
    return 0;
}

void sortEmployeeByLastName(eEmployee listado[],int len)
{
    int i,j;

    eEmployee auxLastName;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(strcmp(listado[i].lastName,listado[j].lastName)>0)
            {
                auxLastName=listado[i];
                listado[i]=listado[j];
                listado[j]=auxLastName;
            }
        }
    }
}

void sortEmployeeBySector(eEmployee listado[],int len)
{
    int i,j;

    eEmployee auxSector;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(listado[i].sector>listado[j].sector)
            {
                auxSector=listado[i];
                listado[i]=listado[j];
                listado[j]=auxSector;
            }
        }
    }
}

void printEmployees(eEmployee listado[],int len)
{
    int i;

    printf("\n\t%4s \t%12s \t%12s \t%12s \t%5s\n","ID","Apellido","Nombre","Salario","Sector");

    for(i=0;i<len;i++)
    {
        if(listado[i].isEmpty==0)
        {
            printf("\n\t%4d \t%12s \t%12s \t%10.2f \t%5d\n",listado[i].id,listado[i].lastName,listado[i].name,listado[i].salary,listado[i].sector);
        }
    }

}

void averages(eEmployee listado[],int len)
{
    int i;
    float acumulador=0;
    int contador=0;

    for(i=0;i<len;i++)
    {
        if(listado[i].isEmpty==0)
        {
            acumulador=acumulador+listado[i].salary;
            fflush(stdin);
            contador++;
        }
        else if(listado[i].isEmpty==1)
        {
            printf("\nNo se ha ingresado ningun empleado\n");
        }
    }
    printf("\nEl total de los salarios es: %f.\n",acumulador);
    printf("\nEl salario promedio de los sueldos es: %f\n",acumulador/contador);
    system("pause");
    system("cls");
}

int getInt(char mensaje[])
{
    char auxiliarChar[10];
    int enteroADevolver;

    printf("%s", mensaje);
    scanf("%s", auxiliarChar);
    fflush(stdin);
    enteroADevolver = atoi(auxiliarChar);

    while(enteroADevolver == 0)
    {
        printf("\nERROR. Ha ingresa una letra o un valor igual a 0. Ingrese nuevamente un valor: ");
        scanf("%s", auxiliarChar);
        enteroADevolver = atoi(auxiliarChar);
    }
    return enteroADevolver;
}

float getFloat(char mensaje[])
{
    char auxiliarChar[10];
    float floatADevolver;

    printf("%s", mensaje);
    scanf("%s", auxiliarChar);
    fflush(stdin);
    floatADevolver = atof(auxiliarChar);

    while(floatADevolver == 0)
    {
        printf("\nERROR. Ha ingresa una letra o un valor igual a 0. Ingrese nuevamente un valor: ");
        scanf("%s", auxiliarChar);
        floatADevolver = atof(auxiliarChar);
    }
    return floatADevolver;
}

int mayorIdEstudio(eEmployee listado[],int len)
{
    int i;
    int flag = 0;
    int aux = 0;
    for(i=0; i<len; i++)
    {
        if(flag==0 || listado[i].id>aux)
        {
            aux = listado[i].id;
            flag = 1;
        }
    }
    return aux;
}
