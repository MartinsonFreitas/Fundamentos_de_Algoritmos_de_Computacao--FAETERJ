/*
   FAC - 2021/1
   Data: 13/05/2021
   
   Funções
   
   Exemplo: calcular o valor de S = 1! + 2! + 3! + ... + 10!
      				
   	Caso 3: com funções (com parâmetros e com retorno)
*/

//importação de bibliotecas
#include <stdio.h>

int fatorial (int n)    
{
	//declaração de variáveis
	int i, fat;
	
/*	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);*/
	
	//calculando o fatorial
	for (fat=1, i=2; i<=n; i++)			//fat: 1x2x3x4x5x...x10
	{	
	 								    //fat: 10x9x8x7x6x5...x1
		fat *= i;
	}
	
/*	//exibindo o resultado
	printf ("\n%d! = %d\n\n", n, fat);	*/
	
	return fat;
}

//main
void main ()
{
	//declaração de variáveis
	int i, /*f,*/ s = 0;

	for (i=1;i<=10;i++)
	{
		//f = fatorial (i);
		//s += f;
		
		s += fatorial(i);
	}
	
	//exibindo o valor do somatório
	printf ("\nSoma = %d", s);
}
