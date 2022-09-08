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

//prototipos o declaración o firma
void mostrarNumero(int numero); //parametros formales

int main(void) {
	setbuf(stdout, NULL);
	int numero;

	printf("\nIngrese un número");
	scanf("%d", &numero);

	mostrarNumero(numero); //llamada o invocación de la función

	return 0;
}

void mostrarNumero(int numero)//desarrollo de la función //parametros formales
{
	printf("\nEl número ingresado es %d", numero);
}
