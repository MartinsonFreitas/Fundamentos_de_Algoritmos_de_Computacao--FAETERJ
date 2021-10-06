/*
	FAC - Professor Leonardo Vianna
	Data: 08/04/2021
	
	Lista de Exercícios 1
	
	QUESTÃO 01: O custo ao consumidor de um carro novo é a
	soma do custo de fábrica com a porcentagem do distribuidor 
	e dos impostos (aplicados ao custo de fábrica). Desenvolver 
	um algoritmo que calcule o custo ao consumidor de
	determinado carro.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	float custoFabrica, custoCons, percentualDist, percentualImp, dist, imp;
	
	//solicitar  custo da fabrica
	printf ("Entre com o custo de fabrica do carro: ");
	scanf ("%f", &custoFabrica);
	
	//solicitar percentual do distribuidor
	printf ("Entre com o %% do distribuidor (0-100): ");
	scanf ("%f", &percentualDist);
	
	//solicitar percentual dos impostos
	printf ("Entre com o %% de impostos (0-100): ");
	scanf ("%f", &percentualImp);
	
	//calculando os valores associados ao distribuidor a aos impostos
	dist = (percentualDist/100)*custoFabrica;
	imp = (percentualImp/100)*custoFabrica;
	
	//custo do consumidor = CF + PDx CF + PI x CF
	custoCons = custoFabrica + dist + imp;
	
	//Exibir o valor do custo do consumidor
	printf ("\nCusto ao consumidor = R$ %.2f\n", custoCons);
}
