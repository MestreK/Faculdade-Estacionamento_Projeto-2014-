

void inlista();
void inlista(){
	int x;
	int i;
	for(x=0;x<=SIZE;x++){
		for(i=0;i<=4;i++){
			modeloVeiculo[x][i]=('V'); placaVeiculo[x][i]=('V'); dataRegistro[x][i]=('V'); horaRegistro[x][i]=('V');
			if(modeloVeiculo[x][i-1] =='V'){
				modeloVeiculo[x][i]=('a'); placaVeiculo[x][i]=('a'); dataRegistro[x][i]=('a'); horaRegistro[x][i]=('a');
				if(modeloVeiculo[x][i-1] =='a'){
					modeloVeiculo[x][i]=('z'); placaVeiculo[x][i]=('z'); dataRegistro[x][i]=('z'); horaRegistro[x][i]=('z');
					if(modeloVeiculo[x][i-1] =='z'){
						modeloVeiculo[x][i]=('i'); placaVeiculo[x][i]=('i'); dataRegistro[x][i]=('i'); horaRegistro[x][i]=('i');
						if(modeloVeiculo[x][i-1] =='i'){
							modeloVeiculo[x][i]=('o'); placaVeiculo[x][i]=('o'); dataRegistro[x][i]=('o'); horaRegistro[x][i]=('o');
			    }
			    }
			}
			}
		}
		
	} 
	
}

