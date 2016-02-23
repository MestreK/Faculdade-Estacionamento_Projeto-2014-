#include<stdio.h>
#include<time.h>
#include<string.h>
#include <stdlib.h>
#include "registro.h"
#include "pesquisa.h"
#include "saidaVeiculo.h"
#include "lista.h"
#include "configurar.h"
#include "fecharCaixa.h"
#include "sobre.h"


int main(void)
{
   
   system("color 0f");

	do{
		perm = 0;
		//-----------------------------MENU-------------------------------------------------------------
		system("cls");
	    printf("*********************************************\n");
	    printf("**   --------- ESTACIONAMENTO ----------   **\n");
	    printf("*********************************************\n");
		printf("_____________________________________________\n");
		printf("**                   -                     **\n");
		printf("**   1.Entrada       -       2.Saida       **                PIM IV\n");
		printf("**                   -                     **          *****************\n");
		printf("**-----------------------------------------**           UNIP INTERATIVA\n");
		printf("**                   -                     **          *****************\n");
		printf("**   3.Listar        -   4.Fechar Caixa    **\n");
		printf("**                   -                     **\n");
		printf("**-----------------------------------------**\n");
		printf("**                   -                     **\n");
		printf("**  5.Configuracoes  -       6.Sobre       **\n");
		printf("**                   -                     **\n");
		printf("**-----------------------------------------**\n");
		printf("**                 7.Sair                  **         %d Vagas Disponiveis\n",vagasDisponiveis);
		printf("**_________________________________________**    *****************************\n");
		
		printf("\n\n Digite a Opcao Desejada : ");
		scanf("%s", &perm);
		//-----------------------------MENU-------------------------------------------------------------
		
		//condicional switch para utilizar as funções de acordo com cada opção do menu
		switch(perm){
			case('1'):
				system("cls"); // Apaga todas informações da tela
				registro();  // Função que cadastra veiculos
				break;
			case('2'):
				system("cls"); //Apaga todas informações da tela
				saidaVeiculo(); // Função que registra a saida de um veiculo
				break;
			case('3'):
				system("cls"); //Apaga todas informações da tela
				lista();  // Função que lista todos veiculos cadastrados
				break;
			case('4'):
				system("cls");
				fecharCaixa();
				break;
			case('5'):
				system("cls");
				configurar();
				break;
			case('6'):
				sobre();
				break;
			case('7'):
				system("cls"); 
				perm = '7';
				break;
			default:
				system("cls");
				printf("Caractere invalido.");
				break;
				
			
				
		}
    }while(perm != '7');  
}
