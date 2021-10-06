/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Exercício: Calcular o valor de S = 1/n - 2/(n-1) + 3/(n-2) - ... n/1
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, j;
	float s=0;
	
	//leitura do valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);	
		
	for (i=1,j=n;(i<=n)/*&&(j>=1)*/;i++,j--)
	{
		//verificando se o 'i' é par
		if (i%2 == 0)
		{
			s = s - (float)i/j;     //casting - coerção
		}
		else // ou seja, 'i' é ímpar
		{
			s = s + (float)i/j;     //casting - coerção
		}
	}
		
	//exibindo o resultado
	printf ("Soma = %.2f", s);
}

/*
n = 4
i: 1 2 3 4 5
j: 4 3 2 1 0
*/
