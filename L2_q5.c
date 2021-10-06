#include<stdio.h>

//1FAC - Lista II - QUESTÃO 05

int main()
{
	int codigo, quantidade;
	
	//obter codigo
	printf("Insira o codigo do item:\n");
	scanf("%d", &codigo);
	//obter quantidade
	printf("Insira a quantidade:\n");
	scanf("%d", &quantidade);
	//se o codigo for igual a 100
	if(codigo==100)
	{
		printf("Preco: R$%.2f\n", quantidade*3.5);
	}
	//senao
	else
	{
		//se o codigo for igual a 101
		if(codigo==101)
		{
			printf("Preco: R$%.2f\n", quantidade*4.5);
		}
		//senao
		else
		{
			//se o codigo for igual a 102
			if(codigo==102)
			{
				printf("Preco: R$%.2f\n", quantidade*5.2);
			}
			//senao
			else
			{
				//se o codigo for igual a 103
				if(codigo==103)
				{
					printf("Preco: R$%.2f\n", quantidade*3.0);
				}
				//senao
				else
				{
					//se o codigo for igual a 104
					if(codigo==104)
					{
						printf("Preco: R$%.2f\n", quantidade*4.0);
					}
					//senao
					else
					{
						//se o codigo for igual a 105
						if(codigo==105)
						{
							printf("Preco: R$%.2f\n", quantidade*2.5);
						}
						//senao, o codigo nao existe
						else
						{
							printf("Codigo inexistente.\n");
						}
					}
				}
			}
		}
	}
}
