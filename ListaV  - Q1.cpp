/*

QUESTÃO 01: Faça um programa que leia
um número inteiro x e, em seguida, solicite
ao usuário outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
múltiplos de x fornecidos.

*/

#include <stdio.h> 

#define QUANT 5

int main() { 

int i, x, num, soma=0; 

	printf("Informe um numero inteiro: "); 
	scanf("%d", &x);
	
	for (i=1; i<=QUANT; i++) { 
	
		printf("Informe um numero inteiro: "); 
		scanf("%d", &num); 
		
		if (num % x == 0) {
		
			soma++; 
			
		}
	
	} 
	
	printf("O total de multiplos de %d e %d\n", x, soma); 
	 
} 
