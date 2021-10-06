#include<stdio.h>

// somar os numeros de A a B

int somar(int A, int B)

{
		 int i, S=0;
		 
		 for (i=A; i<=B; i++)
		 
		 {
				 	
				 	S+=i;
		 }
		 
		 return S;
	
	}


	void main()
	{
		int n1, n2, result;
		
		printf("Entre com os dois numeros: ]");
		scanf("%d %d", &n1, &n2);
		
		result=somar(n1, n2);
		
			printf("Resultado= %d", result);
		
	}

