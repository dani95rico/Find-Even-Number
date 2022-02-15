/*
 * EncontrarPar.c
 *
 *  Created on: 17/10/2014
 *      Author: dani95rico
 */
#include <stdio.h>
#define MAX 5

int main(void)
{
	int secuenciaN[MAX];  /*Secuencia de numeros introducida*/
	int i;                /*Recorre la secuencia*/
	int posicionP;        /*Posicion del numero par*/
	int numero;
	/*Rellenar la secuencia de numeros*/
	printf("Teclee numero: ");
	fflush(stdout);

	for(i=0;i<MAX && numero!=-1;i++)
	{
		scanf("%d",&numero);
		fflush(stdin);
		if(numero!=-1)
		secuenciaN[i]=numero;
	}

	/*Identificar numeros pares*/
	posicionP=-1;
	for(i=0;i<MAX && i!=-1;i++)
		{
		posicionP++;
		if(secuenciaN[i]%2==0)
		{
			printf("\nEncontrado par en la poscicion: %d",posicionP);
			fflush(stdout);
			printf("\tDe valor: %d",secuenciaN[i]);
			fflush(stdout);
		}
		}

return 0;
}
