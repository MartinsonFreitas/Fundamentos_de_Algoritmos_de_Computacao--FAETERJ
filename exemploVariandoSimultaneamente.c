/*
	FAC - Professor Leonardo Vianna
	Data: 22/04/2021
	
	Exemplo: funcionamento de dois fors aninhados
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, j;

	for (i=1,j=5;(i<=5)/*&&(j>=1)*/;i++,j--)
	{
		printf ("%d %d\n", i, j); 
	}
}

/*
i: 1 2 3 4 5 6
j: 5 4 3 2 1 0 
*/
