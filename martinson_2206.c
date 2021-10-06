/*

	Fazer uma função que permaneça lendo valores enquanto estes estiverem em ordem crescente, 
e determine a quantidade de valores fornecidos assim como a quantidade de números distintos 
(neste último caso, desconsiderar o valor responsável pela parada da leitura).

Exemplo:


     Sequência de números fornecidos:
     5  7  9  9   12  15  15  15  18  7

     Quantidade de valores: 10
     Quantidade de valores distintos: 6

Nota: Deve ser apresentada a função main() com a chamada à função desenvolvida.

?????
1) Qual o objetivo do parâmetro 'num'?
2) E os retornos da função?
3) Não podia fazer tudo dentro de um if só?

*/

#include<stdio.h>

//declaração dos protótipos das funções
void exibir_qtde(int *valores, int *distintos);


int soma (int a, int b);

void main()
{
	int num=8;
		
//	exibir_qtde(num);
	
	printf("%d %d", soma (2, 3));
}
	
int soma (int a, int b)
{
	return a+b;
}

void exibir_qtde(int *valores, int *distintos)
{
	int n;
	//declarando variaveis
	int aux=-99999, aux2=-99999, count=0, count2=0;
	
	do {	
		printf("\n Informe um numero: ");
		scanf("%d",&n);
		
		if (n>=aux) {

		 	aux = n;
		 	count++;
		
		}
		
		if (n>aux2){
			
			aux2 = n;
		 	count2++;
		
		}
	
	}
 	while (n>=aux);
 	
	printf("\n Quantidade de valores: %d", count);
	printf("\n Quantidade de valores distintos: %d", count2);

}
