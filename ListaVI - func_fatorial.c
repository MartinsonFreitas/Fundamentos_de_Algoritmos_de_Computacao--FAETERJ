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

