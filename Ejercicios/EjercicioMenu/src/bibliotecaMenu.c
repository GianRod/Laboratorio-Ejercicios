/*
 * bibliotecaMenu.c
 *
 *  Created on: 8 sep. 2022
 *      Author: gianr
 */

#include <stdio.h>
#include <stdlib.h>

int menuInputs(){

	int retorno;

	printf("\n 1) Iniciar\n"
			"2) Procesar\n"
			"3) Finalizar\n"
			"4) Salir\n");
	printf("Ingrese una opción:");
	scanf("%d", &retorno);
	return retorno;
}


int salir(){

	char salida;
	int respuesta;

	printf("¿Está seguro que desea salir s/n?");
	fflush(stdin);
	scanf("%c", &salida);
	if(salida == 's')
	{
		respuesta = 1;
	}
	else
	{
		respuesta = 0;
	}

	return respuesta;
}
