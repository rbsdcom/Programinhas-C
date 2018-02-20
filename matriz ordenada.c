#include<stdio.h>
/*
	Autor: Rogerio Batista dos Santos
	   	   Estrutura de Dados
	   	   
	   	   criar uma matriz com 9 elementos
	   	   ordenar em diagonal principal e diagonal secindaria
	   	   somar diagonal principal
	   	   somar diagonal primaria 
	   	   mostrar o produto das doagonais
	   	   
*/
int main(int argc, char const *argv[])
{
	int linha, coluna, i=1,  multipl, somap=0, somas=0, somad=0;
	int matriz[3][3], armazenadp[3], armazenads[3]; //vetores armazenam a matriz e cada diagonal

	//insere matriz
	for (linha = 0; linha <3 ; linha++)
	{	for (coluna = 0; coluna <3; coluna++)
		{	printf("Insira %d valor: ",i++);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	//imprime matriz
	printf("\n");
	for ( linha=0; linha<3; linha++ )
	{  for ( coluna=0; coluna<3; coluna++ )
           printf ("%d \t", matriz[ linha ][ coluna ]);
	
     printf("\n");
	}
	
	//ordena e imprime diagonal principal
	printf("\n");
	for (linha = 0; linha < 3; linha++) 
	{   for (coluna = 0; coluna < 3; coluna++) 
		{	if(linha==coluna)
			{	printf("DP %d: %d",linha, matriz[linha][coluna]);
                somap += matriz[linha][coluna];
                armazenadp[coluna]=matriz[linha][coluna];
			}
		}    
	printf("\n");
    }
    
    //ordena e imprime diagonal secundaria
    printf("\n");
    for (linha=0; linha<3;linha++)
	{	for (coluna=0; coluna<3;coluna++)
	  	  {	if (coluna == (3 - 1 - linha ))
				{ printf("DS %d: %d ",linha, matriz[linha][coluna]);
    	 	 	  somas += matriz[linha][coluna];
    	 	 	  armazenads[linha]=matriz[linha][coluna];
				}
 	 	  }
	printf("\n");
	}
	
	//realiza a multiplicação de uma diagonal pela outra e soma ambas.
	coluna=2;
	linha=2;
	for(i=0;i<3;i++)
	{	multipl=armazenadp[coluna]*armazenads[linha];
		somad+=multipl;
	   	coluna--;
		linha--;
	}
	printf("\n");

	//imprime soma de cada diagonal e soma do produto das diagonais 			  	 
	printf("*** Soma Diagonal principal:  %d ***\n", somap);
	printf("*** Soma Diagonal secundari:  %d ***\n", somas);
	printf("*** Soma das duas diagonais:  %d ***\n", somas+somap);
	printf("*** Produto  das  diagonais:  %d ***\n", somad);

}
