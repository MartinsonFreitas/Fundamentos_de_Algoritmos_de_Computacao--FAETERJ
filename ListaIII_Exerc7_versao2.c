/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exercícios III
	
	QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado 
	para saber se as pessoas gostaram ou não de um novo produto que 
	foi lançado. Para cada pessoa entrevistada foram coletados os 
	seguintes dados: gênero (M ou F) e resposta (G [Gostou] ou N 
	[Não Gostou]). Sabendo-se que foram entrevistadas X pessoas, faça
	um programa que forneça:

		a) Número de pessoas que gostaram do produto;
		b) Número de pessoas que não gostaram do produto;
		c) Informação dizendo em que gênero o produto teve uma melhor
		aceitação.
		
	VERSÃO 2: nesta versão, não perguntamos a quantidade de entrevistados.
	Ao invés, perguntamos ao final de cada entrevistado se o usuário 
	deseja continuar. Assim, utilizamos a estrutura do..while.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, numPessoas=0, contG, contNG, contF=0, contM=0, contFG=0, contMG=0;
	char genero, opiniao, resposta;
	float percF, percM;
	
	//lendo os dados de cada entrevistado
	do
	{
		//lendo o gênero (M/F)
		fflush (stdin);
		printf ("\nEntre com o genero (M/F): ");
		scanf ("%c", &genero);
		//genero = getche();
		
		//lendo a opinião (G/N)
		fflush (stdin);
		printf ("Entre com a sua opiniao ([G]ostou / [N]ao gostou): ");
		scanf ("%c", &opiniao);
		//opiniao = getche();
		
		//atualizando o número de entrevistados
		numPessoas++;
		
		//verificando o generop do entrevistado
		if ((genero == 'F') || (genero == 'f'))
		{
			contF++;
			
			//verificando se a mulher gostou do produto
			if ((opiniao == 'G') || (opiniao == 'g'))
			{
				contFG++;
			}
		}
		else
		{
			contM++;
			
			//verificando se o homem gostou do produto
			if ((opiniao == 'G') || (opiniao == 'g'))
			{
				contMG++;
			}
		}	
		
		//verificando se deseja continuar a leitura
		fflush (stdin);
		printf ("\nDeseja continuar (S/N)? ");
		scanf ("%c", &resposta);	
	}
	while ((resposta == 's') || (resposta == 'S'));
	
	//determinando o número de pessoas que gostaram e que não
	//gostaram do produto
	contG = contFG + contMG;
	contNG = numPessoas - contG;
	
	//calculando pos percentuais de aceitação por genero
	percF = (float)contFG/contF;  //percentual no intervalo de 0 a 1
	percM = (float)contMG/contM;  //percentual no intervalo de 0 a 1

	//exibindo os resultados
	printf ("\n\nNumero de pessoas que gostaram do produto: %d\n", contG);
	printf ("Numero de pessoas que não gostaram do produto: %d\n", contNG);

	if (percF > percM)
	{
		printf ("Maior aceitacao entre o publico feminino");
	}
	else
	{
		if (percM > percF)
		{
			printf ("Maior aceitacao entre o publico masculino");
		}
		else
		{
			printf ("Mesma aceitacao para os dois generos");
		}
	}
}
