/*
	FAC - Professor Leonardo Vianna
	Data: 22/04/2021
	
	Exercício: Calcular o valor de S = 1/1 + 1/2 + 1/3 + ... + 1/(n-1) + 1/n
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i;
	float s=0;
	
	//leitura do valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);
	
	//variando de 1 até n
	for (i=1;i<=n;i++)
	{
		s = s + 1.0/i; //atualização / s é um acumulador
	}
	
	//exibindo o resultado
	printf ("Soma = %.2f", s);
}

/*
n: 3
s: 0+1/1=1+1/2=1,5+1/3=1,83
i: 3
*/
