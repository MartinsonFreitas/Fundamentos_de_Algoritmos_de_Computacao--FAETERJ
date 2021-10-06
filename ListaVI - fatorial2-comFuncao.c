/*

FUNÇOES:

Exemplo: Fatorial
				 5! = 5 * 4 * 3 * 2 * 1
				 

*/

//Código "Com funções"

#include<stdio.h>

void fatorial()

{

int n, i, fat;

printf("Entre com um numero: ");
scanf("%d", &n);

fat=1;

for(i=2;i<=n;i++)
{
	fat *=i;
}
	printf("%d! = %d", n, fat);
	
}


void main()

{

	fatorial();

}


