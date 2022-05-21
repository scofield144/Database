#ifndef _ALTERAR_H
#define _ALTERAR_H


void aFuncionario(){
	
	//	ffuncionario ff[MAX];
	in: printf("\n------------------->Lista de Funcionario<-----------------------------");
		
		int qtd,cond=1,x=0,n,i=1;
		Re:	 printf("\nDigite o id do funcionario: ");scanf("%d",&n);		
			if(ff[n].ff_id!=n) {
					if(x==3) Alterar();   
						else goto Re;
				x++;
			}
			printf("Id: %d \n",ff[n].ff_id);
			fflush(stdin);
			printf("Nome: %s \n",ff[n].ff_nome);
			printf("Funcao: %s \n",ff[n].ff_funcao);
			printf("Descrisao: %s \n",ff[n].ff_descricao);
			fflush(stdin);
		printf("=================== ALTERAR======================: \n");
		menu: printf("\t\t1. Nome\t\t2. Funcao\t\t3. Descricao\t\t4. Voltar Menu\n--> "); scanf("%d",&cond);
			if (cond<1 && cond>4) goto menu;
			switch(cond){
				case 1: 
				fflush(stdin);
					printf("Nome: "); gets(ff[n].ff_nome);break;
				case 2:
					fflush(stdin);
					printf("Funcao: "); gets(ff[n].ff_funcao);break;
				case 3:
					fflush(stdin);
				 	printf("Descrisao: "); gets(ff[i].ff_descricao);break;
				case 4: system("cls");
						Alterar();break;
			}
			
			printf("\n \t Alterado com sucesso \n");
			printf("Nome: %s \n",ff[n].ff_nome);
			printf("Funcao: %s \n",ff[n].ff_funcao);
			printf("Descrisao: %s \n",ff[n].ff_descricao);
			fflush(stdin);
			
			printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar \n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
		
	}
void aEmpresa(){
			
	in: printf("------ ----- ----->Lista de Empresas<-----------------------------\n");
			int cond,n,i=1,x=1;
//--------------------------------------------------------- EXATIDAO --------------------------------------------------//
			Re:	 printf("Digite o id da Empresa: \n");scanf("%d",&n);		
			if(empresa[n].em_id!=n) {
				if(x==3) Alterar();   
				else goto Re;
				x++;
				
			} 
//---------------------------------------MOSTRAR ----------------------------------------///
			fflush(stdin);
			printf("Nome: "); puts(empresa[n].em_name);
			fflush(stdin);			
			printf("Tipo: %s \n",empresa[n].em_tipo);
			fflush(stdin);
			printf("Contacto: %d\n",empresa[n].em_contact);
			fflush(stdin);
//---------------------------------------ALTERAR ----------------------------------------///
			printf("Alterar\n");
			re: printf(" 1. Nome\t 2. Tipo\t 3. Contacto\t 4. Voltar ao Menu\n--> "); scanf("%d",&cond);
					if (cond<1 && cond>4) goto re;			
			switch(cond){
				case 1:
					fflush(stdin);
					printf("Nome: "); gets(empresa[n].em_name);
					fflush(stdin);
					 break;
				case 2:
						rev: printf("Tipo:\n \t 1. Fornecedor \t 2. Fabricante \t 3. Reciclagem\t : \n"); 
							scanf("%d",&cond);
							if(cond<0 && cond>3) { printf("\nNumero inserido incorreto.\n"); goto rev; }										
						else 
							if(cond==1)strcpy(empresa[n].em_tipo,"Fornecedor");
						else 
							if(cond==2) strcpy(empresa[n].em_tipo,"Fabricante");
						else strcpy(empresa[n].em_tipo,"Reciclagem");
							break;
				case 3:
							printf("Contacto: \n"); scanf("%d", &empresa[n].em_contact); break;
						//	if(isdigit(empresa[n].em_contact)!=0) goto ctt;
				case 4: Alterar();
						break;
			}
			printf("\nAlterado com  sucesso!\n");
//---------------------------------------MOSTRAR ----------------------------------------///
			fflush(stdin);
			printf("Nome: "); puts(empresa[n].em_name);
			fflush(stdin);			
			printf("Tipo: %s \n",empresa[n].em_tipo);
			fflush(stdin);
			printf("Contacto: %d\n",empresa[n].em_contact);
			fflush(stdin);
//---------------------------------------ALTERAR ----------------------------------------///
	
			printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
				if(i==1) Alterar();
				else goto in;
	}
