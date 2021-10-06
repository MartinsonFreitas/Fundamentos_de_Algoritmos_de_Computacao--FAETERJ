/*
	FAC - Professor Leonardo Vianna
	Data: 08/04/2021
	
	Lista de Exercícios 1
	
	QUESTÃO 02: Elabore um algoritmo que, dada a idade de um nadador, 
	classifique-o em uma das seguintes categorias:
						Categoria 	Faixa de idade
						infantil A 	0 - 4 anos
						infantil B 	5 - 7 anos
						infantil C 	8-10 anos
						juvenil A 	11-13 anos
						juvenil B 	14-17 anos
						Adulto 		18 anos ou mais*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int idade;
	
	//Solicitar a idade do nadador
	printf ("Entre coma idade do nadador: ");
	scanf ("%d", &idade);
	
	//Verificar a idade e imprimir as mensagens conforme abaixo
	if (idade < 5) 
	{
		printf ("Infantil A");
	}
	else
	{
		if (idade < 8)
		{
			printf ("Infantil B");
		}
		else
		{
			if (idade < 11)
			{
				printf ("Infantil C");
			}	
			else
			{
				if (idade < 14)
				{
					printf ("Juvenil A");
				}
				else
				{
					if (idade < 18)
					{
						printf ("Juvenil B");
					}		
					else
					{
						printf ("Adulto");
					}
				}	
			}
		}
	}
}
