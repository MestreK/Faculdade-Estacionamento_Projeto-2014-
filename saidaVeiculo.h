

void saidaVeiculo();

void saidaVeiculo()
{
	char placaSaida[20]; // cria uma variavel char com nome placaSaida
	int i; // cria uma variavel int com nome de i
	int placaFinal; // cria uma variavel int com nome de placaFinal
	do{
		system("cls");
	    printf("*********************************************\n");
	    printf("**   --------- ESTACIONAMENTO ----------   **\n");
	    printf("*********************************************\n");
		printf("\nDigite a placa : ");
		scanf("%s", placaSaida ); // usuario insere manualmente um valor para a variavel char
		int posterior; // cria uma variavel com nome posterior
		for(i=0;i<SIZE;i++) // i se repetirá enquanto for menor que SIZE declarado em global, a cada loop i é incrementado
		    {
		    		    	
		    	if(strcmp(placaVeiculo[i], placaSaida) == 0)
			{
			    
			    			
			    char horaSaida[15]; // cria variavel para armazenar a hora da saida em string
			    char dataSaida[15]; // cria variavel para armazenar a data de saida em string
				_strtime(horaSaida); // armazena hora de saida na string
				_strdate(dataSaida); // armazena data de saida na string
				printf("\n*****************************************************************************\n");
				 printf("*                         ESTACIONAMENTO UNIP - SAIDA                       *\n");
				 printf("*****************************************************************************\n");
				 printf(" MODELO         : %s                 PLACA          : %s                 \n",modeloVeiculo[i], placaVeiculo[i]);
				 printf("-----------------------------------------------------------------------------\n");
				  printf(" DATA DE ENTRADA: %s                  HORA DE ENTRADA: %s                  \n",dataRegistro[i], horaRegistro[i]);
				  printf(" DATA DE SAIDA  : %s                  HORA DE SAIDA  : %s                  \n",dataSaida, horaSaida);
				
			    char horaRegistroS[15]; 
			    modeloVeiculo[i];
			    int x;
			    for(x=0;x<=strlen(horaRegistro[i]);x++)
			    {
			    	horaRegistroS[x] = horaRegistro[i][x];
			    	
			    }
				
				//CONVERTENDO HORA DO REGISTRO DE STRING PARA INT
				char horasS[4]; // Cria uma variavel para adicionar as horas tipo char
				horasS[0] = horaRegistroS[0];
				horasS[1] = horaRegistroS[1];
				int horasI; // Cria uma variavel inteiro para converter horasS em int
				horasI = atoi(horasS); //Efetua conversão
				
				char minutosS[10]; // Cria uma variavel para adicionar os minutos tipo char
				minutosS[0] = horaRegistroS[3];
				minutosS[1] = horaRegistroS[4];
				int minutosI; // Cria uma variavel inteiro para converter minutosS em int
				minutosI = atoi(minutosS); // Efetua conversão
				
				char segundosS[3]; // Cria uma variavel para adicionar os segundos tipo char
				segundosS[0] = horaRegistroS[6];
				segundosS[1] = horaRegistroS[7];
				int segundosI; // Cria uma variavel para converter segundos em int
				segundosI = atoi(segundosS); // Efetua conversão
			    
			    
			    
			    //CONVERTENDO HORA DE SAIDA DE STRING PARA INT
			    char horasSF[21]; // Cria uma variavel para adicionar as horas tipo char
				horasSF[0] = horaSaida[0];
				horasSF[1] = horaSaida[1];
				int horasIF; // Cria uma variavel inteiro para converter horasS em int
				horasIF = atoi(horasSF); //Efetua conversão
				
				char minutosSF[21]; // Cria uma variavel para adicionar os minutos tipo char
				minutosSF[0] = horaSaida[3];
				minutosSF[1] = horaSaida[4];
				int minutosIF; // Cria uma variavel inteiro para converter minutosS em int
				minutosIF = atoi(minutosSF); // Efetua conversão
				
				char segundosSF[12]; // Cria uma variavel para adicionar os segundos tipo char
				segundosSF[0] = horaSaida[6];
				segundosSF[1] = horaSaida[7];
				int segundosIF; // Cria uma variavel para converter segundos em int
				segundosIF = atoi(segundosSF); // Efetua conversão
			    
			    // Transforma dia e mes da data de registro em int------------------------------------------
			    char diaDataRegistroS[2]; // variavel que vai receber dia do registro
			    char mesDataRegistroS[2]; // variavel que vai receber mês do registro
			    int diaDataRegistroI; // vai receber dia do registro em INT
			    int mesDataRegistroI; // vai receber mes do registro em INT
			    
			    dataRegistro[i][0] = diaDataRegistroS[0]; // declara dataRegistro[i][0] sendo igual ao vetor diaDataRegistroS[0]
			    dataRegistro[i][1] = diaDataRegistroS[1]; // declara dataRegistro[i][1] sendo igual ao vetor diaDataRegistroS[1]
			    dataRegistro[i][3] = mesDataRegistroS[0]; // declara dataRegistro[i][2] sendo igual ao vetor mesDataRegistroS[0]
			    dataRegistro[i][4] = mesDataRegistroS[1]; // declara dataRegistro[i][2] sendo igual ao vetor mesDataRegistroS[1]
			    
			    diaDataRegistroI = atoi(diaDataRegistroS); // declara DiaDataRegistroI sendo igual a variavel diaDataRegistroS convertida em int
			    mesDataRegistroI = atoi(mesDataRegistroS); // declara mesDataRegistroI sendo igual a variavel mesDataRegistroS convertida em int
			    
			    
				// Transforma dia e mes da data final em int------------------------------------------------
				char diaDataSaidaS[10]; // cria uma variavel para receber dia da data de saida em string
				char mesDataSaidaS[10]; // cria uma variavel para receber mes da data de saida em string
				int diaDataSaidaI; // Variavel que irá receber dia da data de saida em int
				int mesDataSaidaI; // Variavel que irá receber mes da data de saida em int
				char dataSaida1[10]; // cria uma variavel dataSaida1
				_strdate(dataSaida1); // declara a data do sistema atual em char na variavel dataSaida1
				diaDataSaidaS[0] = dataSaida[0]; // declara diaDataSiadaS[0] sendo igual a dataSaida[0]
				diaDataSaidaS[1] = dataSaida[1]; // declara diaDataSaida[1] sendo igual a dataSaida[1]
				diaDataSaidaI = atoi(diaDataSaidaS); // efetua conversão de char para int
				
				mesDataSaidaS[0] = dataSaida[3]; // declara mesDataSaidaS[0] sendo igual a dataSaida[3]
				mesDataSaidaS[1] = dataSaida[4] ; // declara mesDataSaidaS[1] sendo igual a dataSaida[4]
			    mesDataSaidaI = atoi(mesDataSaidaS); // efetua conversão de char para int
			    int meses; // Variavel onde serão armazenadas os dias dos meses que excederam
			    int dias; // variavel onde serão armazenadas os dias que excederam.
			    int y; // cria uma variavel com nome y int
				if (mesDataSaidaI != mesDataRegistroI){ // condicional se a variavel mesDataSaidaI for diferente de mesDataRegistro faça 
			    	y=mesDataRegistroI; // variavel y é igual a mesDataRegistroI;
			    	while(y == mesDataSaidaI){ // enquanto y for igual a mesDataSaidaI faça
			    		y+=1; // adição de +1 a variavel y
			    		meses+=30; // adição de + 30 a variavel meses
			    	}
			    	if (diaDataSaidaI != diaDataRegistroI){ // se diaDataSaidaI for diferente de diaDataRegistroI faça
			    		int dias; // cria uma variavel int com nome dias
			    		y = diaDataRegistroI; // variavel y igual a variavel diaDataRegistroI
			    		while (y == diaDataSaidaI){ // enquanto y for igual a diaDataSaidaI faça
			    			y+=1; // adição de +1 a variavel y
			    			dias+=1; // adição de +1 a variavel dias
			    		}
			    	}
			    	
			    }
			    else if (diaDataSaidaI != diaDataRegistroI){ // caso a variavel diaDataSaidaI seja diferente de diaDataRegistroI faça
			    	
			    	y = diaDataRegistroI; // variavel y igual a diaDataRegistroI
			    	while (y == diaDataSaidaI){ // enquanto y for igual diaDataSaidaI faça
			    		y+=1; // adição em +1 na variavel y 
			    		dias+=1; // adição em +1 na variavel dias
			    	}
			    }
				
			    int totDiasMeses; // cria uma variavel totDiasMeses int
			    totDiasMeses = (dias + meses) * 24; // declara o valor da variavel totDiasMeses com o resultado da conta (dias + meses) * 24
			    
			    
				
			    int TotSeg; // cria uma variavel int TotSeg
			    int TotMin; // cria uma variavel int TotMin
			    int TotHora; // cria uma variavel int TotHora
			    
			    if (segundosI > segundosIF){ // se segundosI for maior que segundosIF faça
			    	segundosIF+=60; // adição em +60 na variavel segundosIF
			    	minutosIF-=1; // subtração em -1 na variavel minutosIF
			    	TotSeg = (segundosIF - segundosI); // declara a variavel TotSeg com o resultado da conta (segundosIF - segundosI)
			    }
			    else{ // senão faça
			    	TotSeg = (segundosIF - segundosI); // declara TotSeg com o resultado da conta (segundosIF - segundosI)
			    }
			    if (minutosI > minutosIF){ // se minutosI for maior que minutosIF faça
			    	minutosIF+=60; // adição em +60 na variavel minutosIF
			    	horasIF-=1; // subtração em -1 na variavel horasIF
			    	TotMin = (minutosIF - minutosI); // variavel TotMin passa a ter o valor do resultado (minutosIF - minutosI)
				}
				else{ //senão faça
					TotMin = (minutosIF - minutosI); 
				}
				
				if(totDiasMeses >= 1){
					TotHora += totDiasMeses; 
				}
				TotHora = (horasIF - horasI);
			    printf("\n\n HORA UTILIZADA : %d:%d:%d", TotHora, TotMin, TotSeg);
			    
			    int demaisHoras;
			    if (TotHora <= 1 && TotHora >=0){
			    	printf("\n\n                                               TOTAL A PAGAR : R$%d \n\n", valorHora);
			    	SomaCaixa += valorHora;
			    }
			    else{
			    	demaisHoras = (TotHora * valorHora1);
			    	printf("\n\n                                                TOTAL A PAGAR : R$%d \n\n", demaisHoras);
			    	SomaCaixa += demaisHoras;
			    }
			    printf("***************************************************************************");
			    
				for (y=i;y<SIZE;y++){
					if (strlen(placaVeiculo[y]) > 0){
						for(x = 0; x<=15;x++){
			    
			    		modeloVeiculo[y][x]= modeloVeiculo[y+1][x]; placaVeiculo[y][x]=placaVeiculo[y+1][x]; dataRegistro[y][x]=dataRegistro[y+1][x]; horaRegistro[y][x]=horaRegistro[y+1][x];
										    	
			            }
					}
					
				}
				vagasDisponiveis +=1;		    
			    linha-=1;
							
		    
		    
		   
				
			} 
			}
		
		
		
		
		printf("\n\nDigite 1 para continuar ou 0 para sair");	
		scanf("%d",&op);
	}while(op == 1);
		


}