void aOperacao(){
	
	in: printf("\n------------------->Lista de Operacao<-----------------------------------\n");
		
		short int qtd,cond,n,x=0,id;
		short int in=0,ex=0;
		Re: printf("Digite o id do ficheiro interno: ");scanf("%d",&n);
		i=1;
				if(operacao[n].op_idExterno!=n) {
					if(x==3) Alterar();   
						else x++;
							 goto Re;	
				} 
				
			printf("Montante: %2.3f\n",operacao[n].op_Cache);				
			fflush(stdin);
			printf("Tipo de operacao: %s \n",operacao[n].op_tipo);				
			printf("Observacao: %s \n",operacao[n].op_obs);
			
			printf("\n\tAlterar\n");
		re: printf("\t1. Id interno\t 2. Id externo\t 3. Id do posto de trablho\n"
					"\t4. Id do Componente\t 5. Id da Empresa\t 6. Tipo de Operacao\n"
					"\t7. Data de Saida 8. Data de Chegada\t 9. Data Prevista\n"
					"\t10. Id do Funcionario\t 11. Data de Operaca\t12. Montante\n "
					"\t13. Observacaot\t 14. Voltar ao Menu\n\t-->"); scanf("%d",&cond);
			if (cond<1 && cond>14) goto re;
				
			switch(cond){
				case 1:
						fflush(stdin);
						printf("Id interno: \n"); scanf("%d",&operacao[n].op_idInterno);
						break;	
				case 2:
					fflush(stdin);
						printf("Id externo: \n"); scanf("%d",&operacao[n].op_idExterno);
		 			break;
				case 3: 
					fflush(stdin);
						r: printf("Id do posto de trabalho: ");scanf("%d",&id);
							if(ptrabalho[id].post_id!=id) goto r;
								else operacao[n].pt_id=ptrabalho[id].post_id;
							fflush(stdin);
							printf("\tEscolhe Id do posto de trabalho: \n"); 
								for(i=1;ptrabalho[i].post_id; i++){
									printf("\n\t%d\n",ptrabalho[i].post_id);		// Mostra todos os ids do compt
								}
							printf("Digite o id do Posto : ");scanf("%d",&operacao[n].pt_id);	break; // Guarda o escolhido			
					
				case 4:	
					fflush(stdin);
							printf("\tEscolhe Id do Componente: \n"); 
								for(i=1;componente[i].comp_id; i++){
									printf("\n\t%d\n",componente[i].comp_id);		// Mostra todos os ids do compt
								}
						printf("Digite o id do Componente : ");scanf("%d",&operacao[n].comp_id);	break; // Guarda o escolhido
				case 5:
					fflush(stdin);
					printf("\tEscolhe Id Id da Empresa: \n"); 
							for(i=1;empresa[i].em_id; i++){
								printf("\n\t%d\n",empresa[i].em_id);
							}
						printf("Digite o id da empresa : ");scanf("%d",&operacao[n].emp_id);	break;
				case 6: 
						fflush(stdin);
						rept: printf("\t\tTipo de operacao\n\t\t\t--> 1. Venda\nt\t\t--> 2. Abastecimento");scanf("%d",&cond);
							if(cond==1) strcpy(operacao[n].op_tipo,"Venda");
								else 
								if(cond==2)strcpy(operacao[n].op_tipo,"Abastecimento");
									else { printf("Opcao invalida"); goto rept;}			
									fflush(stdin);break;
				case 7:
						fflush(stdin);
						printf("Data de Saida\n\tDia: ");scanf("%d",&op_said[n].dia);
						printf("\tMes:  ");scanf("%d",&op_said[n].mes);
						printf("\tAno:  ");scanf("%d",&op_said[n].ano);
						fflush(stdin);
						break;
				case 8:
					fflush(stdin);
						printf("Data de Chegada\n\tDia: ");scanf("%d",&op_cheg[n].dia);
						printf("\tMes: ");scanf("%d",&op_cheg[n].mes);
						printf("\tAno: ");scanf("%d",&op_cheg[n].ano);
						fflush(stdin);
						break;	
				case 9:
			fflush(stdin);
					printf("Data Prevista\n\tDia: ");scanf("%d",&op_Pchegada[n].dia);
					printf("\tMes: ");scanf("%d",&op_Pchegada[n].mes);
					printf("\tAno: ");scanf("%d",&op_Pchegada[n].ano);
					fflush(stdin);
					break;
				case 10:
					fflush(stdin);
						n: printf("Id do Funcionario: ");scanf("%d",&id);
							if(ff[id].ff_id!=id) goto n;
								else operacao[n].ff_id=ff[id].ff_id;
				case 11:
					fflush(stdin);
							printf("Data de Operacao\n\tDia: ");scanf("%d",&op_operac[i].dia);
							printf("\tMes: ");scanf("%d",&op_operac[i].mes);
							printf("\tAno: ");scanf("%d",&op_operac[i].ano);
							break;
				case 12:
					fflush(stdin);
						printf("Montante: \n");scanf("%f",&operacao[n].op_Cache);
						fflush(stdin);	
				case 13:
					fflush(stdin);
						printf("Observacao: \n");gets(operacao[n].op_obs);
					break;
				case 14:  Alterar();break;
			}
				
		printf("\nAlterado com  sucesso! \n");
///---------------------------------------------ALTERADOS----------------------------------------------------------------
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
	}
	
