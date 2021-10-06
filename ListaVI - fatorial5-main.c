#include<stdio.h>


int fatorial(int n)

{

int i, fat;


fat=1;

for(i=2;i<=n;i++)
{
	fat *=i;
}
	//printf("%d! = %d", n, fat);
	return fat;
}


void main()
{
	int i, S=0, r;
	
	for(i=1;i<=10;i++)
	
	{
		r=fatorial(i);
		S+=r;
	}
	
	printf("Soma = %d", S);
	
}
