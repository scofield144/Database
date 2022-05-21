#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "declaracao.h"
#include"inicio.h"
#include "Alterar.h"

//#include "Inserir.h"

//------------------------------Variaveis globais------------------------------------------////

void Alterar(){
	int op;
	printf("------------ Change camp ---------------------------\n");
		while(1){
			printf("\t\t1. FUNCIONARIOS\t\t 2. COMPANY\n\t\t3. JOB \t\t "
					"\t\t4. COMPONENTS\n\t\t5. OPERATION\t\t6. MAIN\n:: "); scanf("%d",&op);
				if(op>0 && op<7) break;
				printf("Option invalid\n Insert again\n");   
		}
	switch(op){
			case 1:	system("cls");
				aFuncionario();break;
			case 2: system("cls");
				aEmpresa(); break;
			case 3: system("cls");
				aPtrabalho();break;			
			case 4:	system("cls");
				aComponente();break;
			case 5: system("cls");
				aOperacao(); break;
			case 6: inicio(); break;
			default: printf("Nenhuma opcao invalida\n");
		}
}
