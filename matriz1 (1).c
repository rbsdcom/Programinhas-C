#include<stdio.h>

int main(int argc, char const *argv[])
{
	int i, j, matriz[3][3], y;


	for (i = 0; i <3 ; ++i)
		{for (j = 0; j <3; ++j)
		{
			printf("Insira um valor: ");
			scanf("%d", &matriz[i][j]);
			
		}
		/* code */
	}

	for ( i=0; i<3; i++ )
    {
	for ( j=0; j<3; j++ )
           printf ("\nElemento[%d][%d] = %d", i, j,matriz[ i ][ j ]);
    
    printf("\n");
	}
	/* code */
	return 0;
}