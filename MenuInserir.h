#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "declaracao.h"
#include "Pesquisar.h"
#include "inicio.h"
#include "Inserir.h"
#include "Listar.h"


void Inserir(){
	system("cls");
//	printf("Numero de seccao: ");scanf("%d",se++); /// Numero de vez que um usario voltou ao menu inicial
	int op,qtd,i=1;
	int id;
		printf("_________________Inserir dados__________________ \n\n\n");
		printf("_________________Menu Inserir___________________ \n\n");
	 
		printf("Escola uma opcao do menu inserir: \n");
	
		while(1){
				printf("1. Ficha de funcionario \t 2. Ficha de empresa: \n 3. POSTO DE TRABALHO  \t "
				"4. COMPONENTES\t 5. OPERACAO \t 6. MENU PRINCIPAL \n"); scanf("%d",&op);
			if(op>0 && op<7) break;
			printf("Opcao invalida\n Inseri novamente\n");
		}
		switch(op){
			case 1:	system("cls");
				id=0;
				iFuncionario();break;
			case 2: system("cls");
				iEmpresa(); break;
			case 3: system("cls");
				iPtrabalho();break;			
			case 4:	system("cls");
				iComponente();break;
			case 5: system("cls");
				iOperacao(); break;
			case 6:  inicio();break;
			default: printf("Nenhuma opcao invalida\n");
		}
}
