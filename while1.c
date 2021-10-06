/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Estruturas de repetição - while
	
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 50

//main
void main ()
{
	//declaração de variáveis
	int i = 1;
	
	//variando todos os valores do intervalo de 1 a QUANT
	//i=1;
	while (i<=QUANT)
	{		
		printf ("%d ", i);
		i++;
	} 
}
