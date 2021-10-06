/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exercícios III
	
	QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, 
	devem ser exibidas as seguintes informações:
	
	a) A quantidade de valores negativos digitados;
	b) A média dos valores positivos.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 300

//main
void main ()
{
	//declaração de variáveis
	int i, quantNeg=0, quantPos=0;
	float numero, somaPos=0, mediaPos;
	
	//lendo os valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificando se o número é negativo
		if (numero < 0)
		{
			quantNeg++; //quantNeg = quantNeg + 1;  ou quantNeg += 1;
		}
		else
		{
			//testando se é positivo (afinal, pode ser zero também)
			if (numero > 0)
			{
				somaPos = somaPos + numero; //somaPos += numero;
				quantPos++;
			}
		}
	}
	
	//calculando a média dos números positivos
	mediaPos = somaPos/quantPos;
	
	//exibindo os resultados 	
	printf ("\nQuantidade de valores negativos digitados: %d", quantNeg);
	printf ("\nMedia dos valores positivos: %.1f", mediaPos);
}
