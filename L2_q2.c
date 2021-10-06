#include<stdio.h>

//1FAC - Lista II - QUESTÃO 02

int main()
{
	float peso, numero;
	
	//obter peso
	printf("Insira o peso:\n");
	scanf("%f", &peso);
	//obter numero do planeta
	printf("Insira um numero(1-6):\n");
	scanf("%f", &numero);
	
	//se o numero for igual a 1
	if(numero==1)
	{
		printf("%.1f\n", peso*0.37);
	}
	//senao
	else
	{
		//se o numero for igual a 2
		if(numero==2)
		{
			printf("%.1f\n", peso*0.88);
		}
		//senao
		else
		{
			//se o numero for igual a 3
			if(numero==3)
			{
				printf("%.1f\n", peso*0.38);
			}
			//senao
			else
			{
				//se o numero for igual a 4
				if(numero==4)
				{
					printf("%.1f\n", peso*2.64);
				}
				//senao
				else
				{
					//se o numero for igual a 5
					if(numero==5)
					{
						printf("%.1f\n", peso*1.15);
					}
					//senao
					else
					{
						printf("%.1f\n", peso*1.17);
					}
				}
			}
		}
	}
}
