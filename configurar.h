
void configurar();
void configurar()
{
	char operacao; // cria uma variavel char com nome operacao
	char opcao; // cria uma variavel char com nome de opcao
	int a = 4; // cria uma variavel int e o declara com valor 4
	do{
   		//-----------------------------MENU-------------------------------------------------------------
		system("cls");
	    printf("*********************************************\n");
	    printf("**   --------- CONFIGURACOES  ----------   **\n");
	    printf("*********************************************\n");
		printf("_____________________________________________\n");
		printf("**                   -                     **\n");
		printf("**   1-ENTRE COM VALOR DA PRIMEIRA HORA    **                PIM IV\n");
		printf("**                   -                     **          *****************\n");
		printf("**-----------------------------------------**           UNIP INTERATIVA\n");
		printf("**                   -                     **          *****************\n");
		printf("**   2-ENTRE COM VALOR DA SEGUNDA HORA     **\n");
		printf("**                   -                     **\n");
		printf("**-----------------------------------------**\n");
		printf("**                   -                     **\n");
		printf("**   3-CORES DISPONIVEIS                   **\n");
		printf("**                   -                     **\n");
		printf("**-----------------------------------------**\n");
		printf("**                   -                     **\n");
		printf("**   4-SAIR DAS CONFIGURACOES              **\n");
		printf("**                   -                     **\n");
		printf("**_________________________________________**\n");
			
		
		printf("\n\n Digite a Opcao Desejada : ");
		scanf("%s", &operacao); // usuario insere o valor da variavel operacao manualmente
		
				
		switch(operacao){ // condicional switch iniciada
			case('1'): // caso operacao seja igual a '1'
				system("cls"); // Apaga todas informações da tela
				printf ("Entre com Valor Primeira hora: "); 
                scanf  ("%d", &valorHora); // usuário insere o valor da variavel valorHora manualmente que corresponde a primeira hora.
     			break;
			case('2'): // caso operacao seja igual a '2'
				system("cls"); //Apaga todas informações da tela
				printf ("Entre com Valor das demais hora: "); 
                scanf  ("%d", &valorHora1); // usuario insere o valor da variavel valorHora1 manuralmente que corresponde as demais horas.
 				break;
 			case('4'): // caso operacao seja igual a '4'
 				a=1; // declara valor um a variavel a
 				break;
			case('3'):
				system("cls"); //Apaga todas informações da tela
				printf("*********************************************\n");
				printf("**   --------- CONFIGURACOES  ----------   **\n");
				printf("*********************************************\n");
				printf("_____________________________________________\n");
				printf("**                   -                     **\n");
				printf("**   1-Fundo Preto / Fonte Branca          **                PIM IV\n");
				printf("**                   -                     **          *****************\n");
				printf("**-----------------------------------------**           UNIP INTERATIVA\n");
				printf("**                   -                     **          *****************\n");
				printf("**   2-Fundo Azul Marinho / Fonte Preta    **\n");
				printf("**                   -                     **\n");
				printf("**-----------------------------------------**\n");
				printf("**                   -                     **\n");
				printf("**   3-Fundo cinza / Fonte Preta           **\n");
				printf("**                   -                     **\n");
				printf("**-----------------------------------------**\n");
				printf("**                   -                     **\n");
				printf("**   4-Sair                                **\n");
				printf("**                   -                     **\n");
				printf("**_________________________________________**\n");
				
				int loop; // cria uma variavel int com nome loop
				loop = 4; // declara o valor de loop sendo 4
				
				do{
					system("cls"); // apaca todas as informações da tela
					
					printf("*********************************************\n");
					printf("**   --------- CONFIGURACOES  ----------   **\n");
					printf("*********************************************\n");
					printf("_____________________________________________\n");
					printf("**                   -                     **\n");
					printf("**   1-Fundo Preto / Fonte Branca          **                PIM IV\n");
					printf("**                   -                     **          *****************\n");
					printf("**-----------------------------------------**           UNIP INTERATIVA\n");
					printf("**                   -                     **          *****************\n");
					printf("**   2-Fundo Azul Marinho / Fonte Preta    **\n");
					printf("**                   -                     **\n");
					printf("**-----------------------------------------**\n");
					printf("**                   -                     **\n");
					printf("**   3-Fundo cinza / Fonte Preta           **\n");
					printf("**                   -                     **\n");
					printf("**-----------------------------------------**\n");
					printf("**                   -                     **\n");
					printf("**   4-Sair                                **\n");
					printf("**                   -                     **\n");
					printf("**_________________________________________**\n");
				
					printf("\ndigite a opcao desejada: ");
					scanf("%s", &opcao); // usuario insere manualmente o valor da variavel opcao
					
					switch(opcao){ // condicional switch iniciada
						case('1'): // caso opcao for igual a '1'
							system("color 0f"); // a cor do programa mudará para fundo preto e fonte branca
							break;
						case('2'): // caso opcao for igual a '2'
							system("color 30"); // a cor do programa mudará para fundo azul marinho e fonte preta
							break;
						case('3'): // caso opcao for igual a '3'
							system("color 70"); // a cor do programa mudará para fundo cinza e cor brancca
							break;
						case('4'): // caso opcao for igual a '4'
							loop = 1; // a variavel loop terá valor igual a 1
							break;	
					}
					
				}while(loop == 4); // enquanto loop for igual a 4 faça
			
			
			    break;
		}
    }while(a == 4); // enquanto loop for igual a 4 faça
		//Gravando na variavel de memoria valor da 1 hora
 }


