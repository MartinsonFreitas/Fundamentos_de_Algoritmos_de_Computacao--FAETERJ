/*Lista I - Exercício 2

QUESTÃO 02: Dados dois números inteiros A e B, exibir todos os valores pares existentes no intervalo definido por A e B.

		==>	Acrescentar o cálculo da média dos valores exibidos.  

*/

#include <stdio.h>

int main ()
{
	//Declaração de variáveis
	int i, a, b, soma=0, cont=0, media;
	
	//Leitura do valor de A	
	printf ("Entre com o primeiro valor do Intervalo: ");
	scanf ("%d", &a);
	
	//Leitura do valor de B	
	printf ("Entre com o segundo valor do Intervalo: ");
	scanf ("%d", &b);
	
	//exibindo os números pares do intervalo A - B
	
	// Se os numeros forem iguais... 
	
	if(a==b){
			printf ("Numeros iguais... Tente novamente!");
			}
			
	// Se...
	else {
		
		if(a<b){
		for (i=a;i<=b;i++)
		{
			if (i%2==0)
			{
				printf (" %d", i);
				soma += i;
				cont++;
			}
		}					
	} 
	
	// ou... Tentei colocar o ELSE e o programa imprime o último número		
	else {
			for (i=b;i<=a;i++)
			{
				if (i%2==0)
				{
					printf (" %d ", i);
					soma += i;
					cont++;
				}
			}				
		} 		
	}
	
		//	printf ("\n %d ", soma);	
		//	printf ("\n %d ", cont);
		media = soma/cont;
		
		printf ("\n Media dos numeros = %d", media);
}	

/*
	LEONARDO:
	
	aqui se aplicam as observações que fiz no exercício 1, uma vez que este é continuação
	daquele. 
	
	Em relação ao cálculo da média, tem um pequeno detalhe (que se torna desnecessário
	falar sobre ele na primeira aula rs). É que a soma e o cont são inteiros. Consequentemente,
	ao tentar dividir um pelo outro, o resultado também será inteiro; mas não deveria, pois
	média é, por natureza, um número real. Nesse caso, deveríamos recorrer ao 'casting'.
	Lembra disso? rs
*/

/* Martinson:

	Fiz as alterações conforme sugerido, mas acho que não vi essa questão do 'casting'... Pelo menos não me lembro!

*/
