/*Lista IV - Exercício 11

QUESTÃO 11: Implementar um programa no qual o usuário informa um número e verifica-se se ele é um número 
triangular.  

Obs.: Um número é triangular quando ele for resultado do produto de três números consecutivos.  

	Exemplo: 24 = 2 x 3 x 4. 
*/

#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int n1=1, n2=2, n3=3, n, prod;
	
	//leitura do valor a ser classificado como triangular ou não
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	prod = n1*n2*n3;
	
	while (prod < n)
	{
		n1++;
		n2++;
		n3++;
		
		prod = n1*n2*n3;
	}
	
	if (prod == n)
	{
		printf ("%d e triangular", n);
	}
	else
	{
		printf ("%d nao e triangular", n);
	}
}
