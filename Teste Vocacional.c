#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
struct Cadastro
{
	char Nome[40];
	char Endereco[40];
	int  CPF[40];
	int  DtNascimento[8];

};

int a, b, c, d;
int al, bl, cl, dl;
int contador()
{
	char letra;

	scanf("%s", &letra);
	switch ( letra )
	{
	case 'a' :
		a++;
		al++;
		break;

	case 'b' :
		b++;
		bl++;
		break;

	case 'c' :
		c++;
		cl++;
		break;

	case 'd' :
		d++;
		dl++;
		break;

	default :
		printf("\nAlternativa invalida!\n");
		printf("Digite A B C ou D\n\n");
		return contador();;
	}


}

int	main ()
{
	setlocale(LC_ALL, "Portuguese");
	struct Cadastro Cad[50];
	int contador();

	char conta = 0;
	char profissao[10][30];
	char grupo[10][30];
	int Sair = 0;
	int i = 0;
	int soma = 0;
	int QtdTP = 0;
	int QtdRH = 0;
	int QtdCT = 0;
	int QtdOP = 0, l, h = 0;
	int Opcao, VarRel;
	int qtd_entrevistados = 0;
	int zeta;
	int linguagem[10][30];





	do
	{
		printf ("Escolha uma opcao abaixo: \n");
		printf ("1. Cadastrar novo entrevistado\n");
		printf ("2. Lista repostas todos entrevistados\n");
		printf ("3. Lista relat�rio de entrevistados\n");
		printf ("4. sair\n");
		scanf ("%d", &Opcao);
		system ("cls");

		if (Opcao == 1)
		{
			i = i + 1;
			qtd_entrevistados = qtd_entrevistados + 1;

			printf ("Informe nome da pessoa: ");
			fflush (stdin);
			fgets (Cad[i].Nome, 40, stdin);
			printf ("Informe o seu endereco: ");
			fflush (stdin);
			fgets (Cad[i].Endereco, 40, stdin);
			printf ("Informe Dta Nascimento: ");
			fflush (stdin);
			fgets (Cad[i].DtNascimento, 40, stdin);
			printf ("Informe o seu CPF     :  ");
			fflush (stdin);
			fgets (Cad[i].CPF, 40, stdin);
			system ("cls");
			conta++;


			printf ("\n1 - Na escola, voce prefere assuntos ligados �: \n");
			printf ("a) Arte, esportes e atividades extracurriculares \n");
			printf ("b) Biologia e genetica \n");
			printf ("c) Ciencias humanas, idiomas \n");
			printf ("d) Ciencias exatas \n\n");
			contador();

			printf ("\n2-Voc� prefere levar sua vida: \n");
			printf ("a) Com pouca rotina e poucas regras \n");
			printf ("b) Com regras definidas e disciplina \n");
			printf ("c) Interagindo com todo tipo de pessoa \n");
			printf ("d) Com muita autonomia: �na sua�\n\n");
			contador();

			printf ("\n3-Voc� se descreveria como uma pessoa:: \n");
			printf ("a) Impulsiva e um tanto aventureira \n");
			printf ("b) Cautelosa e respons�vel \n");
			printf ("c) Entusiasmada e muito amiga \n");
			printf ("d) Calma e diferente da maioria\n\n");
			contador();

			printf ("\n4-Voc� se considera uma pessoa: \n");
			printf ("a) Pr�tica e h�bil para improvisar \n");
			printf ("b) Batalhadora, que sabe o que quer \n");
			printf ("c) Preocupada com quest�es humanas \n");
			printf ("d) Capacitada para criar e inventar\n\n");
			contador();

			printf ("\n5-De quais caracter�sticas suas voc� sente orgulho: \n");
			printf ("a) Aud�cia e facilidade para lidar com o inesperado \n");
			printf ("b) Senso de dever e capacidade de dar exemplo \n");
			printf ("c) Idealismo e disposi��o para compreender os outros \n");
			printf ("d) Engenhosidade e rapidez mental\n\n");
			contador();

			printf ("\n6-Costuma confiar mais em: \n");
			printf ("a) Percep��o imediata \n");
			printf ("b) Costumes e tradi��es \n");
			printf ("c) Intui��o \n");
			printf ("d) Raz�o e l�gica\n\n");
			contador();

			printf ("\n7-Quase sempre, voc� gosta de: \n");
			printf ("a) Causar impacto: os �holofotes� o atraem \n");
			printf ("b) Ser visto como membro valioso de um grupo \n");
			printf ("c) Sonhar em transformar o mundo \n");
			printf ("d) Desvendar um enigma ou inventar algo �til\n\n");
			contador();

			printf ("\n8-A vida � mais interessante quando voc� tem: \n");
			printf ("a) Desafios, situa��es cambiantes \n");
			printf ("b) Seguran�a, emprego garantido, integra��o social \n");
			printf ("c) Possibilidade de fazer algo para mudar o mundo \n");
			printf ("d) Possibilidade de ir al�m do que j� � conhecido\n\n");
			contador();

			printf ("\n9-Voc� gostaria de ser: \n");
			printf ("a) Um craque na profiss�o que escolher \n");
			printf ("b) Um executivo bem-sucedido \n");
			printf ("c) Um profissional de prest�gio \n");
			printf ("d) Um especialista ou um cientista\n\n");
			contador();

			printf ("\n10-Voc� � muito bom lidando com: \n");
			printf ("a) Ferramentas, instrumentos e equipamentos \n");
			printf ("b) Controle do tempo, comando e execu��o \n");
			printf ("c) Pessoas de todos os n�veis sociais e culturais \n");
			printf ("d) Sistemas e constru��o (material ou mental)\n\n");
			contador();

			printf ("\n11-Antes de agir, voc� analisa: \n");
			printf ("a) As vantagens imediatas \n");
			printf ("b) As experi�ncias j� vividas \n");
			printf ("c) As possibilidades futuras \n");
			printf ("d) As condi��es e consequ�ncias\n\n");
			contador();

			printf ("\n12-Gosta quando as pessoas: \n");
			printf ("a) O surpreendem com um presente \n");
			printf ("b) Expressam gratid�o por algo que fez \n");
			printf ("c) Reconhecem sua personalidade singular \n");
			printf ("d) Reconhecem sua intelig�ncia\n\n");
			contador();

			printf ("\n13-Voc� costuma abra�ar um novo projeto: \n");
			printf ("a) Com a cara e a coragem \n");
			printf ("b) Guiado pela experi�ncia \n");
			printf ("c) Confiando na intui��o e na criatividade \n");
			printf ("d) Depois de verificar todas as vari�veis\n\n");
			contador();

			printf ("\n14-Geralmente, voc� prefere agir: \n");
			printf ("a) No calor do momento \n");
			printf ("b) Com seguran�a e conforme o costume \n");
			printf ("c) Quando est� inspirado \n");
			printf ("d) Quando um problema o desafia\n\n");
			contador();

			printf ("\n15-Voc� fica motivado quando: \n");
			printf ("a) Tem a oportunidade de superar obst�culos \n");
			printf ("b) Experimenta estabilidade na vida profissional,"
					"ou seja, sabe em que terreno est� pisando \n");
			printf ("c) Harmonia e inspira��o guiam a atividade \n");
			printf ("d) H� liberdade para projetar o futuro\n\n");
			contador();

			printf ("\n16-Em atividades em grupo, voc� prefere: \n");
			printf ("a) As desafiadoras, que exigem a��o r�pida \n");
			printf ("b) Administrar os recursos dispon�veis \n");
			printf ("c) Motivar as pessoas para darem o melhor de si \n");
			printf ("d) Descartar logo o que n�o funciona\n\n");
			contador();

			printf ("\n17-Liderar � uma atividade que gosta de exercer: \n");
			printf ("a) Por pouco tempo e dependendo da situa��o \n");
			printf ("b) Quando pode comandar do come�o ao fim \n");
			printf ("c) Quando � preciso identificar e reunir talentos \n");
			printf ("d) Quando o racioc�nio estrat�gico � necess�rio\n\n");
			contador();

			printf ("\n18-Em uma escola, voc� gostaria de ser: \n");
			printf ("a) Professor de educa��o f�sica \n");
			printf ("b) Diretor \n");
			printf ("c) Professor de literatura \n");
			printf ("d) Professor de matem�tica ou f�sica\n\n");
			contador();

			printf ("\n19-� um elogio quando se referem a voc� como: \n");
			printf ("a) Corajoso, otimista e divertido \n");
			printf ("b) Cauteloso, respons�vel e aplicado \n");
			printf ("c) Harmonizador, �ntegro e s�bio \n");
			printf ("d) Uma mente brilhante\n\n");
			contador();

			printf ("\n20-Frase que t�m a ver com voc�: \n");
			printf ("a) �Deixo a vida me levar...� \n");
			printf ("b) �Manda quem pode; obedece quem tem ju�zo� \n");
			printf ("c) �Para seu pr�prio interesse, seja verdadeiro� \n");
			printf ("d) �Penso, logo existo�\n\n");
			contador();

			if(a > b && a > c && a > d)
			{
				printf("*******************************************************************************");
				printf("\n*					   			              *");
				printf("\n* 		 Escolha e escreva uma das op��oes abaixo:                    *\n");
				printf("*					      				      *\n");
				printf("*					      				      *\n");
				printf("*******************************************************************************\n");
				printf("*					                                      *\n");
				printf("1 Inst. cirurgico\t"   "2 Anestesista \t"   "3 Artista pl�stico\t"  "4 Ator        *\n");
				printf("5 Dermatologista\t"    "6 Estilista\t"      "7 Fotografo\t\t"       "8 Guia turismo*\n");
				printf("9 Personal trainer\t"  "10 Personal \t"     "11 Relac. publicas\t"  "12 Piloto     *\n");
				printf("13 Cineasta\t\t"	   "14 Cirurgiao\t"     "15 Core�grafo\t\t"	    "16 Dan�arino  *\n");
				printf("17 Jornalista\t\t" 	   "18 Paisagista\t"    "19 Publicit�rio\t\t"   "20 roteirista *\n");
				printf("21 Inst. de voo\t\t"   "22 Esportista\t"    "23 M�dico cl�nico\t"   "24 Ator       *\n");
				printf("25 Personal stylist\t" "26 M�sico\t"        "27 Chef de Cozinha                    *\n");
				printf("*					                                      *\n");
				printf("*******************************************************************************\n\n");

				fflush (stdin);
				fgets (profissao[conta], 40, stdin);
				QtdTP++;
				printf("\n");
				strcpy( grupo[conta], "Grupo Trato com Pessoal");

			}


			if(b > a && b > c && b > d)
			{

				printf("****************************************************");
				printf("\n*					     	   *");
				printf("\n*  Escolha e escreva uma das op��oes abaixo:  	   *\n");
				printf("*					      	   *\n");
				printf("*					      	   *\n");
				printf("****************************************************\n");
				printf("*					      	   *\n");
				printf("* 1 Administrador de empresas\t"   "2  Advogado 	   *\n");
				printf("* 3 Engenheiro mec�nico/qu�mico\t" "4  Juiz de direito *\n");
				printf("* 5 Pator/padre/rabino\t\t"  	   "6  Delegado        *\n");
				printf("* 7 Assistente social\t\t"     	   "8  Bibliotec�rio   *\n");
				printf("* 9 Promotor p�blico\t\t"		   "10 Policial 	   *");
				printf("\n*					     	   *");
				printf("\n****************************************************\n\n");
				fflush (stdin);
				fgets (profissao[conta], 40, stdin);

				QtdRH++;
				printf("\n");
				strcpy( grupo[conta], "Grupo Rrela��es Humanas");

			}


			if(c > b && c > a && c > d)
			{
				printf("***********************************************");
				printf("\n*					      *");
				printf("\n*  Escolha e escreva uma das op��oes abaixo:  *\n");
				printf("*					      *\n");
				printf("*					      *\n");
				printf("***********************************************\n");
				printf("*					      *\n");
				printf("* 1  Artista pl�stico\t\t"    "2  Educador   *\n");
				printf("* 3  Terapeuta ocupacional\t" "4  Escritor   *\n");
				printf("* 5  Jornalista\t\t\t"   	  "6  Dramaturgo *\n");
				printf("* 7  Fil�sofo\t\t\t"      	  "8  Tradutor   *\n");
				printf("* 9  Pedagogo\t\t\t" 		  "10 Soci�logo  *\n");
				printf("* 11 Professor\t\t\t"  		  "12 Psiquiatra *\n");
				printf("* 13 Psic�logo				      *");
				printf("\n*					      *");
				printf("\n***********************************************\n\n");
				fflush (stdin);
				fgets (profissao[conta], 40, stdin);

				printf("\n");
				QtdOP++;
				strcpy( grupo[conta], "Grupo Organiza��o e Planejament");
			}


			if(d > b && d > c && d > a)
			{
				printf("*****************************************************************");
				printf("\n*					     			*");
				printf("\n*  Escolha e escreva uma das op��oes abaixo:  			*\n");
				printf("*					    			*\n");
				printf("*					      			*\n");
				printf("*****************************************************************");
				printf("\n*					     			*\n");
				printf("*1  Analista de sistemas\t"      "2  Militar \t"    "3  Ocean�grafo  *\n");
				printf("*4  Criador de software\t\t"	 "5  Pesquisador\t" "6  Qu�mico	*\n");
				printf("*7  Designer industrial\t\t"     "8  Matem�tico\t"  "9  F�sico	*\n");
				printf("*10 M�sico (regente)\t\t"        "11 Engenheiro\t"  "12 Economista   *\n");
				printf("*13 L�der de uma corpora��o\t"   "14 Urbanista \t"  "15 Zo�logo	*\n" );
				printf("*16 Antrop�logo\t\t\t"  		 "17 Astr�nomo\t"   "18 Arquiteto    *\n");
				printf("*					      			*\n");
				printf("*****************************************************************\n\n");
				fflush (stdin);
				fgets (profissao[conta], 40, stdin);

				printf("\n");
				QtdCT++;
				strcpy( grupo[conta], "Grupo Ci�ncia e Tecnologia ");
			}
			printf("*********************************");
			printf("\n*\t  Gabarito		*\n");
			printf("*			 	*");
			printf("\n*\tLetra: A | B | C | D\t*");
			printf("\n*\tQtde:  %d | %d | %d | %d\t*\n", a, b, c, d);
			printf("*			 	*\n");
			printf("*********************************\n\n");

		}
		int var;
		if(Opcao == 2)
		{
			printf("*********************************");
			printf("\n*  Somat�rio qtde alternativas\t*\n");
			printf("*			 	*");
			printf("\n*\tLetra: A | B | C | D\t*");
			printf("\n*\tQtde:  %d | %d | %d | %d\t*\n", al, bl, cl, dl);
			printf("*			 	*\n");
			printf("*********************************\n\n");

		}


		if (Opcao == 3)
		{
			if(conta==0)
				printf("\n***\tNenhuma entrevista realizada\t***\n\n\n");
			else{
			printf ("\nQuantidade total de intrevistados: %d\n\n", qtd_entrevistados);
			printf ("Grupo trato com pessoal          : %d\n", QtdTP);
			printf ("Grupo rela��es humanas           : %d\n", QtdRH);
			printf ("Grupo ci�ncia e tecnologia       : %d\n", QtdCT);
			printf ("Grupo organiza��o e planejamento : %d\n", QtdOP);
			printf("\n");
			printf("\n");


			for (VarRel = 1	; VarRel <= conta; VarRel++)
			{
				printf("******************************\n*");
				printf ("* Nome     : %s*",  &Cad[VarRel].Nome);
				printf ("* Endereco : %s*",  &Cad[VarRel].Endereco);
				printf ("* CPF      : %s*",  &Cad[VarRel].CPF);
				printf ("* Data de Nascimento   : %s*",   Cad[VarRel].DtNascimento);
				printf ("* Area de conhecimento : %s\n*", grupo[VarRel] );
				printf ("* Profissao escolhida  : %s\n", &profissao[VarRel] );
				printf ("\n\n");

			}
			}

		}


		if (Opcao == 4)
		{
			Sair = 1;
		}

		a = NULL;
		b = NULL;
		c = NULL;
		d = NULL;

	}
	while (Sair == 0);

}
