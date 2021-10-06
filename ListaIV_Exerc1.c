/*Lista IV - Exercício 1

QUESTÃO 01: Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N.  

*/

#include <stdio.h>

void main ()
{
	//Declaração de variáveis
	int i, n;
	
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//exibindo os números pares iguais ou inferiores a N
	for (i=1;i<=n;i++)
	{
		if (i%2==0)
		{
			printf ("%d ", i);
		}
	}
}
