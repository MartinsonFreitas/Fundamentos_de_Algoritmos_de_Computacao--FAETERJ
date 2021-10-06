/*
Implementar um programa no qual o
usuário informa um número e verifica-se se
ele é um número triangular.
Obs.: Um número é triangular quando ele
for resultado do produto de três números
consecutivos.
Exemplo: 24 = 2 x 3 x 4.
*/

#include<stdio.h>

int main () {

//DECLARAR AS VARIAVEIS

int a, b, c, p, n;

	printf("Entre com um numero: ");
	scanf("%d", &n);
	
	a=1; b=2; c=3;
	p = a * b * c;
	
	while ( p < n)
	
		{
			a++;
			b++;
			c++;
			p=a*b*c;
	}
	
		if(p==n){
			printf("%d e triangular", n);
		} else {
			printf("%d não e triangular", n);
		}
	
}

