/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Estruturas de Repetição - FOR
	
	Exemplo 2: escrever na tela os números ímpares no intervalo de 1 a 3000
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i;
	
	//for (inicialização;critério/condição de permanência;atualização)
	for (i=1;i<=3000;i=i+2)
	{
		printf ("%d\n", i);
	}
}
