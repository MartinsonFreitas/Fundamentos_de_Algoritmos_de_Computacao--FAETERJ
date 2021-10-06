/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exercícios III
	
	QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com 
	rendimento fixo de R% ao mês. Pede-se a implementação de um 
	programa que calcule o valor (e exiba-o) disponível na conta 
	de Joãozinho após A anos de investimento.	
	
	Exemplo:
	Q: 1000.00	
	R: 1% a.m.
	A: 5 anos = 60 meses
	
		Q: 1000 ------> 1010 ------> 1020,10 ---> ....
	            1º mes       2º mes 
	            
	            1000 * 1/100
*/
//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int a, meses, i;
	float q, r, saldo;
	
	//lendo os valores de entrada
	printf ("Entre com o valor aplicado: ");
	scanf ("%f", &q);
	
	printf ("Entre com a taxa de juros mensal: ");
	scanf ("%f", &r);
	
	printf ("Entre com o tempos de aplicação (em anos): ");
	scanf ("%d", &a);
	
	//transformando anos 'a' para 'meses'
	meses = a*12;
	
	//armazenando em 'saldo' a quantia inicialmente aplicada
	saldo = q;
	
	//calculando o valor acumulado ao longo dos 'a' anos
	r = r/100;
	for (i=1;i<=meses;i++)
	{
		saldo = saldo + r*saldo;
	}	
	
	//exibindo o salfo final
	printf ("\nSaldo final: R$ %.2f", saldo);
}
