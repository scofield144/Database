#ifndef _ALTERAR_H
#define _ALTERAR_H


int cm(){
	
	//	ffuncionario ff[MAX];
	in: printf("\n------------------->Lista de Funcionario<-----------------------------");
		
		int qtd,cond=1,x=0,n,i=1;
		Re:	 printf("\nDigite o id do funcionario: \n");scanf("%d",&n);		
			if(ff[n].ff_id!=n) {
					if(x==3) Apagar();   
						else goto Re;
				x++;
			}
			fflush(stdin);
			printf("Nome: %s \n",ff[n].ff_nome);
			printf("Funcao: %s \n",ff[n].ff_funcao);
			printf("Descrisao: %s \n",ff[n].ff_descricao);
			fflush(stdin);
		printf("=================== ALTERAR======================: \n");
		re: printf("\t\t1. Nome\t\t2. Funcao\t\t3. Descricao\t\t4. Voltar Menu\n:: "); scanf("%d",&cond);
			if (cond<1 && cond>4) goto re;
			switch(cond){
				case 1: 
				fflush(stdin);
						ff[n].ff_nome='\0';
						break;
				case 2:
					fflush(stdin);
					ff[n].ff_funcao='\0';
					break;
				case 3:
					fflush(stdin);
				 	ff[i].ff_descricao='\0';
					 break;
				case 4:	Apagar();break;
			}
			
			printf("\n \t Apagado com sucesso \n");
			printf("Nome: %s \n",ff[n].ff_nome);
			printf("Funcao: %s \n",ff[n].ff_funcao);
			printf("Descrisao: %s \n",ff[n].ff_descricao);
			fflush(stdin);
			
			printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar:");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
		
	}
