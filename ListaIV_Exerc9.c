/*Lista IV - Exercício 9

QUESTÃO 09: Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha 
resto 5.  
*/

#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int cont = 0, num = 1000;	
	
	while (cont < 5) //cont != 5
	{
		num++;
		
		if (num % 11 == 5)
		{
			cont++;
		}		
	}

	//Exibindo o quinto elemento maior do que 1000 que dividido por 11 apresenta resto 5
	printf ("Valor = %d", num);
}
