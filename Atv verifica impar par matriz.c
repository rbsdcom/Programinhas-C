#include<stdio.h>
/*
	Autor: Rogerio Batista dos Santos
	   	   Estrutura de Dados
	   	   
*/
int main(int argc, char const *argv[])
{
	int linha, coluna, matriz[8][5], i=1;

	//insere valor na matriz
	for (linha = 0; linha <8 ; linha++)
	{	for (coluna = 0; coluna <5; coluna++)
		{	printf("Insira %d valor: ", i++);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	//imprime matriz 
	printf("\n******* Matriz *******\n\n");
	for ( linha=0; linha<8; linha++ )
	{  for ( coluna=0; coluna<5; coluna++ )
           printf ("%d \t", matriz[ linha ][ coluna ]);
	
     printf("\n");
	}
	
	//verifica se o valor da matriz é par e imprime 0 se for impar imprime 1 
	printf("\n**** 0 Equivale a numeros PARES e 1 Equivale a numeros IMPARES ****\n");
	for(linha=0; linha<8; linha++)
	{	for(coluna=0; coluna<5;coluna++)
		{	if(matriz[linha][coluna]%2==0)	//verifica se valor da matriz é par 
			{ 	matriz[linha][coluna]=1;	//atribui 0 para par
				printf ("%d \t", matriz[ linha ][coluna]);
			}
		    else
			{	matriz[linha][coluna]=0; //atribui 1 para impar caso condição acima nao seja verdadeira
				printf ("%d \t", matriz[ linha ][coluna]);
			}
   	   }
		printf("\n");
	}
	return 0;
}