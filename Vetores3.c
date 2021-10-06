/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Vetores - Exemplo 3 (armazenar no vetor os quadrados dos números de 1 ao tamnho do vetor (TAMANHO))
*/

//importação de bibliotecas
#include<stdio.h>

//declaração de constantes
#define TAMANHO 10

//main
void main()
{
	//declaração de variáveis
	int valores[TAMANHO];			
	int i;						
	
	for (i=0;i<TAMANHO;i++)
	{
		valores[i] = i*i;
	}		
	
	//exibindo o vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<TAMANHO;i++)
	{
		printf ("%d ", valores[i]);
	}
}
