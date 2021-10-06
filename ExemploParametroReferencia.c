/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Exemplo de uso de parâmetro por referência.
	
	obs: o que não é parâmetro por referência (parâmetro de saída), é parâmetro 
	por valor (parâmetro de entrada).
	
	ATENÇÃO: suponha que o programador desejasse que o parâmetro fosse de saída (ou
	seja, por referência), porém esqueceu de colocar o * junto ao parâmetro.
*/

//importação de bibliotecas
#include<stdio.h>

//protótipos das funções
void funcao (int a, float b);

//main
void main()
{
	//declaração de variáveis
	int x = 10;
	float y = 3.2;
	
	//exibindo os valores de x e y antes da chamada à função
	printf ("x = %d e y = %.1f\n", x, y);
	
	//chamando a função
	funcao (x, y);        //x no lugar do parâmetro a; y no lugar do parâmetro b

	//exibindo os valores de x e y após a chamada à função
	printf ("x = %d e y = %.1f\n", x, y);
}

//implementação das funções
void funcao (int a, float b)
{
	a++;
	b = (b-a)/2;
}

