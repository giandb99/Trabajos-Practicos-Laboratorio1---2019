#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Funciones.h"

int main()
{
    int opcion;
    char answer;
    int auxFree;
    int auxId;
    int flag;

    flag=0;

    eEmployee listado[EMPLEADOS];
    initEmployees(listado,EMPLEADOS,-1);

    do
    {
        printf("\n~~~~~~~~~~~~~~~~~BIENVENIDO~~~~~~~~~~~~~~~~~\n\n");
        printf(" 1-ALTAS\n 2-MODIFICAR\n 3-BAJA\n 4-INFORMAR\n 5-SALIR\n");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        opcion=opcionF();

        switch(opcion)
        {
            case 1:
                auxFree=searchFree(listado,EMPLEADOS,-1);
                if(auxFree==-1)
                {
                    printf("\nNo hay mas lugar disponible.\n");
                }
                else
                {
                    printf("\nDesea ingresar un empleado? ");
                    answer=answerF();
                    if(answer=='n'|| answer=='N')
                    {
                        printf("\nNo se ingresara empleado\n");
                    }
                    else
                    {
                        printf("\nSe ingresara empleado\n");
                        addEmployees(listado,auxFree);
                        flag=1;
                    }
                }
                break;

            case 2:
                if(flag==1)
                {
                    printEmployees(listado,EMPLEADOS);
                    auxId=idF();
                    auxId=findEmployeeById(listado,EMPLEADOS,auxId);
                }
                else
                {
                    printf("\nError.Primero debe ingresar un empleado.\n");
                    system("pause");
                    system("cls");
                }
                break;

            case 3:
                if(flag==1)
                {
                    printEmployees(listado,EMPLEADOS);
                    auxId=idF();
                    auxId=removeEmployee(listado,EMPLEADOS,auxId);
                }
                else
                {
                    printf("\nError.Primero debe ingresar un empleado.\n");
                    system("pause");
                    system("cls");
                }
                break;

            case 4:
                if(flag==1)
                {
                    printf("\n1-ORDENAR POR APELLIDO\n2-ORDENAR POR SECTOR\n");
                    opcion=opcionF();
                    switch(opcion)
                    {
                        case 1:
                            sortEmployeeByLastName(listado,EMPLEADOS);
                            printEmployees(listado,EMPLEADOS);
                            averages(listado,EMPLEADOS);
                            break;

                        case 2:
                            sortEmployeeBySector(listado,EMPLEADOS);
                            printEmployees(listado,EMPLEADOS);
                            averages(listado,EMPLEADOS);
                            break;

                        default:
                            printf("\n\nLa opcion ingresada no es valida\n\n");
                    }
                }
                else
                {
                    printf("\nError.Primero debe ingresar un empleado.\n");
                    system("pause");
                    system("cls");
                }
                break;

            case 5:
                printf("\nSALIENDO ...\n");
                break;

            default:
                printf("\nLa opcion ingresada no es valida.\n\n");
                system("pause");
                system("cls");
                break;
        }
    }while(opcion!=5);

    return 0;
}
