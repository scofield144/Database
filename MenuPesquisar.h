#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "declaracao.h"
#include "inicio.h"
#include "Pesquisar.h"

void Pesquisar(){
	system("cls");
//	printf("Numero de seccao: ");scanf("%d",se++); /// Numero de vez que um usario voltou ao menu inicial
	int op,qtd,i=1;
	int id;
		printf("_________________Search__________________ \n\n\n");
		printf("_________________Menu Search___________________ \n\n");
	 
		printf(" Which your option: \n");
	
		while(1){
				printf("\n\t1. Company \n \n \n"
					   "\n\t2. Component \n\n"
					   "\n\t3. Main \n\n"
					   "\n\t:: ");
				scanf("%d",&op);
			if(op>0 && op<4) break;
			printf("Opcao invalida\n Inseri novamente\n");
		}
		switch(op){
			case 1:	system("cls");
				pEmpresa(); break;				
			case 2: system("cls");
				pComponente();break;	
			case 3:  system("cls");
				inicio();break;
			default: printf("Option Invalid\n");
		}
}
