void lista();

void lista()
{
	printf("********************************************************************************\n");
	printf("**------------------------------ ESTACIONAMENTO ------------------------------**\n");
	printf("********************************************************************************\n");
	
	op = 1; // cria uma variavel char com nome op
	int i;  // cria uma variavel int com nome i
	for (i=0;i<=SIZE;i++) // repete o looping enquanto i for menor que SIZE, i � incrementado ao final de cada loop
	{
		
		if (strlen(placaVeiculo[i]) > 0) // se a contagem dos caracteres da placa do veiculo for maior que zero
		{
		
			printf("\n\nModelo : %s   Placa : %s   Data : %s   Hora : %s", modeloVeiculo[i], placaVeiculo[i], dataRegistro[i], horaRegistro[i]); // imprima modelo, placa, data e hora
		    printf("\n------------------------------------------------------------------------------");
	    }
	    else   // caso contr�rio
		{
			int looplista; // cria uma variavel int com nome de looplista
			looplista = 0; // declara o valor 0 para a variavel looplista
			while(looplista == 1); // enquanto looplista for igual a 1 fa�a
			{
				printf("\n\n0.Voltar       1.pesquisar    : ");
				scanf("%d",&op); // o usuario declara um valor para op manualmente
				if (op == 0) // se op igual a zero fa�a
				{
					--looplista; // decrementa looplista
					break; 
				}
				else if(op == 1) // se ip igual a um fa�a
				{
					system("cls"); // apaga a tela DOS
					pesquisa(); // utiliza a fun��o pesquisa 
					
				}
				else // caso contrario fa�a
				{
					printf("carectere invalido!"); // imprime na tela o informado entre " "
				}
	        }
	    }
	    
	 
    }
}

