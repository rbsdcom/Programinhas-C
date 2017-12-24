	#include <stdio.h>
	#include <stdlib.h> 
	
	//funcao que desenha a tabela 
	void desenha_tabela(char matriz[3][3])
	{
		system("cls");
		printf("\t %c | %c | %c \n", matriz[0][0], matriz[0][1], matriz[0][2]);
		printf("\t-----------\n");
		printf("\t %c | %c | %c \n", matriz[1][0], matriz[1][1], matriz[1][2]);
		printf("\t-----------\n");
		printf("\t %c | %c | %c \n", matriz[2][0], matriz[2][1], matriz[2][2]);
	
	}
	
	int main()
	{
		char casas[3][3];
		char jogador1[20], jogador2[20];	
		int conta_jogada,i , j, jogada=0, linha, coluna, contaX=0, contaO=0, empate=0;
 		char resp;
		
		//insere nome dos jogadores no jogo
		printf("Nome jogador X: ");
		scanf("%s", jogador1);
		printf("Nome jogador O: ");
		scanf("%s", jogador2);
			
	do{
		conta_jogada=1;
		
		//limpa a matriz
		for(i=0; i<=2 ;i++)
		{
			for(j=0; j<=2 ;j++)
			{
				casas[i][j]=' ';
			}
		}
	
		do{
			//preenche a matriz
			desenha_tabela(casas);
			//mostra a vez de cada jogador
			if(jogada%2==0){
				printf("\nSua vez 'X' %s: \n\n", jogador1);
			}else
			{
				printf("\nSua vez 'O' %s: \n\n", jogador2);
			}
			
			//insere os dados na matriz
			printf("Digite a linha: ");
			scanf("%d", &linha);
			printf("Digite a coluna: ");
			scanf("%d", &coluna);
		
			//verifica jogadas invalidas
			if(linha<1 || coluna<1 || linha>3 || coluna>3){
				linha = 0;
				coluna = 0;
			}
			//verifica se casa esta ocupada
			else if(casas[linha-1][coluna-1] !=' '){
				linha = 0;
				coluna = 0;
			}
			else{
					   	if(jogada%2==0){
					   	casas[linha-1][coluna-1]='X';
				   	   	}
					   	else{
						casas[linha-1][coluna-1]='O';
				   	   	}
				jogada++;
				conta_jogada++;
			}
			
			//verifica as condições possiveis de vitoria do Xis
			if(casas[0][0]=='X' && casas[0][1]=='X' && casas[0][2]=='X'){conta_jogada=11;}
			if(casas[1][0]=='X' && casas[1][1]=='X' && casas[1][2]=='X'){conta_jogada=11;}
			if(casas[2][0]=='X' && casas[2][1]=='X' && casas[2][2]=='X'){conta_jogada=11;}
			if(casas[0][0]=='X' && casas[1][0]=='X' && casas[2][0]=='X'){conta_jogada=11;}
			if(casas[0][1]=='X' && casas[1][1]=='X' && casas[2][1]=='X'){conta_jogada=11;}
			if(casas[0][2]=='X' && casas[1][2]=='X' && casas[2][2]=='X'){conta_jogada=11;}
			if(casas[0][0]=='X' && casas[1][1]=='X' && casas[2][2]=='X'){conta_jogada=11;}
			if(casas[0][2]=='X' && casas[1][1]=='X' && casas[2][0]=='X'){conta_jogada=11;}	
		
			//verifica as condições possiveis de vitoria do circulo
			if(casas[0][0]=='O' && casas[0][1]=='O' && casas[0][2]=='O'){conta_jogada=12;}
			if(casas[1][0]=='O' && casas[1][1]=='O' && casas[1][2]=='O'){conta_jogada=12;}
			if(casas[2][0]=='O' && casas[2][1]=='O' && casas[2][2]=='O'){conta_jogada=12;}
			if(casas[0][0]=='O' && casas[1][0]=='O' && casas[2][0]=='O'){conta_jogada=12;}
			if(casas[0][1]=='O' && casas[1][1]=='O' && casas[2][1]=='O'){conta_jogada=12;}
			if(casas[0][2]=='O' && casas[1][2]=='O' && casas[2][2]=='O'){conta_jogada=12;}
			if(casas[0][0]=='O' && casas[1][1]=='O' && casas[2][2]=='O'){conta_jogada=12;}
			if(casas[0][2]=='O' && casas[1][1]=='O' && casas[2][0]=='O'){conta_jogada=12;}
				
		}while(conta_jogada<=9);
	
		desenha_tabela(casas);
		//se contador da jogada for igual a 10, o jogo empata
		if(conta_jogada==10){
			printf("\n jogo empatado \n");
			empate++;
		}
		
		/* se alguma das condiçoes que recebe X forem atendidas, contador recebe 
		11, e nessa parte do codigo atribui o jogador1 como ganhador e incrementa 
		o contaX para apresentar o placar ao final*/  
		if(conta_jogada==11){
			printf("\n*** %s ganhou - 'X' ***\n", jogador1);
			contaX++;
		}
		
		/* se alguma das condiçoes que recebe O forem atendidas, contador recebe 
		12, e nessa parte do codigo atribui o jogador1 como ganhador e incrementa 
		o contaX para apresentar o placar ao final*/
		if(conta_jogada==12){
				printf("\n*** %s ganhou - 'O' ***\n", jogador2);
				contaO++;
		}
		
		//Apresenta o placar do jogo   	 
		printf("\nPlacar: \n"
			    "jogador %s: %d\n"
				"jogador %s: %d\n"
				"Velha: 	 %d\n\n",jogador1,contaX, jogador2, contaO, empate); 
				
		printf("Jogar novamente? [S-N]\n");
		scanf("%s", &resp);
		
	}while(resp=='s'|| resp=='S');
		
	
	return 0;
	}