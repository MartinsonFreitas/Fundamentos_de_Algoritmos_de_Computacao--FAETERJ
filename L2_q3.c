#include<stdio.h>

//1FAC - Lista II - QUESTÃO 03

int main()
{
	float preco;
	
	//obter preco
	printf("Insira o preco do produto:\n");
	scanf("%f", &preco);
	
	//exibir
	printf("Preco a vista: R$%.2f\n", preco*0.9);
	printf("Preco da parcela em 5x: R$%.2f\n", preco/5);
	printf("Preco da parcela em 10x: R$%.2f\n", (preco*1.2)/10);
}
