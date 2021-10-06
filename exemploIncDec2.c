/*
	FAC - Professor Leonardo Vianna
	Data: 08/04/2021
	
	Exemplo: uso dos operadores ++ e --
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int a = 10, b;
	
	//atualizando a e b
	b = ++a;
	
	//a++;			
	//b = a;		
	
	//exibindo os valores
	printf ("a = %d e b = %d\n", a, b);
}
