/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Lista de Exercícios 1
	
	QUESTÃO 06:
	Fazer um algoritmo que determine a ordem de uma data (dia e 
	mês) no ano.
		Exemplos:
			01/01 - 1º dia do ano
			03/02 - 34º dia do ano
			
	versão 1: considerando que todos os meses possuem 30 dias
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int dia, mes, totalDias;
	
	//Entrar com a data (dia e mês)
	printf ("Entre com a data (DD MM): ");
	scanf ("%d %d", &dia, &mes);
	
	//calculando o total de dias
	totalDias = 30*(mes-1) + dia;
	
	//exibindo o resultado
	printf ("\n%d/%d: %do. do ano", dia, mes, totalDias);
}
