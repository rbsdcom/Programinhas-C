/*
	O programa a seguir permite ao usuario cadastrar pessoas com nome, endereço e telefone.
	O programa tambem lista somente os nomes ordenados em ordem alfabetica.
	Existe a opção de listar todos os contatos com todas as informações tambem em ordem alfabetica.
*/
	
	
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	
	struct cadastro
	{
	  char nome[40];
	  char endereco[40];
	  int  telefone[40];
	};
	
	main ()
	{
	 struct cadastro c[50];
	 int opcao,m,b,d,sair,i, j,n , temp[50];
	 char pesquisa[40],x[40], troca[50],cont=0;
	 sair = 0;
	 i = 0;
	
	 do {
	 printf ("Escolha uma opcao abaixo.\n");
	 printf ("1. Cadastrar novo contato\n");
	 printf ("2. Listar nomes ordenados\n");
	 printf ("3. Listar todos os contatos\n");
	 printf ("4. sair\n");
	 scanf ("%d", &opcao);
	 system ("cls");
	 
	 if (opcao==1)
	 {
	              i=i+1;
	              printf ("Informe o nome da pessoa: ");
	              fflush (stdin);fgets (c[i].nome,40,stdin);
	              printf ("Informe o seu endereco: ");
	              fflush (stdin);fgets (c[i].endereco,40,stdin);
	              printf ("Informe o seu telefone: ");
	              fflush (stdin);fgets (c[i].telefone,40,stdin);
	              system ("cls");
	              cont++;
	              
	 }
	 
	 if (opcao==2)
	 {
	 	for( i = 0; i < cont; i++ ) {
	        for(  j = i; j > 0; j-- ) {
	            if( strcoll(c[j].nome, c[j-1].nome) < 0){
	              strcpy(temp,c[j].nome);
	              strcpy(c[j].nome,c[j-1].nome);
	              strcpy(c[j-1].nome,temp);}
	        }
	    }
		
		for (n=1;n<=cont;n++)
	    {
	     printf ("Nome: %s\n", c[n].nome);
	    }
	 	
	    printf("\n");
     }
	 
	 if (opcao==3)
	 {
	      printf("\n");
	       for (m=1	;m<=cont;m++)
	  			 {		
	                printf ("Nome: %s", &c[m].nome);
	                printf ("Endereco: %s", &c[m].endereco);
	                printf ("Telefone fixo: %s", &c[m].telefone);
	                printf("\n");
	             }
		  printf("\n");
	
	 }
	 if (opcao==4)
	 {
	    sair = 1;
	 }
	 } while (sair == 0);
	 
	}         