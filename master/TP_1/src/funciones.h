/*
 * funciones.h
 *
 *  Created on: 25 sep. 2021
 *      Author: augus
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/**
 * @fn float num1(void);
 *
 * @brief funcion que le pide al usuario el valor del primer operando.
 *
 * @return el valor del primer operando
 */
float num1(void);

/**
 * @fn float num2(void);
 *
 * @brief funcion que le pide al usuario el valor del segundo operando.
 *
 * @return devuelve el valor del segundo operando.
 */
float num2(void);

/**
 * @fn float sumar(float numero1, float numero2);
 *
 * @brief funcion que realiza una suma entre los dos flotantes.
 *
 * @param float numero1 primer numero flotante.
 *
 * @param float numero2 segundo numero flotante.
 *
 * @return float sumar entrega el resultado de la suma entre los dos flotantes.
 */
float sumar(float numero1, float numero2);

/**
 *
 * @fn float restar(float numero1, float numero2);
 *
 * @brief funcion que realiza una resta entre los dos flotantes.
 *
 * @param float numero1 primer numero flotante.
 *
 * @param float numero2 segundo numero flotante.
 *
 * @return float restar entrega el resultado de la resta entre los dos flotantes.
 */
float restar(float numero1, float numero2);

/**
 * @fn float dividir(float numero1, float numero2);
 *
 * @brief funcion que realiza una division entre los dos flotantes.
 *
 * @param float numero1 primer numero flotante.
 *
 * @param float numero2 segundo numero flotante.
 *
 * @return float dividir entrega el cociente de la division entre los flotantes.
 */
float dividir(float numero1, float numero2);

/**
 * @fn float multiplicar(float numero1, float numero2);
 *
 * @brief funcion que multiplica a los flotantes.
 *
 * @param float numero1 primer numero flotante.
 *
 * @param float numero2 segundo numero flotante.
 *
 * @return float multiplicar entrega el producto de la multiplicacion entre los flotantes.
 */
float multiplicar(float numero1, float numero2);

/**
 * @fn int menu(void);
 *
 * @brief un menu interactivo.
 *
 * @param float x recibe un numero que ingresa el usuario.
 *
 * @param float y recibe un numero ingresado por el usuario.
 *
 * @return int menu devuelve una opcion del 1 al 5 que luego es utilizada por el switch.
 */
int menu(void);

/**
 * @fn long int factorial1(int numero1);
 *
 * @brief funcion que realiza el factorial del primer operando
 *
 * @param numero
 * @return
 */
long int factorial(int numero);

#endif /* FUNCIONES_H_ */
