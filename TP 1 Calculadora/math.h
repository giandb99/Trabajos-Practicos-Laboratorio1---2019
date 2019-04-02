#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED

//PROTOTIPO DE FUNCIONES
int ingresarOpcion(void);

/** \brief Pide el ingreso de un numero y lo almacena
 *
 * \param numeroA float* la direccion de memoria
 * \return void
 *
 */

void ingresarNumero(float* pNumero);

/** \brief La funcion toma los 2 numeros digitados y los suma
 *
 * \param numero1 float
 * \param numero2 float
 * \return float  el resultado de numero1 + numero2
 *
 */

int sumar(float numero1, float numero2);

/** \brief La funcion toma los 2 numeros digitados y los resta
 *
 * \param numero1 float
 * \param numero2 float
 * \return float  el resultado de numero1 - numero2
 *
 */

int restar(float numero1, float numero2);

/** \brief La funcion toma los 2 numeros digitados y los multiplica
 *
 * \param numero1 float
 * \param numero2 float
 * \return float  el resultado de numero1 * numero2
 *
 */

int multiplicar(float numero1, float numero2);

/** \brief la funcion toma los 2 numeros digitados y los divide
 *
 * \param numero1 float
 * \param numero2 float
 * \return float  el resultado de numero1 / numero2
 *
 */

int dividir(float numero1, float numero2);

/** \brief La funcion toma un numero digitado y lo factoriza
 *
 * \param numero1 float
 * \return double la factorizacion de numero1
 *
 */

double mostrarFactorial(float numero);

#endif // MATH_H_INCLUDED
