/*Lista IV - Exercício 10

QUESTÃO 10: Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e 
gênero das pessoas. 

Faça um programa que leia as informações de 50 pessoas e informe: 
- a maior e a menor alturas encontradas; 
- a média de altura das mulheres; 
- a média de altura da população; 
- o percentual de homens na população. */

#include <stdio.h>

#define QUANT 5

void main ()
{
	//declaração de variáveis
	int i, quantMulheres = 0, quantHomens = 0;
	float altura, maior = 0, menor = 5, somaAltMulheres = 0, mediaAltMulheres, somaAltura = 0, percHomens;
	char genero;
	
	for (i=1; i<=QUANT; i++)
	{
		//leitura dos dados de cada entrevistado
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		printf ("Genero (M/F): ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		//verificando a maior altura
		if (altura > maior)
		{
			maior = altura;
		}
		
		//verificando a menor altura
		if (altura < menor)
		{
			menor = altura;
		}
		
		//somando as alturas de todas as mulheres
		if (genero == 'F')
		{
			somaAltMulheres += altura;
			quantMulheres++;
		}
		else
		{
			quantHomens++;
		}		
		
		//somando todas as alturas
		somaAltura += altura;
	}
	
	//exibindo os resultados
	printf ("Maior altura: %.2f\n", maior);
	printf ("Menor altura: %.2f\n", menor);
	
	if (quantMulheres > 0)
	{
		mediaAltMulheres = somaAltMulheres/quantMulheres;
		printf ("Media de altura das mulheres: %.2f\n", mediaAltMulheres);
	}
	else
	{
		printf ("Nenhuma mulher foi entrevistada!\n");
	}
	
	printf ("Media de altura da populacao: %.2f\n", somaAltura/QUANT);
	
	percHomens = (quantHomens*100)/QUANT;
	
	printf ("Percentual de homens na populacao: %.1f%%", percHomens);
}
