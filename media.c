/*
   FAC - 2021/1
   Data: 13/05/2021
   
   Funções
   
   Exemplo: calcular a média de aum aluno de FAC da FAETERJ-Rio
*/

//importação de bibliotecas
#include <stdio.h>

//função média
/*
	caso 3: com parâmetro e retorno
	
		parâmetros: os dados que a função precisa para fazer o que é proposto
			neste caso: av1, av2
			
		retorno: resultado, caso exista
			neste caso, a média das notas
*/
float media (float av1, float av2)
{
/*	float m;
	
	m = (av1 + av2)/2;
	
	return m;*/
	
	return (av1 + av2)/2;
}

//main
void main ()
{
	//declaração de variáveis
	int i;
	float n1, n2, m;
	
	//calculando a média de 5 alunos
	for (i=1;i<=5;i++)
	{
		printf ("\nEntre com a primeira nota: ");
		scanf ("%f", &n1);

		printf ("Entre com a segunda nota: ");
		scanf ("%f", &n2);

		/*m = media(n1,n2);
		printf ("\nNota1: %.1f, Nota2: %.1f, Media: %.1f\n", n1, n2, m);*/

		printf ("\nNota1: %.1f, Nota2: %.1f, Media: %.1f\n", n1, n2, media(n1,n2));
	}
}
