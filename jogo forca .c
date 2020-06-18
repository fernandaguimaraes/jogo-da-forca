#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>
#include<string.h>
//-----------------------------------------------------------
void inicio()
{
	printf("\n\n|*************************************|");
	printf("\n\n|***SEJA BEM VINDO AO JOGO DA FORCA***|");
	printf("\n\n|*************************************|\n");	
}

//-----------------------------------------------------------

bool temletra(char letra, char vetor[])
{
	int i;
	bool existe;
	printf("%d",strlen(vetor));
	for(i=0; i<strlen(vetor); i++)
	{
		printf("\n%c",vetor[i]);
		
		if (letra == vetor[i])
		{
			existe = true;
			printf("A letra existe");
		}
		else
		{
			existe = false;
		}
		
	}
	
	return existe;
}

//-----------------------------------------------------------

int main()
{
	inicio();
	char palavra1[6] = {'f','u','l','a','n','o'};
	char palavra2[7] = {'a','b','a','c','a','t','e'};
	char palavra3[6] = {'c','o','e','l','h','o'};
	//char palavra4[8] = {'s','a','n','d','a','l','i','a'};
	char palavra4[4] = {'a','z','u','l'};
	char palavra5[5] = {'p','r','a','i','a'};
	int opcao;
	char letra;
	
	printf ("\nEscolha uma das cinco palavras disponiveis digitando um numero de 1 a 5:");
	scanf ("%d",&opcao);
	
	printf ("Digite uma letra:");
	scanf("%c",&letra);
	getchar();
	
switch(opcao)
{
	case 1:
		bool tem= temletra(letra,palavra1);	
		if(tem){
			//print da letra no risquinho
		}
		else{
			//tentativa++
		}
		break;	
		
	case 2:
		temletra(letra,palavra2);	
		break;	
		
	case 3:
		temletra(letra,palavra3);	
		break;	
		
	case 4:
		temletra(letra,palavra4);	
		break;	
		
	case 5:
		temletra(letra,palavra5);	
		break;	
		
	default : 
	printf ("A opção não é valida!");
	break;	
}


	
	
}



