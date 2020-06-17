#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>
//-----------------------------------------------------------
void inicio()
{
	printf("\n\n|*************************************|");
	printf("\n\n|***SEJA BEM VINDO AO JOGO DA FORCA***|");
	printf("\n\n|*************************************|");	
}

//-----------------------------------------------------------

int temletra(int opcao, char letra, char vetor[])
{
	
}

//-----------------------------------------------------------

int main()
{
	char palavra1[6] = {'f','u','l','a','n','o'};
	char palavra2[7] = {'a','b','a','c','a','t','e'};
	char palavra3[6] = {'c','o','e','l','h','o'};
	char palavra4[8] = {'s','a','n','d','á','l','i','a'};
	char palavra5[5] = {'p','r','a','i','a'};
	int opcao;
	char letra;
	
	printf ("Escolha uma das cinco palavras disponiveis digitando um numero de 1 a 5:");
	scanf ("%d",&opcao);
	
	printf ("Digite uma letra:");
	scanf("%c",&letra);
	getchar();
	
switch(opcao)
{
	case 1:
		temletra(opcao,letra,palavra1);	
		break;	
		
	case 2:
		temletra(opcao,letra,palavra2);	
		break;	
		
	case 3:
		temletra(opcao,letra,palavra3);	
		break;	
		
	case 4:
		temletra(opcao,letra,palavra4);	
		break;	
		
	case 5:
		temletra(opcao,letra,palavra5);	
		break;	
		
	default : 
	printf ("A opção não é valida!");
	break;	
}


	
	
}



