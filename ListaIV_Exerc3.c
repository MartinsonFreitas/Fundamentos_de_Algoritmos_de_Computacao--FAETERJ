/*Lista IV - Exercício 3

QUESTÃO 03: Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário. 
*/

#include <stdio.h>

void main ()
{
	//Declaração de variáveis
	int i, n;
	
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//verificando os divisores de N
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			printf ("%d ", i);
		}
	}	
}
