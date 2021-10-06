/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Lista de Exercícios 1
	
	QUESTAO 03:
	Construir um algoritmo que calcule o peso ideal de uma 
	pessoa, de acordo com o seu genero e altura, utilizando as 
	seguintes formulas:

		para homens: 	(72.7*h)-58
		para mulheres: 	(62.1*h)-44.7
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	char genero;
	float altura, peso;
	
	//leitura da altura
	printf ("Entre com a sua altura: ");
	scanf ("%f", &altura);

	//leitura do genero
	printf ("Entre com o seu genero (M/F): ");
	fflush (stdin); //standard input - entrada padrão
	scanf ("%c", &genero);
	
	//calculando o peso ideal
	if ((genero == 'M') || (genero == 'm'))
	{
		peso = (72.7*altura)-58;		
	}
	else
	{
		peso = (62.1*altura)-44.7;
	}
	
	//exibindo o resultado
	printf ("Peso ideal = %.1f kg", peso);
}
