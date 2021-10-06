#include<stdio.h>

//1FAC - Lista II - QUESTÃO 01

int main()
{
	float altura, peso, imc;
	
	//obter altura
	printf("Insira sua altura:\n");
	scanf("%f", &altura);
	//obter peso
	printf("Insira seu peso:\n");
	scanf("%f", &peso);
	//calcular imc
	imc=peso/(altura*altura);
	
	//se o imc for menor que 18.5
	if(imc<18.5)
	{
		printf("Abaixo do peso\n");
	}
	//senao
	else
	{
		//se o imc for menor que 25
		if(imc<25)
		{
			printf("Peso ideal\n");
		}
		//senao
		else
		{
			//se o imc for menor que 30
			if(imc<30)
			{
				printf("Sobrepeso\n");
			}
			//senao
			else
			{
				//se o imc for menor que 35
				if(imc<35)
				{
					printf("Obesidade grau 1\n");
				}
				//senao
				else
				{
					//se o imc for menor que 40
					if(imc<40)
					{
						printf("Obesidade grau 2\n");
					}
					//senao
					else
					{
						printf("Obesidade grau 3\n");
					}
				}
			}
		}
	}
}
