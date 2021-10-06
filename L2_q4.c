#include<stdio.h>

//1FAC - Lista II - QUESTÃO 04

int main()
{
	float pviagem, combustivel, pcombustivel;
	
	//obter percurso
	printf("Insira o percurso da viagem(em Km):\n");
	scanf("%f", &pviagem);
	//obter Km/L
	printf("Insira o numero de Km que o carro percorre com um litro de combustivel(Km/L):\n");
	scanf("%f", &combustivel);
	//obter preco do combustivel
	printf("Insira o preco do litro do combustivel:\n");
	scanf("%f", &pcombustivel);
	//limpa a tela
	system("cls");
	//exibir
	printf("Quantidade de combustivel utilizada: %.1f litros\n", pviagem/combustivel);
	printf("Custo de combustivel: R$ %.2f", (pviagem/combustivel)*pcombustivel);
	
}
