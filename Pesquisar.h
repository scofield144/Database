#ifndef _PESQUISAR_H
#define _PESQUISAR_H

//#include "declaracao.h"

void pEmpresa(){
			in: printf("\n----------------> Pesquisar Empresas <-----------------------------\n");
			int cond,n,x=1,j=0;
							char nome[15], aux[15];
//--------------------------------------------------------- EXATIDAO --------------------------------------------------//
				re: printf("Pesquisa por::\n\t1. Nome\n\t 2. Id\n\t 3. Voltar ao Menu\n\t--> "); scanf("%d",&cond);
					if (cond<1 && cond>3) goto re;
				i=1;
				switch(cond){
					case 1:
	
					
						fflush(stdin);
							printf("Nome da Empresa: \n");gets(nome);	
						fflush(stdin);
						strlwr(nome);
					
						strlwr(empresa[i].em_name);
									while(empresa[i].em_id!='\0'){
									strcpy(aux,empresa[i].em_name);
									strlwr(aux);
									printf("Nome: %s\n%s",aux,nome);
									//fflush(stdin);
										if(stricmp(aux,nome)==0) {
											printf("Erro");
											printf("Id: %d\n",empresa[i].em_id);
											fflush(stdin);	
											printf("Nome: %s\n",empresa[i].em_name);		
											printf("Tipo: %s\n",empresa[i].em_tipo);
											fflush(stdin);
											printf("Contacto: %d\n",empresa[i].em_contact);
											fflush(stdin);
											j=1;
										}
									i++;
									}
										if(j==0) printf("Nome da empresa nao encontrado\n");
								break;
					case 2:
						fflush(stdin);
								 printf("Digite Id da Empresa: \n");scanf("%d",&n);	
								 									
										if(empresa[n].em_id==n) {
											printf("Id: %d\n",empresa[n].em_id);
											fflush(stdin);
											printf("Nome: %s \n",empresa[n].em_name);		
											printf("Tipo: %s \n",empresa[n].em_tipo);
											fflush(stdin);
											printf("Contacto: %d\n",empresa[n].em_contact);
											fflush(stdin);
										}
										else printf("Nome da empresa nao encontrado\n");
								break;
					case 3: Pesquisar();break; 
				}
				printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
					if(i==1) Pesquisar();
					else goto in;
	}

void pComponente(){
		in: printf("----------------> Pesquisar Componentes <-----------------------------\n");
			
			
		int cond,n,i=0,x=1,j=0;
			char nome[15];
//--------------------------------------------------------- EXATIDAO --------------------------------------------------//
				re: printf("Pesquisa por>:\n\t1. Nome\n\t2. Id\n\t3. Numero de Serie\n\t 4. Voltar ao Menu "); scanf("%d",&cond);
					if (cond<1 && cond>4) goto re;
				switch(cond){
					case 1:
						fflush(stdin);
						printf("Nome do Componente: \n");gets(nome);	
						fflush(stdin) ;		
									while(i<=MAX){
									
										if(strcmp(componente[i].com_designacao,nome)==0) {
											printf("Numero de serie: %d\n",componente[i].comp_serie);
											fflush(stdin);
											printf("Designacao: %s\n",componente[i].com_designacao);
											printf("Condicao: %s\n",componente[i].com_condicao);
											fflush(stdin);
											printf("Id fornecedor: %d\n",componente[i].fab_id);
											printf("Id fabricante: %d\n",componente[i].for_id);
											printf("Id posto do trabalho : %d\n",componente[i].post_id);
											fflush(stdin);
											printf("Observacao: %s\n",componente[i].com_obs);
											printf("Tipo: %s\n",componente[i].comp_tipo);
											fflush(stdin);
											printf("Garantia: %d\n",componente[i].comp_garantia);
											j=1;
										}
									i++;
									}
										if(j==0) printf("Nome do Componente nao encontrado\n");
								break;
					case 2:
							printf("Digite Id do Componente: \n");scanf("%d",&n);	
								 									
										if(componente[n].comp_id==n) {
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
										}
										else printf("Nome da empresa nao encontrado\n");
								break;
				case 3: 
						printf("Digite Numero de serie do Componente: \n");scanf("%d",&n);	
							while(i<=MAX){
									
										if(componente[i].comp_serie==n) {
											printf("Numero de serie: %d\n",componente[i].comp_serie);
											fflush(stdin);
											printf("Designacao: %s\n",componente[i].com_designacao);
											printf("Condicao: %s\n",componente[i].com_condicao);
											fflush(stdin);
											printf("Id fornecedor: %d\n",componente[i].fab_id);
											printf("Id fabricante: %d\n",componente[i].for_id);
											printf("Id posto do trabalho : %d\n",componente[i].post_id);
											fflush(stdin);
											printf("Observacao: %s\n",componente[i].com_obs);
											printf("Tipo: %s\n",componente[i].comp_tipo);
											fflush(stdin);
											printf("Garantia: %d\n",componente[i].comp_garantia);
										j=1;
										}
									i++;
									}
										if(j==0) printf("Numero de serie do Componente nao encontrado\n");
								break;
				case 4: 
					Pesquisar();break; 
					
				}	

		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t-->");scanf("%d",&i);
					if(i==1) Pesquisar();
					else goto in;
}

#endif
