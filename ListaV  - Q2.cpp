/*

QUESTÃO 02: Pede-se o desenvolvimento
de um programa que leia n valores e
determine o maior e o menor elementos
do conjunto fornecido.

*/

#include <stdio.h>


void main ()
{
	//declaração de variáveis
	int x, QUANT=0, menor=0, maior=0;
	
	//pegando a quantidade de valores a serem analisados
	printf ("Digite a quantidade de valores a serem analisados: ");
	scanf ("%f", &QUANT);
	
	for (i=1; i<=QUANT; i++)
	{
		//leitura dos dados de cada entrevistado
		printf ("Digite um valor: ");
		scanf ("%d", &x);		
			
		//verificando a maior valor
		if (x > maior)
			{
				maior = x;
			}
		
			//verificando a menor altura
			if (x < menor)
			{
				menor = x;
			}
		
	}
	
	//exibindo os resultados
	printf ("Maior valor: %.d\n", maior);
	printf ("Menor valor: %.d\n", menor);
	
}
