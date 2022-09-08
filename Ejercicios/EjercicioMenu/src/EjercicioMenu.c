/*
Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMenu.h"

int main(void) {
	setbuf(stdout, NULL);

	int respuesta = 0;
	int opcion;
	char salida;
	int banderaInicio=0;
	int banderaProceso=0;

	while(respuesta == 0)
	{
		opcion = menuInputs();

		switch(opcion){
			case 1:
				printf("Se inicializó la operación.");
				banderaInicio = 1;
			break;
			case 2:
				if(banderaInicio == 0)
				{
					printf("Debe Iniciar antes de Procesar");
				}
				else{
					printf("Se ha procesado correctamente.");
					banderaProceso = 1;
				}
			break;
			case 3:
				if(banderaInicio == 0)
				{
					printf("Debe Iniciar antes de Finalizar");
				}
				else
				{
					if(banderaProceso == 0)
					{
						printf("Debe Procesar antes de Finalizar");
					}
					else
					{
						printf("Se ha finalizado correctamente");
					}
				}
			break;
			case 4:
				respuesta = salir();
			break;
			default:
				printf("La opción ingresada, no es válida");
		}
	}
}
