void fecharCaixa();
void fecharCaixa(){
	char operacao;  // cria uma variavel char com nome operacao
	char FC;  // cria uma variavel char co nome FC
	do{
		printf("\n\nContagem fechar caixa: R$%d", SomaCaixa); // apresenta a variavel global SomaCaixa com seus devidos valores
		printf("\n\n digite 1 para fechar ou 0 para voltar: ");
		
		scanf("%s", &FC); // usuario preenche o valor da variavel FC manualmente
		if(FC == '1'){ // se FC for igual a '1' fa�a
			SomaCaixa = 0; // Adiciona o valor 0 a variavel SomaCaixa
			printf("\n Concluido.");  // imprime na tela concluido
			printf("digite 0 para sair"); // imprime na tela digite 0 para sair
			scanf("%s", &FC); // usuario preenche o valor da variavel FC manualmente
			if (FC == '0'){ // se FC for igual a '0' fa�a
				operacao = '4'; // declara que a variavel opera��o ter� valor '4'
			}
			else{ // sen�o fa�a
				system("cls"); // limpa a tela
				printf("caractere invalido"); // printa caractele invalido na tela
			}
			
		}
		else if(FC == '0'){ // se a variavel FC for igual a '0'
			operacao = '4'; // declara que a variavel opera��o ter� valor '4'
		}
		else{ // sen�o
			system("cls"); // limpa a tela
			printf("caractere invalido"); // printa caractere invalido na tela
		}
	}while(operacao != '4'); // este looping se repetir� enquanto opera��o for diferente de '4'
}
