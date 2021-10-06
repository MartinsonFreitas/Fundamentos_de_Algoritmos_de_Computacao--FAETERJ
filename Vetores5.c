/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Vetores - Exemplo 5 (preenchendo o vetor com números aleatórios)
*/

//importação de bibliotecas
#include<stdio.h>

//declaração de constantes
#define TAMANHO 100

//main
void main()
{
	//declaração de variáveis
	int valores[TAMANHO];			
	int i;						
	
	//garantindo que cada sequência de valores gerados será diferente
	srand(time(NULL));
	
	//gerando números aleatórios com a função 'rand'
	for (i=0;i<TAMANHO;i++)
	{
		//valores[i] = rand();	//gera números inteiros aleatórios: uns pequenos, outros nem tanto
		//valores[i] = rand()%100;//gerando números aleatórios de 0 a 99	
		valores[i] = (rand()%10)+1;//gerando números aleatórios de 1 a 10
	}		
	
	//exibindo o vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<TAMANHO;i++)
	{
		printf ("%d ", valores[i]);
	}
}
