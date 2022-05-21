#ifndef _LISTAR_H
#define _LISTAR_H

#include "declaracao.h"

int Vatraso(int i);

int  lComponente(int x){
		in: printf("\n----------------> Listar Componentes <-----------------------------\n");
			i=1;
			int j=1,n=1;;
			switch(x){
				case 1:	
					system("cls");				
					for(;i<=MAX;i++){
						if(op_cheg[i].dia>op_Pchegada[i].dia) Vatraso(i);
							else if(op_cheg[i].mes>op_Pchegada[i].mes) Vatraso(i);
								else 	if(op_cheg[i].ano>op_Pchegada[i].ano) Vatraso(i);
					}
					break;
				case 2:
				
					system("cls");
						printf("\nPostos de trabalho existentes\n");
						for(;n<=MAX;n++){
						
								if(ptrabalho[n].ff_id!=0){
								printf("********** Posto de servico numero *********\n");
									
									printf("\t\tNome: %s\n",ptrabalho[n].post_nome);
									printf("\t\tDescricao: %s\n",ptrabalho[n].post_descricao);
									printf("\t\tSeccao: %s\n",ptrabalho[n].post_seccao);
									printf("\t\tLocal: %s\n",ptrabalho[n].post_local);
									fflush(stdin);	
									printf("\t\tId do funcionario: %d\n",ptrabalho[n].post_id);
									printf("\t\tId do Posto de trabalho: %d\n",ptrabalho[n].ff_id);
									fflush(stdin);
								}
						}
						break;
					
				case 3:
					system("cls");
					break;
				case 4: 
					 Listar();
					break;
			}
		printf("\n\t\t\t\t\t\t\t\t1. Voltar\t 2. Continuar\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
					if(i==1) Listar();
					else goto in;
}
int Vatraso(int i){
		int j=1;
			printf("Nome do Componente: \n");puts(componente[i].com_designacao);
			fflush(stdin);
			printf("Posto de trablho Id: %d\n",componente[i].post_id); 
//-----------------------------------------------------------------busca o nome do posto de trabalho-------------------------------------////
				while(j<=MAX) {
					if(ptrabalho[j].post_id==componente[i].post_id){
						fflush(stdin);
						printf("Posto de trablho: %s",ptrabalho[j].post_nome);
						j=MAX;
					}
				j++;
			}
	return 0;
}
#endif
