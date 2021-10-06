/*Lista IV - Exercício 6

QUESTÃO 06: Criar um programa que exiba os N primeiros termos da seguinte série:  
 
		1,2,8,64,1024,... 
		
*/

#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int n, i, termo, razao;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	termo = 1;
	razao = 2;
	
	//exibindo os termos
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		termo *= razao;
		razao *= 2;
	}	
}


