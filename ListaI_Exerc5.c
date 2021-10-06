/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Lista de Exercícios 1
	
	QUESTÃO 05:
	Escrever um algoritmo que, dada uma quantia em reais, 
	calcule o menor número possível de notas/moedas (100, 50, 
	20, 10, 5, 2 e 1) em que o valor pode ser decomposto.*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int v, r, nota100, nota50, nota20, nota10, nota5, nota2, moeda1, quant;	
	
	//Solicitar a quantia (V)
	printf ("Entre com a quantia: ");
	scanf ("%d", &v);
	
	//decompondo a quantia nas diversas notas
	nota100 = v / 100;
	r = v % 100;
	
	nota50 = r / 50;
	r = r % 50;
	
	nota20 = r / 20;
	r = r % 20;
	
	nota10 = r / 10;
	r = r % 10;
	
	nota5 = r / 5;
	r = r % 5;
	
	nota2 = r / 2;
	moeda1 = r % 2;
	
	//calculando a quantidade de notas/moedas
	quant = nota100 + nota50 + nota20 + nota10 + nota5 + nota2 + moeda1;
	
	//exibindo a quantidade de notas/moedas
	printf ("\n\nA quantia de %d reais foi decomposta em %d notas/moedas:\n", v, quant);
	
	if (nota100 != 0)
	{
		printf ("%d notas de 100\n", nota100);
	}
	
	if (nota50 != 0)
	{
		printf ("%d notas de 50\n", nota50);
	}
	
	if (nota20 != 0)
	{
		printf ("%d notas de 20\n", nota20);
	}
	
	if (nota10 != 0)
	{	
		printf ("%d notas de 10\n", nota10);
	}
	
	if (nota5 != 0)
	{
		printf ("%d notas de 5\n", nota5);
	}
	
	if (nota2 != 0)
	{
		printf ("%d notas de 2\n", nota2);
	}
	
	if (moeda1 != 0)
	{
		printf ("%d moedas de 1\n", moeda1); 
	}
}
