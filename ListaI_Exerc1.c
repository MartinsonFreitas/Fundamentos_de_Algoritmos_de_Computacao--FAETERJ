/*Lista I - Exerc�cio 1

QUEST�O 01: Dados dois n�meros inteiros A e B, exibir todos os valores pares existentes no intervalo definido por A e B.  

*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, a, b;
	
	//Leitura do valor de A	
	printf ("Entre com o primeiro valor do Intervalo: ");
	scanf ("%d", &a);
	
	//Leitura do valor de B	
	printf ("Entre com o segundo valor do Intervalo: ");
	scanf ("%d", &b);
	
	//exibindo os n�meros pares do intervalo A - B
	
	// Se os numeros forem iguais... 
	// Ao colocar essa condi��o no final, mesmo que os n�meros fossem diferentes a mensagem era impressa!
	if(a==b){
			printf ("Numeros iguais... Tente novamente!");
			}
			
	// Se...
	if(a<b){
		for (i=a;i<=b;i++)
		{
			if (i%2==0)
			{
				printf ("%d ", i);
			}
		}
	} 
	
	// ou... Tentei colocar o ELSE e o programa imprime o �ltimo n�mero		
	if(b<a){
		for (i=b;i<=a;i++)
		{
			if (i%2==0)
			{
				printf ("%d ", i);
			}
		}		
	} 

// Come�ando devagar... Pra n�o atrapalhar!
// Mas quando coloco o ELSE na segunda parte, o programa imprime o �ltimo n�mero
// Quando coloco a condi��o de < isso n�o acontece...
// Por que?
// Tentei fazer com outra estrutura e a mensagem final sempre aparecia... 
// Achei estranho e fiz da maneira mais simples poss�vel!

}	

