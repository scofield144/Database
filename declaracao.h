#ifndef _DECLARACAO_H
#define _DECLARACAO_H


/*
#include<stdio.h>
#include<stdlib.h>
#include"inicio.h"
#include"Inserir.h"
#include"Alterar.h"
*/
/*#include<iostream>
#include<fstream>
*/



#define MAX 10

//---------------------------------------------------STRUCTS GLOBAIS ====================================================================




	typedef struct f_emp{
	int em_id,em_contact;
	char em_name[15],em_tipo[10];	
}fempresa;

	typedef struct ff {
	int ff_id;
	char ff_nome[15],ff_funcao[10],ff_descricao[50];	
}ffuncionario;

	typedef struct p_trabalho{
	int post_id,ff_id;
	char post_nome[15],post_seccao[10],post_descricao[20],post_local[20];
		//ffuncionario ff_id; ///// chave estrangeira	
}fpost_trabalho;

	typedef struct f_comp{
	int comp_id,comp_serie,comp_garantia, post_id,for_id,fab_id,dat_aqui;//dia,mes,ano;
	char comp_tipo[10],com_condicao[10],com_obs[20],com_designacao[15];
}fcomponente;

	typedef struct data{
	int dia,mes,ano;
}data;

	typedef struct f_op{
	int op_idInterno, op_idExterno,pt_id, comp_id,emp_id,ff_id;//cp_dia,mes,ano;
	char op_tipo[10], op_obs[20];
	int dia,mes,ano;
	float op_Cache;
	//fcomponente comp_id;    /// chave estrangeira	
	//fempresa emp_id;       /// chave estrangeira	
	//ffuncionario ff_id;   /// chave	
}foperacao;

//------------------------------Variaveis globais------------------------------------------------------------------------------------------////

ffuncionario ff[MAX+1];
fpost_trabalho ptrabalho[MAX+1];
data cp_aq[MAX+1], op_cheg[MAX+1], op_said[MAX+1];
data op_Pchegada[MAX+1],op_operac[MAX+1];
fcomponente componente[MAX+1];
fempresa empresa[MAX+1];
foperacao operacao[MAX+1];

int quant_funcionario, quant_empresa, quant_ptrabalho, quant_componente, quant_operacao;
//---------------------------- Funcoes

void Inserir();
void Alterar();
void Apagar();
void Listar();
void Pesquisar();
void Gestao();
int  inicio();
void Consultar();
void Salvar();
void Abrir();
void Beginer();

//---------------------------------------------Alterar ------------------------------------------------------------------

int f();
void apEmpresa();
void apPtrabalho();
void apComponente();
void apOperacao();
void apGestao();


//---------------------------------------------------------------------Al--------------------------------------------------------
void aFuncionario();
void aEmpresa();
void aPtrabalho();
void aComponente();
void aOperacao();
void aGestao();// de componentes
void aFuncionario();

//-----------------------------------------------------------------INSERIR--------------------------------------------------------------
void iFuncionario();
void iEmpresa();
void iPtrabalho();
void iComponente();
void iOperacao();
void iGestao();
// de componentes
void pFuncionario();
void pEmpresa();
void pPtrabalho();
void pComponente();
void pOperacao();
void pGestao();
////-----------------------------------------LISTAR-------------------------------------------------------------------
int lComponente(int x);
//int cm();
///---------------------------------------Apagar-----------------------------------------------------------------

void Gestao(){
}

//-------------------------Variaveis globais

short int x=0,op=0,id=0,n=0,i=0;

#endif

