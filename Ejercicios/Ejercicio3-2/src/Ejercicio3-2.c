/*
 ============================================================================
 Name        : Ejercicio3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int restar2 (void);

int main(void) {
	int resultado;

	resultado = restar2();

	printf("\nEl resultado es: %d", resultado);
	return 0;
}

int restar2(void)
{
	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("\nIngrese el primer número");
	scanf("%d", &primerNumero);
	printf("\nIngrese el segundo número");
	scanf("%d", &segundoNumero);

	resultado = primerNumero - segundoNumero;

	return resultado;
}
