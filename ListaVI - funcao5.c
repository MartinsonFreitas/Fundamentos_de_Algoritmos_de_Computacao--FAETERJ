#include<stdio.h>

float determinarMaior (int N)
{
	float maior, numero;
	
	int i;
	
	printf("Entre com um numero: ");
	scanf("%f", &numero);

	maior = numero;
	
	for (i=2; i<=N; i++)
	{

	printf("Entre com um numero: ");
	scanf("%f", &numero);
	
	if (numero > maior)
	{
		maior = numero;
	}
		
	}
	
	return maior;

}

void main()
{
	
	/*int i;
	
	float  av1, av2, media;
	
	
			{
			printf("Entre com as notas: ");
			scanf("%f %f", &av1, &av2);
			
			media = calcularMedia(av1, av2);
			printf("Media = %.2f", media);*/
			
			
		

	}
	

