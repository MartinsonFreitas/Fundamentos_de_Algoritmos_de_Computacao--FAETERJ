/*
   FAC - 2021/1
   Data: 13/05/2021
   
   Funções
   
   Exemplos: calcular o fatorial (n!) de um número n.
   
   				Exemplo: 5! = 1x2x3x4x5 = 120
   				
   	Caso 2: com funções (com parâmetros e sem retorno)
*/

//importação de bibliotecas
#include <stdio.h>

void fatorial (int n)    
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
	
	//exibindo o resultado
	printf ("\n%d! = %d\n\n", n, fat);	
}

//main
void main ()
{
	//declaração de variáveis
	int i, num, x=10, y=5;

	//Exemplo 1: calculando os fatorias dos números de 1 a 10	
	for (i=1;i<=10;i++)
	{
		fatorial (i);
	}
	
	//Exemplo 2: calculando o fatorial de um valor dado pelo usuário
	printf ("\nEntre com um numero: ");
	scanf ("%d", &num); 	
	
	fatorial (num);
	
	//Exemplo 3: calculando o fatorial de um valor fixo
	fatorial (9);
	
	//Exemplo 4: calculando o fatorial de uma operação
	fatorial ((x+y)/2);
}
