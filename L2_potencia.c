/*Calcular o valor de x elevado a y

*/

#include <stdio.h>

void main ()
{
	//Declaração de variáveis
	int x, y, i, potencia = 1;
	
	//Lendo os valores
	printf ("Entre com a base: ");
	scanf ("%d", &x);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &y);
	
	//calculando o valor da potência
	for (i=1;i<=y;i++)
	{
		potencia = potencia * x;
	}
	
	//exibindo o resultado
	printf ("%d elevado a %d = %d",x, y, potencia);
}
