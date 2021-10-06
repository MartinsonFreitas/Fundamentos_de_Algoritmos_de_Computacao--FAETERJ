/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Vetores - Exemplo 6 (aramzenando no vetor a sequência de Fibonacci)
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

	//armazenando o valor 1 nas 2 primeiras posições
	valores[0] = 1;
	valores[1] = 1;
	
	//as demais posições serão preenchidas com a soma das duas anteriores
	for (i=2;i<TAMANHO;i++)
	{
		valores[i] = valores[i-1] + valores[i-2];	
	}	
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	for (i=0;i<TAMANHO;i++)
	{
		printf ("\n %d ", valores[i]);
	}	
}
