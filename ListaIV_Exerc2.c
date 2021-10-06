/*Lista IV - Exercício 2

QUESTÃO 02: Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro 
fornecido pelo usuário. 
*/

#include <stdio.h>

void main ()
{
	//Declaração de variáveis
	int i, n, soma = 0;
	
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//somando os valores de 1 a N
	for (i=1;i<=n;i++)
	{
		soma = soma + i;  //soma += i;
	}	
	
	//exibindo o resultado
	printf ("Soma =%d", soma);
}
