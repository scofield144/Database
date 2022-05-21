#ifndef _INSERIR_H
#define _INSERIR_H



void iFuncionario(){
//	int qtd,i=1;
  
	in: printf("---------------------------> Lista de Funcionario <----------------------------------------------");
	  int qtd,j=1,cont=1;	
		 printf("\nQuantidade de funcionarios a inserir ?\n:: "); scanf("%d",&qtd);
				for(;j<=MAX;j++) if(ff[j].ff_id!=0)i=ff[j].ff_id;		// pega a ultima possicao do vetor							

			while(cont<=qtd){
			i++;
				ff[i].ff_id=i;			
				fflush(stdin);
                printf("Nome: "); gets(ff[i].ff_nome);
				printf("Funcao: "); gets(ff[i].ff_funcao);
				printf("Descrisao: ");gets(ff[i].ff_descricao);
				fflush(stdin);
			cont++;
			}
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar:");scanf("%d",&i);
		if(i==1) Inserir();
		else goto in;
	}
void iEmpresa(){
	in: printf("\n\n-------------------------------> Lista de Empresas <------------------------------------\n\n");

		int i=0,qtd,j=1,cont=1,cond;
		printf("Quantidade de empresas a inserir\n:: "); scanf("%d",&qtd);
			for(;j<=MAX;j++) if(empresa[j].em_id!=0) i=empresa[j].em_id; // pega a ultima possicao do vetor	
				
		while(cont<=qtd){
			i++;			
			empresa[i].em_id=i;	
			fflush(stdin);
			printf("Nome: "); gets(empresa[i].em_name);
			
			fflush(stdin);
			ctt: printf("Contacto: "); scanf("%d",&empresa[i].em_contact);
			/*if(isdigit(empresa[i].em_contact)!=0) goto ctt; // Funciona se for digitodo char
			else printf*/
			fflush(stdin);
				while(1){
					printf("Tipo:\n \t 1. Fornecedor \t 2. Fabricante \t 3. Reciclagem\t\n-->"); scanf("%d",&cond);
					if(cond>0 && cond<4) break;
					printf("\nNumero inserido incorreto.\n");
				}	
			fflush(stdin);
				if(cond==1) strcpy(empresa[i].em_tipo,"Fornecedor");
				else 
					if(cond==2) strcpy(empresa[i].em_tipo,"Fabricante");
				else strcpy(empresa[i].em_tipo,"Reciclagem");
			fflush(stdin);
		cont++;
		}	
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
			if(i==1) Inserir();
			else goto in;
	}	
