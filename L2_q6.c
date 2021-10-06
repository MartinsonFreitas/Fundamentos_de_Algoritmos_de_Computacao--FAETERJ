#include<stdio.h>

//1FAC - Lista II - QUESTÃO 06

int main()
{
	int a, b, c, maior, meio, menor, opcao;
	
	//exibir informacoes
	printf("i = 1: os tres valores em ordem crescente;\n");
	printf("i = 2: os tres valores em ordem decrescente;\n");
	printf("i = 3: o maior valor deve ser apresentado no meio dos outros.\n");
	//obter a
	printf("Insira o valor de A:\n");
	scanf("%d", &a);
	//obter b
	printf("Insira o valor de B:\n");
	scanf("%d", &b);
	//obter c
	printf("Insira o valor de C:\n");
	scanf("%d", &c);
	
	//se a>b
	if(a>b)
	{
		//se a>c entao a é o maior
		if(a>c)
		{
			maior=a;
			//se b>c entao a>b>c
			if(b>c)
			{
				meio=b;
				menor=c;
			}
			//senao c>b entao a>c>b
			else
			{
				meio=c;
				menor=b;
			}
		}
		//se a>b e a<c entao c>a>b
		else
		{
			maior=c;
			meio=a;
			menor=b;
		}
	}
	//senao b>a
	else
	{
		//se c>b entao c>b>a
		if(c>b)
		{
			maior=c;
			meio=b;
			menor=a;
		}
		//senao b>c entao b é o maior
		else
		{
			maior=b;
			//se a<c entao b>c>a
			if(a<c)
			{
				meio=c;
				menor=a;
			}
			//senao a>c entao b>a>c
			else
			{
				meio=a;
				menor=c;
			}
		}
	}
	
	do
	{
		//obter opcao
		printf("Insira o valor de i:\n");
		scanf("%d", &opcao);
		
		//exibir
		switch(opcao)
		{
			case 1:
				printf("%d %d %d\n", menor, meio, maior);
				break;
			case 2:
				printf("%d %d %d\n", maior, meio, menor);
				break;
			case 3:
				printf("%d %d %d\n", meio, maior, menor);
				break;
			default:
				printf("Opcao invalida.\n");
				printf("Se deseja continuar digite 0.\n");
				scanf("%d", &opcao);
		}
	}while(opcao==0);
}