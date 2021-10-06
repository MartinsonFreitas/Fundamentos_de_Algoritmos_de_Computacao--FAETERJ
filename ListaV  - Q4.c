/*

QUESTÃO 04: A prefeitura de uma cidade
fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o
salário e número de filhos. 

A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até
R$ 1.000,00.

*/


#include <stdio.h>

#define QUANT 5

void main ()
{
	//declaração de variáveis
	int i, total=0, filhos, somaFilhos;
	float salario, maior, somaSalario, mediaSalario, mediaFilhos, percSalario;

	
	for (i=1; i<=QUANT; i++)
	{
		//leitura dos dados de cada entrevistado
		printf ("Quantos filhos: ");
		scanf ("%d", &filhos);
		
		printf ("Valor do salario: ");
		scanf ("%f", &salario);	
		
		//verificando a maior salario
		if (salario > maior)
		{
			maior = salario;
		}
		
		//somando assalariados ate 1000
		if (salario <= 1000)
		{
			total++;
		}
				
		
		//somando salarios
		somaSalario += salario;
		mediaSalario = somaSalario/QUANT;
		
		//somando filhos
		somaFilhos += filhos;
		mediaFilhos = somaFilhos/QUANT;
	}
	
	//exibindo os resultados
	printf ("Maior salario: %.2f\n", maior);
	printf ("Media de salarios: %.2f\n", mediaSalario);
	printf ("Media de filhos: %.2f\n", mediaFilhos);
	
	percSalario = (total*100)/QUANT;
	
	printf ("Percentual de assalariados ateh R$ 1000 na populacao: %.1f%%", percSalario);
}
