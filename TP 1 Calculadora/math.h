#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED

//PROTOTIPO DE FUNCIONES

/** \brief Pide ingresar una opcion para comenzar
 *
 * \param numeroA float* la direccion de memoria
 * \return Retorna la opcion ingresada
 *
 */

int ingresarOpcion(void);

/** \brief Pide el ingreso de un numero y lo almacena
 *
 * \param numeroA float* la direccion de memoria
 * \return Void
 *
 */

void ingresarNumero(float* pNumero);

/** \brief La funcion toma los 2 numeros digitados y los suma
 *
 * \param numero1 float
 * \param numero2 float
 * \return Retorna el resultado de numero1 + numero2
 *
 */

int sumar(float numero1, float numero2);

/** \brief La funcion toma los 2 numeros digitados y los resta
 *
 * \param numero1 float
 * \param numero2 float
 * \return Retorna el resultado de numero1 - numero2
 *
 */

int restar(float numero1, float numero2);

/** \brief La funcion toma los 2 numeros digitados y los multiplica
 *
 * \param numero1 float
 * \param numero2 float
 * \return Retorna el resultado de numero1 * numero2
 *
 */

int multiplicar(float numero1, float numero2);

/** \brief la funcion toma los 2 numeros digitados y los divide
 *
 * \param numero1 float
 * \param numero2 float
 * \return Retorna el resultado de numero1 / numero2
 *
 */

int dividir(float numero1, float numero2);

/** \brief La funcion factoriza los 2 numeros digitados anteriormente
 *
 * \param numero1 float
 * \return Retorna la factorizacion de los numeros
 *
 */

double mostrarFactorial(float numero);

#endif // MATH_H_INCLUDED
