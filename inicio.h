#ifndef _INICIO_H
#define _INICIO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctype.h"
#include <windows.h>
#include "MenuInserir.h"
#include "MenuAlterar.h"
#include "MenuPesquisar.h"
#include "MenuListar.h"
#include "Consultar.h"
#include"Pesquisar.h"
#include "declaracao.h"
#include "Salvar.h"
#include "Abrir.h"

//void Abrir();


int  inicio(){
//	Abrir();
system("cls");
printf("-----------------Inicio--------------- \n\n");
	int op;
	int ff=0;
	

	printf("-----------------Menu-----------------  \n \n");
	printf("\t Wich your option \t\n\n");
	while(1){
		
		printf("\t \n (1)  Insert   \n "
			   "\t \n (2)  Change \n "
			   "\t \n (3)  Delet  \n"
			   "\t \n (4)  List \n "
			   "\t \n (5)  Search \n"
			   "\t \n (6) Gestor to Component \n"
		       "\t \n (7) Save \n"
			   "\t \n (8) Consult \n"
			   "\t \n (9)  Exit \n \n"
			  );	
		scanf("%d", &op);
			if(op>0 && op<10) break;
			else printf("Option Invalid\n Insert again\n");
	}	
	switch(op){
		case 1: system("cls");
				Inserir();
				break;
		case 2: system("cls");
				Alterar();break;
		case 3: system("cls");
				//Apagar();
				break;
		case 4: system("cls");
				 Listar();
				 break;
		case 5: system("cls");
				Pesquisar();
				break;
		case 6: system("cls");
				Gestao(); break;
		case 7: system("cls");
				Salvar();break;
		case 8: system("cls");
				Consultar(); break;
		case 9: exit(0);
		//default: printf("Error");
	}

}

#endif
