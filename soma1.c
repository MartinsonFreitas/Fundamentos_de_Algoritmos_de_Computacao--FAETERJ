/*
	FAC - Professor Leonardo Vianna
	Data: 22/04/2021
	
	Exercício: Calcular o valor de S = 1 + 2 + 3 + ... + (n-1) + n
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, s=0;
	
	//leitura do valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);
	
	//variando de 1 até n
	for (i=1;i<=n;i++)
	{
		s = s + i; //atualização / s é um acumulador
	}
	
	//exibindo o resultado
	printf ("Soma = %d", s);
}


/*
n = 5

i: 6
s: 0+1=1+2=3+3=6+4=10+5=15

*/


