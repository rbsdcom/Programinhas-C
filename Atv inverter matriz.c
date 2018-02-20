#include<stdio.h>
/*
	Autor: Rogerio Batista dos Santos
	   	   Estrutura de Dados
	   	   trocar linha pela coluna
	   	   
*/
int main(int argc, char const *argv[])
{
	int i=1, linha, coluna, matriz[2][2];

	for (linha = 0; linha <2 ; linha++)
	{	for (coluna = 0; coluna <2; coluna++)
			{printf("Insira %d valor: ",i++);
			 scanf("%d", &matriz[linha][coluna]);
			}
	}
	
	//imprime matriz
	printf("\n*** Matriz ***\n ");
	for ( linha=0; linha<2; linha++ )
	{  	for ( coluna=0; coluna<2; coluna++ )
			 printf ("%d\t", matriz[ linha ][ coluna ]);
	   	   		   	   	
		printf("\n");
	}
	
	//inverte linha pela coluna	
	printf("\n*** linha - coluna ***\n ");
	for (linha = 0; linha <2 ; linha++)
	{	for(coluna=0; coluna<2;coluna++)
			printf("%d\t", matriz[coluna][linha]);
	   			   		
	 	printf("\n");
	}
	
}
