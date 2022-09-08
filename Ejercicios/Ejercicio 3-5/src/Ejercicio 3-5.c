/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int resta(int primerNumero, int segundoNumero);

int main(void) {
	setbuf(stdout, NULL);
	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("\nIngrese el primer número");
	scanf("%d", &primerNumero);
	printf("\nIngrese el segundo número");
	scanf("%d", &segundoNumero);

	resultado =	resta(primerNumero, segundoNumero);

	printf("\nEl resultado de la resta es: %d", resultado);

	return 0;
}

int resta(int primerNumero, int segundoNumero)
{
	int resultado;
	resultado = primerNumero - segundoNumero;

	return resultado;
}
