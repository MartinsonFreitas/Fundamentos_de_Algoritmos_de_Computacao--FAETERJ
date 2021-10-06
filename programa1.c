/*FAC – Professor Leonardo Vianna
Primeiro programa em C – calcula a soma de 2 números*/

//Importação de bibliotecas
#include <stdio.h>   //standard input output
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>

void main ()
{
	//Declaração de variáveis
	int num1, 		//armazena o primeiro valor
	    num2, 		//armazena o segundo valor
		soma;		//armazena o resultado da soma de num1 e num2

	//Leitura dos números
	printf ("Entre com o primeiro numero: ");
	scanf ("%d", &num1);

	printf ("Entre com o segundo numero: ");
	scanf ("%d", &num2);

	//calculando a soma
	soma = num1 + num2;
    
	//exibindo o resultado
	printf ("%d + %d = %d", num1, num2, soma);
}
