/*
Augusto Monguillot 1°C
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define INGRESADO 1
#define NO_INGRESADO 0

int main(void)
{
	float operando1;
	float operando2;
	int opciones;
	float suma;
	float resta;
	float division;
	float multiplicacion;
	long int factorialN1;
	long int factorialN2;
	float flagNumero1;
	float flagNumero2;
	char respuesta;

	respuesta = 's';

	setbuf(stdout, NULL);

	do
	{
		opciones = menu();

		switch(opciones)
		{
			case 1:
				operando1 = num1();
				flagNumero1 = INGRESADO;
				break;
			case 2:
				operando2 = num2();
				flagNumero2 = INGRESADO;
				break;
			case 3:
				if(flagNumero1 == INGRESADO && flagNumero2 == INGRESADO)
				{
					suma = sumar(operando1,operando2);
					resta = restar(operando1,operando2);
					multiplicacion = multiplicar(operando1,operando2);
					division = dividir(operando1,operando2);
					factorialN1 = factorial(operando1);
					factorialN2 = factorial(operando2);
					printf("\nPreparando los resultados");
				}
				else
				{
					printf("ERROR, ingrese los dos números para realizar las operaciones \n");
				}
				break;
			case 4:
				printf("La suma de %.2f + %.2f es : %.2f", operando1, operando2, suma);
				printf("\nLa resta de %.2f - %.2f es: %.2f", operando1, operando2, resta);
				printf("\nLa multiplicación de %.2f * %.2f es: %.2f", operando1, operando2, multiplicacion);
				printf("\nLa división de %.2f / %.2f es: %.2f", operando1, operando2, division);
				printf("\nEl factorial del primer operando es: %ld",factorialN1);
				printf("\nEl factorial del segundo operando es: %ld",factorialN2);
				break;
			case 5:
				printf("\nHasta luego");
				respuesta = 'n';
				break;
		}

	}
	while(respuesta == 's');

	return 0;

}

