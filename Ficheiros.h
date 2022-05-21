#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "declaracao.h"

int main(){
	int i=1;
	FILE *ff_id,*ff_nome,*ff_funcao,*ff_descricao;	
	FILE *post_id,*post_ff_id,*post_nome,*post_seccao,*post_descricao,*post_local;
	FILE *comp_id,*comp_serie,*comp_garantia,*comp_post_id,*comp_for_id,*comp_fab_id,*comp_tipo,*comp_condicao,*comp_obs,*comp_designacao,*comp_dat;
	//FILE *dia,*mes,*ano;
	FILE *op_idInterno, *op_idExterno,*op_pt_id, *op_comp_id,*op_emp_id,*op_ff_id,*op_tipo,*op_obs,*dia,*mes,*ano,*op_Cache;
	FILE *em_id,*em_contact, *em_tipo,*em_nome;	
	
	ff_id=fopen("Id.txt","a");
	ff_nome=fopen("Nome.txt","a+");
	ff_funcao=fopen("Funcao.txt","a+");
	ff_descricao=fopen("Descricao.txt","a+");	
	
	///------------------------------------POSTO 
	post_id=fopen("Id.txt","a+");
	post_ff_id=fopen("Id do funcionario.txt","a+");
	post_nome=fopen("Nome.txt","a+");
	post_seccao=fopen("Seccao.txt","a+");
	post_descricao=fopen("Descricao.txt","a+");
	post_local=fopen("Local.txt","a+");
	
	//-------------------------------------------Componente
	comp_id=fopen("Id.txt","a+");
	comp_serie=fopen("Numero de serie.txt","a+");
	comp_garantia=fopen("Garantia.txt","a+");
	comp_post_id=fopen("Id do posto de trabalho.txt","a+");
	comp_for_id=fopen("Id do fornecedor.txt","a+");
	comp_fab_id=fopen("Id do fabricante.txt","a+");
	comp_tipo=fopen("Tipo.txt","a+");
	comp_condicao=fopen("Condicao.txt","a+");
	comp_obs=fopen("OBS.txt","a+");
	comp_dat=fopen("Data de aquisao.txt","a+");
	comp_designacao=fopen("Designacao.txt","a+");
	
	//---------------------------Opercao
		op_idInterno=fopen("Id Interno.txt","a+");
		op_idExterno=fopen("Id Externo.txt","a+");
		op_pt_id=fopen("Id do posto de trabalho.txt","a+");
		op_comp_id=fopen("Id do componente.txt","a+");
		op_emp_id=fopen("Id da empresa.txt","a+");
		op_ff_id=fopen("Id da empresa.txt","a+");
		op_tipo=fopen("Tipo.txt","a+");
		op_obs=fopen("OBS.txt","a+");
		//opdia,*mes,*ano
		op_Cache=fopen("Montante.txt","a+");	
		
	//--------------------Empresa 
		em_id=fopen("Id.txt","a+");
		em_contact=fopen("Contacto.txt","a+");
		em_tipo=fopen("Tipo.txt","a+");
		em_nome=fopen("Nome.txt","a+");		

	
//------------------------Funcionario------------------------------------------------------------------
	if(!(ff_id && ff_nome && ff_funcao && ff_descricao )){
		printf("Fcheiro  de funcionarios nao abertos"); exit(0);
	}
	//if(ff_id==NULL)
	else {
			while(!feof(ff_id && ff_nome && ff_funcao && ff_descricao )){
					i=1;
						fscanf(ff_id,"%d",ff[i].ff_id);
						
						fflush(stdin);
						fgets(ff[i].ff_nome,15,ff_nome);
						fgets(ff[i].ff_nome,15,ff_funcao);
						fgets(ff[i].ff_nome,15,ff_descricao);
						fflush(stdin);
					i++;
			}
			
	
	}
		
	///------------------------------------POSTO 

	if(!(post_id && post_ff_id && post_nome && post_seccao && post_descricao && post_local)){
		printf("Fcheiro  de Posto de trabalho nao abertos"); exit(0);
	}
		
			while(!feof(post_id && post_ff_id && post_nome && post_seccao && post_descricao && post_local)){
				i=1;
					fscanf(post_id,"%d",ptrabalho[i].post_id);
						fflush(stdin);
					fscanf(post_ff_id,"%d",ptrabalho[i].ff_id);
					fflush(stdin);
					fgets(ptrabalho[i].post_nome,15,post_nome);
					fgets(ptrabalho[i].post_descricao,10,post_descricao);
					fgets(ptrabalho[i].post_seccao,20,post_seccao);		
					fgets(ptrabalho[i].post_local,20,post_local);
					fflush(stdin);
				i++;		
			}

	//-------------------------------------------Componente
if(!(comp_id && comp_serie && comp_garantia && comp_post_id && comp_for_id && comp_fab_id && comp_tipo && comp_condicao && comp_obs && comp_designacao && comp_dat)){
		printf("Fcheiro  de Posto de trabalho nao abertos"); exit(0);
}
while (!feof(comp_id && comp_serie && comp_garantia && comp_post_id && comp_for_id && comp_fab_id && comp_tipo && comp_condicao && comp_obs && comp_designacao && comp_dat)){
		i=1;
			fscanf(comp_id,"%d",componente[i].comp_id);
			fscanf(comp_serie,"%d",componente[i].comp_serie);
			fscanf(comp_garantia,"%d",componente[i].comp_garantia);
			fscanf(comp_post_id,"%d",componente[i].post_id);
			fscanf(comp_fab_id,"%d",componente[i].fab_id);
			fscanf(comp_for_id,"%d",componente[i].for_id);
			fscanf(comp_dat,"%d",componente[i].dat_aqui);
			fflush(stdin);
			fgets(componente[i].comp_tipo,comp_tipo);
			fgets(componente[i].com_condicao,comp_condicao);
			fgets(componente[i].com_obs,comp_obs);
			fgets(componente[i].com_designacao,comp_designacao);
			fflush(stdin);
	}
}
	
	
		

















