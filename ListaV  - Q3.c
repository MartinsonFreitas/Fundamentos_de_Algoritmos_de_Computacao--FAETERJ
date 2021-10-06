/*

QUESTÃO 03: Implementar um programa
que calcule o valor de base expoente, onde
base e expoente são números inteiros
dados pelo usuário.

*/

#include <stdio.h>


int main ()
{
	//declaração de variáveis
	int i, x, y, resultado;
	
	//pegando a os valores da base e do expoente

	printf ("Entre com a base: ");
	scanf ("%d", &x);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &y);
	
	for (i=1; i<=y; i++)
		{
			
			resultado = resultado * x;
			
		}
	
	//exibindo os resultados
	printf ("Resultado de %d elevado a %d eh %d\n", x, y, resultado);
	
}
