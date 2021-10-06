#include<stdio.h>

float calcularMedia (float Av1, float Av2)
{
	float m = (Av1 + Av2)/2;
	
	return m;
	
	//ou --> return (Av1 + Av2)/2;
	
}

void main()
{
	
	int i;
	
	float  av1, av2, media;
	
	for (i=1; i<=30; i++)
			{
			printf("Entre com as notas: ");
			scanf("%f %f", &av1, &av2);
			
			media = calcularMedia(av1, av2);
			printf("Media = %.2f", media);
		}

	}
	