void xEmpresa(){
			
	in: printf("------ ----- ----->Lista de Empresas<-----------------------------\n");
			int cond,n,i=1,x=1;
//--------------------------------------------------------- EXATIDAO --------------------------------------------------//
			Re:	 printf("Digite o id da Empresa: \n");scanf("%d",&n);		
			if(empresa[n].em_id!=n) {
				if(x==3) Apagar();   
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
			printf("Apagar\n");
			re: printf(" 1. Nome\t 2. Tipo\t 3. Contacto\t 4. Voltar ao Menu "); scanf("%d",&cond);
					if (cond<1 && cond>4) goto re;			
			switch(cond){
				case 1:
					empresa[n].em_name='\0';
					 break;
				case 2:
						rev: printf("Tipo:\n \t 1. Fornecedor \t 2. Fabricante \t 3. Reciclagem\t : \n"); 
							scanf("%d",&cond);
							if(cond<0 && cond>3) { printf("\nNumero inserido incorreto.\n"); goto rev; }										
						else 
							if(cond==1) empresa[n].em_tipo='\0';
						else 
							if(cond==2) empresa[n].em_tipo='\0';
						else empresa[n].em_tipo='\0';
							break;
				case 3:
						empresa[n].em_contact='\0';break;
				case 4: Apagar();
						break;
			}
			printf("Apagado com  sucesso! ");
//---------------------------------------MOSTRAR ----------------------------------------///
			fflush(stdin);
			printf("Nome: "); puts(empresa[n].em_name);
			fflush(stdin);			
			printf("Tipo: %s \n",empresa[n].em_tipo);
			fflush(stdin);
			printf("Contacto: %d\n",empresa[n].em_contact);
			fflush(stdin);
//---------------------------------------ALTERAR ----------------------------------------///
	
			printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar:");scanf("%d",&i);
				if(i==1) Apagar();
				else goto in;
	}
void xOperacao(){
	
	in: printf("----------- ------------------------>Lista de Funcionario<-----------------------------------------------------------------------------");
		
		int qtd,cond,n,x=1,id,i=1;
		Re: printf("Digite o id do ficheiro interno ou externo da operacao a alterar: \n");scanf("%d",&n);
		while(i<=MAX){
			if(operacao[i].op_idExterno==n) break;
			else if(operacao[i].op_idInterno==n) break;
			i++;
		}
		if(i==MAX) printf("Id nao encontrado\n"); goto Re;
		/*	if(i==MAX){
				 printf("Id nao encontrado\n");
					  	if(x==3) Alterar();   
						else x++;		 
					 		goto Re;
			}*/
					
					printf("Tipo de operacao: %s \n",operacao[n].op_tipo);				
					printf("Montante: %s \n",operacao[n].op_Cache);				
					printf("Observacao: %s \n",operacao[n].op_obs);
					printf("Alterar\n");
						re: printf("\t1. Id interno\t 2. Id externo\t 3. Id do posto de trablho\n"
						"\t4. Id do Componente\t 5. Id da Empresa\t 6. Tipo de Operacao\n"
						"\t7. Data de Saida 8. Data de Chegada\t 9. Data Prevista\n"
						"\t10. Id do Funcionario\t 11. Data de Operaca\t13. Montante\n "
						"\t13. Observacaot\t 14. Voltar ao Menu"); scanf("%d",&cond);
				if (cond<1 && cond>15) goto re;
				
			switch(cond){
				case 1:
						operacao[n].op_idInterno='\0'; 
						break;	
				case 2:
						operacao[n].op_idExterno='\0'; 
						break;
		 
				case 3: 
						r: printf("Id do posto de trabalho: ");scanf("%d",&id);
							if(ptrabalho[id].post_id!=id) goto r;
								else operacao[n].pt_id='\0'; 
						break;
					
				case 4:
						rep: printf("Id do Componente: ");scanf("%d",&id);
							if(componente[id].comp_id!=id) goto rep;
								else operacao[n].comp_id='\0'; 
						break;
				case 5:
						rev: printf("Id da Empresa: ");scanf("%d",&id);
							if(empresa[id].em_id!=id) goto rev;
								else operacao[n].emp_id='\0'; 
						break;
				case 6: 
						fflush(stdin);
						rept: printf("\t\tTipo de operacao\n\t\t\t--> 1. Venda\nt\t\t--> 2. Abastecimento");scanf("%d",&cond);
							if(cond==1) strcpy(operacao[n].op_tipo,"Venda");
								else 
								if(cond==2)operacao[n].op_tipo='\0'; 
									else { printf("Opcao invalida"); goto rept;}			
									fflush(stdin);
						break;
				case 7:
						op_said[n].dia='\0';
						op_said[n].mes='\0';
						op_said[n].ano='\0';
						fflush(stdin);
				case 8:
						op_cheg[n].dia='\0';
						op_cheg[n].mes='\0';
						op_cheg[n].ano
						fflush(stdin);
							
				case 9:
						op_Pchegada[n].dia='\0';
						op_Pchegada[n].mes='\0';
						op_Pchegada[n].ano='\0';
						fflush(stdin);
				case 10:
						n: printf("Id do Funcionario: ");scanf("%d",&id);
							if(ff[id].ff_id!=id) goto n;
								else operacao[n].ff_id='\0';
				case 13:
						op_operac[n].dia='\0';
						op_operac[n].mes='\0';
						op_operac[n].ano='\0';
				case 14:
						operacao[n].op_Cache='\0';
						fflush(stdin);	
				case 15:
						operacao[n].op_obs='\0';
			
				case 16:  Apagar();
						break;
			}
				
		printf("Alterado com  sucesso! \n");
///---------------------------------------------ALTERADOS----------------------------------------------------------------
					printf("Id Interno: %d\nId Externo: %d\n",operacao[n].op_idInterno,operacao[n].op_idExterno);
					printf("Id do componente: %d\n",operacao[n].comp_id);
					printf("Id da empresa: %d\n",operacao[n].emp_id);
					fflush(stdin);
					printf("\n\n Tipo de operacao: %s \n",operacao[n].op_tipo);				
					fflush(stdin);
					printf("Datas:\n \tSaida: %d-%d-%d\n\tChegada: %d-%d-%d%d\n\tPrevista: %d-%d-%d\n\tOperacao: %d-%d-%d\n",
							op_said[n].dia,op_said[n].mes,op_said[n].ano,op_cheg[n].dia,op_cheg[n].mes,op_cheg[n].ano,
							op_Pchegada[n].dia,op_Pchegada[n].mes,op_Pchegada[n].ano,op_operac[n].dia,op_operac[n].mes,op_operac[n].ano );
					printf("Id do funcionario: %d\n",operacao[n].ff_id);
					printf("Montante: %s \n",operacao[n].op_Cache);		
					fflush(stdin);		
					printf("Observacao: %s \n",operacao[n].op_obs);
					fflush(stdin);		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar:");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
	}
	
void xComponente(){
	in: printf("---------- ------------------------->lISTA DE COMPONENTE<-----------------------------------------------------------------------------");
				
	int i=1,cond,n,x=0;
		Re: printf("Inseri ID do componente: \n"); scanf("%d",&n);			
			if(componente[i].comp_id!=n) {
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
					  "\t7. Observacao\t8. Tipo de Componente\t 9. Garantia\t 10. Voltar ao Menu"); scanf("%d",&cond);
				if(cond<1 && cond>10) goto re;
				
			switch(cond){
				case 1:
					componente[n].comp_serie='\0';
					break;
				case 2:
					componente[n].com_designacao='\0';
					break;
				case 3:
					componente[n].com_condicao='\0';
					break;
				case 4:
					componente[n].fab_id='\0';
					break;
				case 5:
					componente[n].for_id='\0';		
					break;
				case 6: 
					componente[i].post_id='\0';
					break;
				case 7:
					componente[n].com_obs='\0';
					break;
				case 8: 
					componente[n].comp_tipo='\0';
					break;
				case 9: 
					componente[n].comp_garantia='\0';
					break;
				case 10: Apagar();
					break;
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
			
		printf("\nApagado com  sucesso! ");
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar:");scanf("%d",&i);
		if(i==1) Apagar();
		else goto in;
	}
void xPtrabalho(){
	in: printf("------------- --------------------------> lISTA DE POSTO DE TRABLHO <-----------------------------------------------------------------------------");
	
	int cond,n,i=1,x=1,j=1;
		fpost_trabalho ptrabalho[MAX+1];
		Re: printf("Inseri ID do posto de trabalho: \n"); scanf("%d",&n);
				if(ptrabalho[i].post_id!=n) {
					printf("%d: ",ptrabalho[i].post_id);
						if(x==3) Alterar();   
							else x++; 
								goto Re;
			}
//-------------------------------------MOSTRAR-------------------------------------------------------///
				printf("\t\tNome: %s\n",ptrabalho[i].post_nome);
				printf("\t\tDescricao: %s\n",ptrabalho[i].post_descricao);
				printf("\t\tSeccao: %s\n",ptrabalho[i].post_seccao);
				printf("\t\tLocal: %s\n",ptrabalho[i].post_local);
//-----------------------------------ALTERAR-----------------------------------------------------------///
				printf("==================================Alterar================================");
				re: printf("\t\t1. Nome\t\t 2. Descricao\n\t\t3. Seccao\t\t4. Local\t\n" 
							"\t\t5. Id do funcionario\t\t6. Voltar ao Menu"); scanf("%d",&cond);
					if(cond<1 && cond>5) goto re;
				switch(cond){
					case 1: 
						ptrabalho[n].post_nome='\0';
						break;
					case 2:	
						ptrabalho[n].post_descricao='\0';
						break;
					case 3: 
						ptrabalho[n].post_seccao='\0';
						break;
					case 4: 
						ptrabalho[n].post_local='\0';
						break;
					case 5:
						printf("Escolhe o Id funcionario: ");
							for(;j<=10;j++) printf("*");
							for(i=1; i<=10; i++){
								printf("\t| %d |\n",ff[i].ff_id);
							}
						for(;j<=10;j++) printf("*");
						ptrabalho[n].ff_id='\0';
						break;
					case 6: Apagar(); break;
					default: break;
				}
		printf("Alterado com  sucesso!\n");
		//-------------------------------------MOSTRAR-------------------------------------------------------///
				printf("\t\tNome: %s\n",ptrabalho[i].post_nome);
				printf("\t\tDescricao: %s\n",ptrabalho[i].post_descricao);
				printf("\t\tSeccao: %s\n",ptrabalho[i].post_seccao);
				printf("\t\tLocal: %s\n",ptrabalho[i].post_local);
//-----------------------------------ALTERAR-----------------------------------------------------------///

		printf("\n\t\t\t\t\t\t\t\t 1. Voltar\t 2. Continuar: ");scanf("%d",&i);
		if(i==1) Alterar();
		else goto in;
		
}

#endif
