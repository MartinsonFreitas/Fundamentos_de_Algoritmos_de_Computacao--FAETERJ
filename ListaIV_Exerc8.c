/*Lista IV - Exercício 8

QUESTÃO 08: Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos arrecadados 
com a aplicação de multas de trânsito. O programa deve ler as seguintes informações para cada motorista:  
- O número da carteira de motorista; 
- Número de multas; 
- Valor de cada uma das multas.  

Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O programa também deverá apresentar o número da carteira do motorista que 
obteve o maior número de multas.  
 **/

#include <stdio.h>

void main ()
{
	//declaração de variáveis
	int carteira, quant, i, maiorNumMultas = 0, maiorCarteira;
	float valor, divida, arrecadacao = 0;
	char resp;
	

	do
	{
		//Leitura dos dados de cada motorista
		printf ("Carteira de motorista: ");
		scanf ("%d", &carteira);
		
		printf ("Quantidade de multas: ");
		scanf ("%d", &quant);
		
		//verificando o maior número de multas
		if (quant > maiorNumMultas)
		{
			maiorNumMultas = quant;
			maiorCarteira = carteira;
		}
		
		divida = 0;
		
		for (i=1; i<=quant; i++)
		{
			printf ("Entre com o valor da %da multa: ", i);
			scanf ("%f", &valor);
			
			divida += valor;
		}
		
		//calculando o total a ser arrecadado pelo orgao regulador
		arrecadacao += divida; 
		
		//Exibindo a divida do motorista
		printf ("Divida do motorista de carteira %d: R$ %.2f\n", carteira, divida);
		
		//verificando se o usuário deseja continuar	(com validação)	
		do
		{
			printf ("Deseja continuar (S/N)?");
			fflush (stdin);
			scanf ("%c", &resp);
			resp = toupper (resp);
			
			if ((resp != 'S') && (resp != 'N'))
			{
				printf ("Opcao invalida! Tente novamente.\n");
			}
			
		} while ((resp != 'S') && (resp != 'N'));
	}
	while (resp == 'S');
	
	//exibindo o total arrecadado
	printf ("Total arrecadado pelo orgao regulador: R$ %.2f\n", arrecadacao);
	
	//exibindo a carteira do motorista com maior numero de multas
	printf ("O motorista de carteira %d apresentou o maior numero de multas (%d).\n", maiorCarteira, maiorNumMultas);
	
}