void aComponente(){
	in: printf("---------- ------------------------->lISTA DE COMPONENTE<-----------------------------------------------------------------------------");
				
	int i=1,cond,n,x=0;
		Re: printf("Inseri ID do componente: \n"); scanf("%d",&n);			
			if(componente[n].comp_id!=n) {
				printf("%d",componente[n].comp_id);
					if(x==3) Alterar();   
						else x++;
							 goto Re;	
			} 
//---------------------------------------MOSTRAR COMPONENTES----------------------------------------///
			printf("Numero de serie: %d\n",componente[n].comp_serie);
			fflush(stdin);
			printf("Designacao: %s\n",componente[n].com_designacao);
			printf("Condicao: %s\n",componente[n].com_condicao);
			fflush(stdin);
			printf("Id fornecedor: %d\n",componente[n].fab_id);
			printf("Id fabricante: %d\n",componente[n].for_id);
			printf("Id posto do trabalho : %d\n",componente[n].post_id);
			fflush(stdin);
			printf("Observacao: %s\n",componente[n].com_obs);
			printf("Tipo: %s\n",componente[n].comp_tipo);
			fflush(stdin);
			printf("Garantia: %d\n",componente[n].comp_garantia);
				
//-------------------------------------ALteracao-----------------------------------------------------///
			printf("Alterar\n");
			re: printf("\t1. Numero de serie\t 2. Designacao\t 3. Condicao\n"
					  "\t4. Id do Fornecedor \t 5. Id do Fabricante\t 6. Posto de Trabalho\n"
					  "\t7. Observacao\t8. Tipo de Componente\t 9. Garantia\t 10. Voltar ao Menu\n\t-->"); scanf("%d",&cond);
				if(cond<1 && cond>10) goto re;
				
			switch(cond){
				case 1:
					fflush(stdin);
					printf("\tNumero de serie: \n"); scanf("%d",&componente[n].comp_serie);break;
				case 2:
					fflush(stdin);
					printf("\tDesignacao: \n"); gets(componente[n].com_designacao);break;
				case 3:
					fflush(stdin);
					printf("\tCondicao: \n"); gets(componente[n].com_condicao);break;
				case 4:
					fflush(stdin);
					printf("\tId do Fabricante: ");scanf("%d",&componente[n].fab_id);
				case 5:
					fflush(stdin);
					printf("\nId do Fornecedor: \n");scanf("%d",&componente[n].for_id);		
				case 6: 
				fflush(stdin);
					printf("\tEscolhe Id do Posto de trabalho: \n"); 
							for(i=1;ptrabalho[i].post_id; i++){
								printf("\n\t%d\n",ptrabalho[i].post_id);
							}
						printf("Digite o id do Posto : ");scanf("%d",&componente[i].post_id);	break;
				case 7:
					fflush(stdin);
					printf("\tObservacao"); gets(componente[n].com_obs);break;
				case 8: 
				fflush(stdin);
					printf("Tipo: \n"); gets(componente[n].comp_tipo);break;
				case 9: 
				fflush(stdin);
					printf("\tGarantia: \n"); scanf("%d",&componente[n].comp_garantia);break;
				case 10: Alterar(); break;
			}
			
//---------------------------------------MOSTRAR COMPONENTES----------------------------------------///
			printf("\n \n Numero de serie: %d\n",componente[n].comp_serie);
			fflush(stdin);
			printf("Designacao: %s\n",componente[n].com_designacao);
			printf("Condicao: %s\n",componente[n].com_condicao);
			fflush(stdin);
			printf("Id fornecedor: %d\n",componente[n].fab_id);
			printf("Id fabricante: %d\n",componente[n].for_id);
			printf("Id posto do trabalho : %d\n",componente[n].post_id);
			fflush(stdin);
			printf("Observacao: %s\n",componente[n].com_obs);
			printf("Tipo: %s\n",componente[n].comp_tipo);
			fflush(stdin);
			printf("Garantia: %d\n",componente[n].comp_garantia);
//---------------------------------------MOSTRAR COMPONENTES----------------------------------------///
			
		printf("\nAlterado com  sucesso! ");
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
	}
