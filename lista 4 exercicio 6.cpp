/*
Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,...

*/

#include<stdio.h>

int main () {

//DECLARAR AS VARIAVEIS

int N,num, i, r;

//OBTER O VALOR DE N


	printf("Entre com a quanidade a ser exibida: ");
	scanf("%d", &N);
	
	num=1;
	r=2;
	
	for (i=1; i<=N; i++)
	{
		printf("%d ", num);
		num=num*r;
		r=r*2;
	}
}

