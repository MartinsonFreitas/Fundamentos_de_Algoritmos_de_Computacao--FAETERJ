/*Lista IV - Exercício 7

QUESTÃO 07: Desenvolver um programa no qual o usuário entre com vários números inteiros e positivos e 
imprima o produto dos números ímpares e a soma dos números pares. 

*/

#include <stdio.h>

void main ()
{
	//declaração de variáveis
	char resp;
	int num, prod = 1, soma = 0;
	
	//Leitura dos dados de entrada
	do
	{
		//leitura do valor
		printf ("Entre com um numero: ");
		scanf ("%d", &num);
		
		if (num%2==1)  //testando se é ímpar
		{
			prod = prod*num;	
		}
		else //é par
		{
			soma = soma+num;
		}
		
		//verificando se o usuário deseja continuar		
		do
		{
			printf ("Deseja continuar (S/N)?");
			fflush (stdin);
			scanf ("%c", &resp);
			resp = toupper (resp);
			
			if ((resp != 'S') && (resp != 'N'))
			{
				printf ("Opcao invalida! Tente novamente.\n");
			}
			
		} while ((resp != 'S') && (resp != 'N'));
	}
	while (resp == 'S');
	
	//exibindo os resultados
	printf ("Produto dos impares = %d\n", prod);
	printf ("Soma dos pares = %d\n", soma);
}
