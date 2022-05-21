#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "declaracao.h"
#include "inicio.h"
#include "Inserir.h"
#include"Pesquisar.h"
#include "Listar.h"



void Listar(){
	system("cls");
//	printf("Numero de seccao: ");scanf("%d",se++); /// Numero de vez que um usario voltou ao menu inicial
	int op,qtd,i=1;
	int id;
		printf("_________________LIST DATES__________________ \n\n\n");
		printf("_________________ MAIN LIST___________________ \n\n");
	 
		printf("Wich you option: \n");
					
		while(1){
				printf("\n\t1. Component the after preview date\n"
					   "\n\t2. Full list by homework\n"
					   "\n\t3. Only list by homework\n"
					   "\n\t4. Main\n:: "); scanf("%d",&op);
			if(op>0 && op<5) break;
			printf("Opcao invalida\n Inseri novamente\n");
		}
		switch(op){
			case 1:	system("cls");
				lComponente(1);break;					
			case 2: system("cls");
				lComponente(2);break;	
			case 3:  system("cls");
				lComponente(3);break;	
			case 4: inicio(); break;
		}
}
