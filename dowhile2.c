/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Estruturas de repetição - do .. while
	
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 50

//main
void main ()
{
	//declaração de variáveis
	int numero;
	
	do
	{		
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
	}
	while (numero != 0);
}
