/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exercícios III
	
	QUESTÃO 01: Faça um programa que leia um número inteiro positivo N 
	e exiba todos os múltiplos de Y inferiores a N, onde N e Y são 
	fornecidos pelo usuário.
	
	Exemplos:
	
	1)	N = 10 e Y = 3
		Resultado: 0, 3, 6, 9
		
	2)  N = 20 e Y = 5
	    Resultado: 0, 5, 10, 15	
*/
//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, y, i;
	
	//lendo os valores de entrada
	printf ("Entre com o limite: ");
	scanf ("%d", &n);
	
	printf ("Entre com o valor cujos multiplos serao exibidos: ");
	scanf ("%d", &y);
	
	//variando os valores de 0 a n-1
	for (i=0;i<n;i=i+y)
	{
		printf ("%d ", i);
	}
}
