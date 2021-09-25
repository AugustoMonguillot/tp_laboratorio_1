/*
 * funciones.c
 *
 *  Created on: 25 sep. 2021
 *      Author: augus
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu(void)
{
	int opcion;

	printf("\n1. Ingresar primer operando");
	printf("\n2. Ingresar segundo operando");
	printf("\n3.Realizar todas las operaciones");
	printf("\n4. Informar el resultado de las operaciones");
	printf("\n5. Salir");

	scanf("%d", &opcion);

	return opcion;
}

float num1(void)
{
	float numero1;

	printf("\nIngrese el primer operando");
	scanf("%f", &numero1);

	return numero1;
}

float num2(void)
{
	float numero2;

	printf("\nIngrese el segundo operando");
	scanf("%f", &numero2);

	return numero2;
}

float sumar(float numero1, float numero2)
{
	float resultadoSuma;

	resultadoSuma = (float)numero1 + numero2;

	return resultadoSuma;
}

float restar(float numero1, float numero2)
{
	float resultadoResta;

	resultadoResta = (float)numero1 - numero2;

	return resultadoResta;
}

float dividir(float numero1, float numero2)
{
	float cociente;

	cociente = (float)numero1 / numero2;

	return cociente;
}

float multiplicar(float numero1, float numero2)
{
	float producto;

	producto = (float)numero1 * numero2;

	return producto;
}

