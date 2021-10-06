/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exercícios III
	
	QUESTÃO 05: Faça um programa que exiba na tela os 50 primeiros 
	termos da seguinte série: 1, -2, 3, -4, 5, -6 ...*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 50

//main
void main ()
{
	//declaração de variáveis
	int i, j;
	
	//variando todos os valores do intervalo de 1 a QUANT
	for (i=1, j=-2;i<=QUANT;i+=2,j-=2)
	{
		printf ("%d %d ", i, j);
	} 
}
