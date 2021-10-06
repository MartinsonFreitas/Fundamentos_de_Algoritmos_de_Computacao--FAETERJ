/*Lista I - Exercício 3

QUESTÃO 03: Dado um número inteiro N, exibi um TRIÂNGULO como representados nos exemplos abaixo:

Exemplo 1: 
	N=3
	
	Saída:
			1
			2 2
			3 3 3
			
Exemplo 2: 
	N=6
	
	Saída:
			1
			2 2
			3 3 3
			4 4 4 4
			5 5 5 5 5
			6 6 6 6 6 6

*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int i, N, cont=0;
		
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &N);
		
	do {
		
		for (i=1;i<=cont;i++)
		
			{
				printf (" %d", cont);
			}
			
			cont++;
			printf ("\n ");
		}
	
	while (cont<=N);

}	

