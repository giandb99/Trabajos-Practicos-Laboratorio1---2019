#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define EMPLEADOS 10

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}eEmployee;

//CARGO EL MENU
int menu();

//PIDO UNA OPCION
int opcionF();

//PIDO UNA RESPUESTA
char answerF();

//PIDO EL ID
int idF();

//TODA LA LISTA DE EMPLEADOS A -1
void initEmployees(eEmployee[],int);

//BUSCO UN LUGAR LIBRE EN LA LISTA
int searchFree(eEmployee[],int);

//AGREGO AL EMPLEADO
int addEmployees(eEmployee[],int,int);

//BUSCO AL EMPLEADO
int findEmployeeById(eEmployee[],int,int);

//DOY DE BAJA UN EMPLEADO
int removeEmployee(eEmployee[],int,int);

//ORDENO A LOS EMPLEADOS POR EL APELLIDO
void sortEmployeeByLastName(eEmployee[],int);

//ORDENO A LOS EMPLEADOS POR EL SECTOR
void sortEmployeeBySector(eEmployee[],int);

//IMPRIMO EL LISTADO DE LOS  EMPLEADOS
void printEmployees(eEmployee[],int);

//SACO LOS PROMEDIOS Y LOS MUESTRO
void averages(eEmployee[],int);

//VALIDO LOS NUMEROS ENTEROS
int getInt(char mensaje[]);

float getFloat(char mensaje[]);

int mayorIdEstudio(eEmployee listado[],int len);

#endif // FUNCIONES_H_INCLUDED