void iPtrabalho(){
		in: printf("\n------------------------> lISTA DE POSTO DE TRABLHO <-------------------------------\n");

		int contador=1,idff,qtd,i=0,j=1,cont=1,aux=1,n=0;
		//short int x=0;
		printf("Quantos postos de trabalho deseja inserir\n:: "); scanf("%d",&qtd);
			for(;j<=MAX;j++) if(ptrabalho[j].post_id!=0) i=ptrabalho[j].post_id; // pega a ultima possicao do vetor	

	while (cont<=qtd){
				i++;
				ptrabalho[i].post_id=i;
				fflush(stdin);
				nov: printf("Insert id Funcionario: ");scanf("%d",&n);
						if(n!=ff[n].ff_id) {
							x=x+1;
								if(x==3) Inserir();	
									else {
										printf("Try Again\n");goto nov;
									}
						}
						else ptrabalho[i].ff_id=ff[n].ff_id;
				printf("Nome: \n"); gets(ptrabalho[i].post_nome);
				printf("Descricao: \n"); gets(ptrabalho[i].post_descricao);
				printf("Seccao: \n"); gets(ptrabalho[i].post_seccao);
				printf("Local: \n"); gets(ptrabalho[i].post_local);
				fflush(stdin);
						
				cont++;	
			}
		printf("\n\t\t\t\t\t\t\t\t 1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
			if(i==1) Inserir();
			else goto in;
	}
void iComponente(){
		in: printf("\n------------------------> lISTA DE COMPONENTE <------------------------------------\n");

		int qtd,cont=1,contador=1,idf,n=0,cd,j=1;
		i=0;
		printf("Quantos Componentes deseja inserir: "); scanf("%d",&qtd);
			for(;j<=MAX;j++) if(componente[j].comp_id!=0) i=componente[j].comp_id;      // pega a ultima possicao do vetor	

		while(cont<=qtd){
			i++;
				ptnov: printf("Digite id do posto de trabalho: ");scanf("%d",&idf);
					if(idf!=ptrabalho[idf].post_id) {
							x++;
							if(x==3) Inserir();   
								else {
										printf("Try Again\n"); goto ptnov;
									} 	
					}else componente[i].post_id=ptrabalho[idf].post_id;
				fflush(stdin);
				
				x=0; 
				
				fabnov: printf(" Insert Id to Fabricator: ");scanf("%d",&idf);
				
					if(idf!=fempresa[idf].em_id){
							x++;
							if(x==3) Inserir();   
								else {	printf("Try Again\n"); goto fabnov; } 	
					}else {
							if(stricomp('Fabricante',fempresa[idf].em_tipo)==0) componente[i].fab_id=fempresa[idf].em_id;
								else goto fabnov;
					}fflush(stdin);
				
			//	x=0 ;/// Insertion value for x for next using
				fornov: printf(" Insert Id to Fornecetor: ");scanf("%d",&idf);
					if(idf!=fempresa[idf].em_id) {
							x++;
							if(x==3) Inserir();   
								else {
										printf("Try Again\n"); goto fornov;
									} 	
					}else {
							if(stricomp('Fornecedor',fempresa[idf].em_tipo)==0) componente[i].for_id=fempresa[idf].em_id;
								else goto fornov;
					}fflush(stdin);		
			
			
			printf("Numero de serie: \n"); scanf("%d",&componente[i].comp_serie);
			printf("Data de Aquisacao dd - mm - aa: ");scanf("%d-%d-%d",&cp_aq[i].dia,&cp_aq[i].mes,&cp_aq[i].ano);
			fflush(stdin);
			printf("Designacao: "); gets(componente[i].com_designacao);
			printf("Condicao: "); gets(componente[i].com_condicao);
			fflush(stdin);
				nv: printf("Tipo de Componente\n\t\t--> 1. Laptop\n\t\t--> 2. Portatel\n--> ");scanf("%d",&cd);
					if(cd==1) strcpy(componente[i].comp_tipo,"Laptop");
					else 
						if(cd==2)strcpy(componente[i].comp_tipo,"Portatel");
				else { printf("Opcao invalida"); goto nv;}	
			fflush(stdin);

			printf("Tempo de Garantia em dias: "); scanf("%d",&componente[i].comp_garantia);
				
//----------------------------------------------------- PESQUISA NA FUNCAO POSTO DE TRABALHO E TESTA O ID ---------------------------//
			
				printf("\nObservacao: "); gets(componente[i].com_obs);
				fflush(stdin);
			componente[i].comp_id=i;
		cont++;
		}		
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t:");scanf("%d",&i);
			if(i==1) Inserir();
			else goto in;
	}
void iOperacao(){

	in: printf("\n\n------------------> Lista de Operacoes <---------------------\n");

		int qtd,cont=1,j=1,cd,id;
		printf("Quantas operacoes deseja fazer: "); scanf("%d",&qtd);
		i=0;
		for(;j<=MAX;j++) if(operacao[j].op_idInterno!=0) i=operacao[j].op_idInterno; // pega a ultima possicao do vetor	
						
			
		while(cont<=qtd){
			i++;
			operacao[i].op_idInterno=i;
			operacao[i].op_idExterno=i;
		
			fflush(stdin);
				r: printf("Id do posto de trabalho: ");scanf("%d",&id);
				
					if(ptrabalho[id].post_id!=id) {	//-------------------------caso ele erre 3 vezes o prograna volta para o Inserir
							x++;
						if(x==3) Inserir();   						
							else {
								printf("Try Again\n"); goto r;	
						}
					}else operacao[i].pt_id=ptrabalho[i].post_id;

				re: printf("Id do Componente: ");scanf("%d",&id);
						if(componente[id].comp_id!=id) {	//-------------------------caso ele erre 3 vezes o prograna volta para o Inserir
								x++;
							if(x==3) {
								x=0;
								Inserir();   	
							}
							else goto re;	
						}else 
							operacao[i].comp_id=componente[id].comp_id;
				
				rev: printf("Id da Empresa: ");scanf("%d",&id);
					if(empresa[id].em_id!=id) goto rev;
					else operacao[i].emp_id=empresa[id].em_id;
							
			fflush(stdin);
				x=0;
				rep: printf("\t\tTipo de operacao\n\t\t--> 1. Venda\n\t\t--> 2. Abastecimento\n\t\t--> ");scanf("%d",&cd);
					
					if(cd==1) strcpy(operacao[i].op_tipo,"Venda");
						else 
							if(cd==2)strcpy(operacao[i].op_tipo,"Abastecimento");
							//fflush(stdin);
								else {  //////////-------------------------caso ele erre 3 vezes o prograna volta para o Inserir
									printf("X-> %d\n",x);	
										x++;
										if(x==3) Inserir();   
											else goto rep;	
								}
							
			fflush(stdin);
							
			printf("Data de Saida\n\tDia: ");scanf("%d",&op_said[i].dia);
			printf("\tMes:  ");scanf("%d",&op_said[i].mes);
			printf("\tAno:  ");scanf("%d",&op_said[i].ano);
			fflush(stdin);
			
			printf("Data de Chegada\n\tDia: ");scanf("%d",&op_cheg[i].dia);
			printf("\tMes: ");scanf("%d",&op_cheg[i].mes);
			printf("\tAno: ");scanf("%d",&op_cheg[i].ano);
			
			printf("Data Prevista\n\tDia: ");scanf("%d",&op_Pchegada[i].dia);
			printf("\tMes: ");scanf("%d",&op_Pchegada[i].mes);
			printf("\tAno: ");scanf("%d",&op_Pchegada[i].ano);
			fflush(stdin);
			
//-----------------------------------Pesquisa do funcioario-------------------///	
				n: printf("Id do Funcionario: ");scanf("%d",&id);
					if(ff[id].ff_id!=id) goto n;
					else operacao[i].ff_id=ff[id].ff_id;
			
			printf("Data de Operacao\n\tDia: ");scanf("%d",&op_operac[i].dia);
			printf("\tMes: ");scanf("%d",&op_operac[i].mes);
			printf("\tAno: ");scanf("%d",&op_operac[i].ano);
			fflush(stdin);
	
			printf("Montante: ");scanf("%f",&operacao[i].op_Cache);
			fflush(stdin);	
			printf("Observacao: ");gets(operacao[i].op_obs);
			fflush(stdin);
		cont++;				
		}
		

		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t-->");scanf("%d",&i);
			if(i==1) Inserir();
			else goto in;
	}

	
#endif
