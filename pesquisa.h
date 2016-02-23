

void pesquisa();

void pesquisa()
{
	
	
	char placaPesquisa[20]; // cria uma variavel pesquisa char para pesquisar a placa
	int i; // cria uma variavel int 
	do{
		system("cls");
	    printf("*********************************************\n");
	    printf("**   --------- ESTACIONAMENTO ----------   **\n");
	    printf("*********************************************\n");
		printf("\nDigite a placa a ser pesquisada : ");
		scanf("%s", placaPesquisa ); // Adiciona o valor da placa
		for(i=0;i<SIZE;i++) // looping que irá finalizar quando i for maior que SIZE declarado em Global(a cada loop i é incrementado)
		    {
		    	if(strcmp(placaVeiculo[i], placaPesquisa) == 0) // compara a placa do veiculo com a digitada em pesquisa
			{
								
				printf("\nModelo : %s \nPlaca : %s \nData : %s \nHora : %s", modeloVeiculo[i], placaVeiculo[i], dataRegistro[i], horaRegistro[i]);  // Se placa do Veiculo for igual o da pesquisa mostra o modelo, placa data de registro e hora do registro.
			}  
		    
			}
		op = 0;
		}while(op == 1); // será repetido este looping enquanto op for igual a 1
		
}