void aPtrabalho(){
	in: printf("\n--------------------------> lISTA DE POSTO DE TRABLHO <--------------------------------\n");
	int cond,n,i=1,j=1;
		x=0;
		Re: printf("Inseri ID do posto de trabalho: "); scanf("%d",&n);
				if((ptrabalho[n].post_id!=n) && (n!=0)) {
						printf("potd %d\n", ptrabalho[n].post_id);
						x++;
						if(x==3) Alterar();   
							else goto Re;
						}
//-------------------------------------MOSTRAR-------------------------------------------------------///
				printf("\n\t\tId do funcionario: %d\n",ptrabalho[n].post_id);
				printf("\t\tNome: %s\n",ptrabalho[n].post_nome);
				printf("\t\tDescricao: %s\n",ptrabalho[n].post_descricao);
				printf("\t\tSeccao: %s\n",ptrabalho[n].post_seccao);
				printf("\t\tLocal: %s\n",ptrabalho[n].post_local);
				fflush(stdin);
				printf("\t\tId do funcionario: %d",ptrabalho[n].ff_id);
//-----------------------------------ALTERAR-----------------------------------------------------------///
				printf("\n\n==================================<- Alterar ->================================\n");
				re: printf("\n\n\t\t1. Nome\t\t 2. Descricao\n\t\t3. Seccao\t4. Local\t\n" 
							"\t\t5. Id do funcionario \t6. Voltar ao Menu\n-->  "); scanf("%d",&cond);
					if(cond<1 && cond>5) goto re;
				switch(cond){
					case 1: 
					fflush(stdin);
						printf("Nome: \n"); gets(ptrabalho[n].post_nome); break;
					case 2:	
					fflush(stdin);
						printf("Descricao: \n"); gets(ptrabalho[n].post_descricao); break;
					case 3: 
					fflush(stdin);
						printf("Seccao: \n"); gets(ptrabalho[n].post_seccao);
					case 4: 
					fflush(stdin);
						printf("Local: \n"); gets(ptrabalho[n].post_local);
					case 5: 
					fflush(stdin);
						printf("Escolhe o Id funcionario: ");
							for(i=1; ff[i].ff_id; i++){
								printf("\n\t %d",ff[i].ff_id);
							}
						printf("\n Escolhe o Id:: ");scanf("%d",&ptrabalho[n].ff_id);	break;
					case 6: Alterar();
							break;
				}
		printf("\n\nAlterado com sucesso!\n");
		//-------------------------------------MOSTRAR-------------------------------------------------------///
				printf("\t\tNome: %s\n",ptrabalho[n].post_nome);
				printf("\t\tDescricao: %s\n",ptrabalho[n].post_descricao);
				printf("\t\tSeccao: %s\n",ptrabalho[n].post_seccao);
				printf("\t\tLocal: %s\n",ptrabalho[n].post_local);
				fflush(stdin);
				printf("\t\tId do funcionario: %d",ptrabalho[n].ff_id);
//-----------------------------------ALTERAR-----------------------------------------------------------///

		printf("\n\t\t\t\t\t\t\t\t 1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
		
}

#endif
