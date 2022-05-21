#ifndef _MAPAGAR_H
#define _MAPAGAR_H


#include "declaracao.h"
#include "inicio.h"
#include "Inserir.h"
#include "Listar.h"
#include "Pesquisar.h"
#include "Apagar.h"


//------------------------------Variaveis globais------------------------------------------////

void Apagar(){
	int op;
	printf("------------Alterar campos ---------------------------\n");
		while(1){
			printf("\t\t1. FUNCIONARIOS\t\t 2. EMPRESAS\n\t\t3. POSTO DE TRABALHO\t\t "
					"\t\t4. COMPONENTES\n\t\t5. OPERACAO\t\t6. MENU PRINCIPAL\n:: "); scanf("%d",&op);
				if(op>0 && op<7)break;
				printf("Opcao invalida\n Inseri novamente\n");   
		}
	switch(op){
			case 1:	system("cls");
				cm();break;
			case 2: system("cls");
				apEmpresa(); break;
			case 3: system("cls");
				apPtrabalho();break;			
			case 4:	system("cls");
				apComponente();break;
			case 5: system("cls");
				apOperacao(); break;
			case 6: inicio(); break;
		}
}

#endif
