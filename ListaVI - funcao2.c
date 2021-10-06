#include<stdio.h>

// exibir os numeros de A a B

void exibir(int A, int B)

{
		 int i;
		 
		 for (i=A; i<=B; i++)
		 
		 {
				 	
			printf("%d\n", i);
			
		 }
	
	}


	void main()
	{
		int num1, num2;
		
		printf("Entre com os dois numeros");
		scanf("%d %d", &num1, &num2);
		
		exibir(num1, num2);
		
	}
	
