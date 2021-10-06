/*Lista I - Exercício 1

QUESTÃO 01: Dados dois números inteiros A e B, exibir todos os valores pares existentes no intervalo definido por A e B.  

*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int i, a, b;
	
	//Leitura do valor de A	
	printf ("Entre com o primeiro valor do Intervalo: ");
	scanf ("%d", &a);
	
	//Leitura do valor de B	
	printf ("Entre com o segundo valor do Intervalo: ");
	scanf ("%d", &b);
	
	//exibindo os números pares do intervalo A - B
	
	// Se os numeros forem iguais... 
	// Ao colocar essa condição no final, mesmo que os números fossem diferentes a mensagem era impressa!
	if(a==b){
			printf ("Numeros iguais... Tente novamente!");
			}
			
	else
	
	{
			// Se...
		if(a<b){
			for (i=a;i<=b;i++)
			{
				if (i%2==0)
				{
					printf ("%d ", i);
				}
			}
		} 
	
		// ou... Tentei colocar o ELSE e o programa imprime o último número		
		else {
			for (i=b;i<=a;i++)
			{
				if (i%2==0)
				{
					printf ("%d ", i);
				}
			}		
		} 
	}			
		
}
// Começando devagar... Pra não atrapalhar!
// Mas quando coloco o ELSE na segunda parte, o programa imprime o último número
// Quando coloco a condição de < isso não acontece...
// Por que?
// Tentei fazer com outra estrutura e a mensagem final sempre aparecia... 
// Achei estranho e fiz da maneira mais simples possível!


/*LEONARDO:

Martinson, ao analisar a sua solução realmente senti falta do 'else'; e aí, no final,
vejo esse comentário seu. 
Não sei exatamente como você fez. Porém, você faz três comparações (o que está certo):
a = b, a < b e a > b. Mas eu desconfio que você usou o else 'apenas' uma vez, quando
o correto seria usar duas, como a seguir:

	if (a == b)
	{
		...
	}
	else
	{
		if (a < b)
		{
			...
		}
		else		//aqui não é necessário testar de a > b, pois certamente será. Concorda?
		{
			...
		}
	}

*/

/* Martinson:

	Fiz as alterações conforme sugerido, obrigado!

*/

