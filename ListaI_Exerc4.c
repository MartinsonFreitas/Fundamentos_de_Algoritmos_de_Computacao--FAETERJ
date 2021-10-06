/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Lista de Exercícios 1
	
	QUESTÃO 04:
	Um banco concederá um crédito especial aos seus clientes, 
	variável com o saldo médio no último ano. Faça um algoritmo 
	que calcule o valor do crédito de acordo com a tabela abaixo.

			Saldo Médio 				Percentual
			Inferior a R$ 1000,00 		nenhum crédito
			De R$ 1000,00 a R$ 1499,99	20% do saldo médio
			De R$ 1500,00 a R$ 2499,99	30% do saldo médio
			R$ 2500,00 ou mais 			40% do saldo médio*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	float saldo, credito;

	//lendo o saldo médio do cliente
	printf ("Entre com o saldo medio: ");
	scanf ("%f", &saldo);
	
	//determinando o crédito do cliente
	if (saldo < 1000)
	{
		credito = 0;
	}
	else
	{
		//if ((saldo >= 1000) && (saldo < 1500))
		if (saldo < 1500)
		// ou if (saldo <= 1499.99)
		{
			credito = 0.2 * saldo;			
		}
		else
		{
			if (saldo < 2500)
			//ou if (saldo <= 2499.99)
			{
				credito = 0.3 * saldo;
			} 
			else
			{
				credito = 0.4 * saldo;
			}
		}
	}
	
	//exibindo o crédito do cliente
	printf ("\nCredito = R$ %.2f", credito);
}
