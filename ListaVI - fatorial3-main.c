#include<stdio.h>

void fatorial(int n)

{

	int i, fat;
	fat=1;

	for(i=2;i<=n;i++)
		{
	
			fat *=i;					
		}

	printf("%d! = %d", n, fat);

}

void main()

{

int i, numero;


for(i=1;i<=10;i++)

	{

		printf("Entre com um numero: ");
		scanf("%d", &numero);

		fatorial(numero);
									
	}

}
