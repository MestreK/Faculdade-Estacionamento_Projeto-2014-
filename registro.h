#include "globais.h"
void registro();

void registro()
{
	
	
	printf("*********************************************\n");
	printf("**   --------- ESTACIONAMENTO ----------   **\n");
	printf("*********************************************\n");
	do{
		if (vagasDisponiveis == 0){
			printf("\nEstacionamento cheio!\nAguarde a saida de um veiculo\n");
			printf("\nDigite 1 para continuar ou 0 para sair : ");
			scanf("%d",&op);
		}
		else{
			printf("\nDigite o Modelo do Veiculo : ");
			scanf("%s",&modeloVeiculo[linha]);
			printf("\nDigite a placa : ");
			scanf("%s",&placaVeiculo[linha]);
			_strtime(horaRegistro[linha]);
			_strdate(dataRegistro[linha]);
			
						
			
			--vagasDisponiveis;
			system("cls");
			printf("********************************************************\n");
			printf("*            ESTACIONAMENTO UNIP - ENTRADA             *\n");
			printf("********************************************************\n");
			printf("                                                      \n");
			printf(" MODELO: %s                       PLACA: %s                 \n", modeloVeiculo[linha], placaVeiculo[linha]);
			printf("--------------------------------------------------------\n");
			printf(" DATA  : %s                   HORA : %s                 \n", dataRegistro[linha], horaRegistro[linha]);
			printf("                                                      \n");
			printf("********************************************************\n");
			linha+=1;
			printf("\nDigite 1 para continuar ou 0 para sair : ");
			scanf("%d",&op);
	}
		
	}while(op == 1);
}

