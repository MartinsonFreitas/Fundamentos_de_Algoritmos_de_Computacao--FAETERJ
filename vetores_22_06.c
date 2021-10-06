/*
	Desenvolver uma função que, dado um vetor com tam valores inteiros, 
	determine o maior e o menor dentre eles.
*/

#include <stdio.h>
#define TAM 2

void funcao (int vetor[], int *maior, int *menor)
{ 
	// declarando variaveis
    int i;
	
	// Percorrendo os índices do vetor
    for(i=0; i<TAM; i++) 
    {
    	scanf("%d", vetor[i]);
    	if (vetor[i] > *maior) {
    		*maior = vetor[i];
		}
//        printf("vetor[%d] == %d\n", i, vetor[i]);  
    }
}
void main()
{
	// declarando variaveis
    int vetor[TAM], maior, menor, i, j;
    
    //Preenchendo vetor com entradas do teclado
    for (i=0;i<TAM;i++) {
    	printf("vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
		
	//Exibindo vetor preenchido
	for (j=0;j<TAM;j++) {
    	printf("%d ", vetor[j]);
	}
    
    /*
	
		vetor[2]	8	5
		índices		0	1
	
	*/
	
	//scanf("%d", &variavel)
//   	funcao (vetor, &maior, &menor);
}
