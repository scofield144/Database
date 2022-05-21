#include "declaracao.h"
#include "inicio.h"


void Abrir(){

	//Abir prara funcion�rios
	//Salvar prara funcion�rios	
	FILE *id_ff, *id_ff_r, *nome_ff, *funcao_ff, *descricao_ff, *dados_ff;//-------------- Funcionario
	FILE *id_emp, *nome_emp, *contacto_emp, *tipo_emp, *dados_emp;   //-------------- Empresa
	FILE *id_ptr, *nome_ptr, *seccao_ptr, *descricao_ptr, *local_ptr, *idp_ff;
	FILE *id_comp, *serie_comp, *garantia_comp, *comp_id_comp, *fabricante_id_comp,*fornecedor_id_comp,*data_comp,*tipo_comp,*condicao_comp,*obs_comp,*desiganacao_comp;
	FILE *id_interno_op, *id_externo_op, *id_pt_op, *id_emp_op, *id_componente_op, *id_funcionario_op,*tipo_op,*obs_op,*dia_op,*mes_op,*ano_op,*cache_op;
	FILE *dia_said,*mes_said,*ano_said,*dia_cp,*mes_cp,*ano_cp,*dia_ch,*mes_ch,*ano_ch,*dia_p,*mes_p,*ano_p;
			
	id_ff = fopen("f_funcionario/id.txt", "r");
	nome_ff = fopen("f_funcionario/nome.txt", "r");
	funcao_ff = fopen("f_funcionario/funcao.txt", "r");
	descricao_ff = fopen("f_funcionario/descricao.txt", "r");
	dados_ff = fopen("f_funcionario/.txt", "r");
//-----------------------------------------Empresa----------------------------------------------------------	
	//abre o ficheiro id.txt dentro da pasta f_empresa se existirem
	id_emp = fopen("f_empresa/id.txt", "r");
	nome_emp = fopen("f_empresa/nome.txt", "r");
	contacto_emp = fopen("f_empresa/contacto.txt", "r");
	tipo_emp = fopen("f_empresa/tipo.txt", "r");
	dados_emp = fopen("f_empresa/.txt", "r");
	
//-----------------------------------------Posto ----------------------------------------------------------	
	//abre o ficheiro id.txt dentro da pasta f_ptrabalho se existirem
	id_ptr = fopen("f_ptrabalho/id.txt", "r");
	nome_ptr = fopen("f_ptrabalho/nome.txt", "r");
	seccao_ptr = fopen("f_ptrabalho/seccao.txt", "r");
	descricao_ptr = fopen("f_ptrabalho/descricao.txt", "r");
    local_ptr = fopen("f_ptrabalho/local.txt", "r");
    idp_ff = fopen("f_ptrabalho/Funcionario.txt", "r");
			

//-----------------------------------------Componente ----------------------------------------------------------	

	id_comp = fopen("f_componente/id.txt", "r");
	serie_comp = fopen("f_componente/serie.txt", "r");
	garantia_comp = fopen("f_componente/garantia.txt", "r");
	comp_id_comp = fopen("f_componente/posto_id.txt", "r");
    fabricante_id_comp = fopen("f_componente/fabricante.txt", "r");
	fornecedor_id_comp = fopen("f_componente/fornecedor.txt", "r");
	data_comp = fopen("f_componente/data.txt", "r");
	tipo_comp = fopen("f_componente/tipo.txt", "r");
	condicao_comp = fopen("f_componente/condicao.txt", "r");
	obs_comp = fopen("f_componente/observacao.txt", "r");
	desiganacao_comp = fopen("f_componente/desinacao.txt", "r");
	
//-----------------------------------------Componente ----------------------------------------------------------	
	
	id_interno_op = fopen("f_operacao/id_intenro.txt", "r");
	id_externo_op = fopen("f_operacao/id_Externo.txt", "r");
	id_pt_op = fopen("f_operacao/id_posto_de_trabalho.txt", "r");
	id_componente_op = fopen("f_operacao/id_componente.txt", "r");
	id_emp_op = fopen("f_operacao/id_empresa.txt", "r");
    id_funcionario_op = fopen("f_operacao/id_fabricante.txt", "r");
	tipo_op = fopen("f_operacao/tipo_operacao.txt", "r");
	obs_op = fopen("f_operacao/ano.txt", "r");
	
	dia_said = fopen("f_operacao/Saida dia.txt", "r");
	mes_said = fopen("f_operacao/Saidmes.txt", "r");
	ano_said = fopen("f_operacao/Saida ano.txt", "r");
	
	dia_cp=fopen("f_operacao/Componente dia.txt", "r");
	mes_cp=fopen("f_operacao/Componente mes.txt", "r");
	ano_cp= fopen("f_operacao/Componente ano.txt", "r");
	
	dia_ch=fopen("f_operacao/Componente dia de chegada.txt", "r");
	mes_ch=fopen("f_operacao/Componente mes de chegada.txt", "r");
	ano_ch=fopen("f_operacao/Componente ano de chegada.txt", "r");
	cache_op = fopen("f_operacao/cache.txt", "r");
	
	dia_p=fopen("f_operacao/Componente dia prevista de chegada.txt", "r");
	mes_p=fopen("f_operacao/Componente mes prevista de chegada.txt", "r");
	ano_p=fopen("f_operacao/Componente ano prevista de chegada.txt", "r");

	cache_op = fopen("f_operacao/cache.txt", "r");
	
	
//------------------------Lendo funcinairo---------------------------------------------------------------
	if(id_ff == NULL && nome_ff == NULL && funcao_ff == NULL && descricao_ff == NULL && dados_ff==NULL){
		printf("Base de  vazia.\n");
		inicio();
	}
	
		while(!feof(id_ff)){
				
			fscanf(id_ff,"%d",&ff[i+1].ff_id);
			
			fflush(stdin);
			fgets(ff[i+1].ff_nome,MAX,nome_ff);
			fgets(ff[i+1].ff_funcao,MAX,funcao_ff);
			fgets(ff[i+1].ff_descricao,MAX,descricao_ff);
			i++;	
		}
		
		fclose(id_ff);fclose(nome_ff);fclose(funcao_ff);fclose(descricao_ff);fclose(dados_ff);
i=0;
int xc=1;

//---------------------------------------Empresa ---------------------------------------------------------------
	if(id_emp == NULL && nome_emp == NULL && contacto_emp == NULL && tipo_emp == NULL){
		printf("\n\nErro empresa\n");
		inicio();
	}
		for(;!feof(id_emp);i++){
			
			fscanf(id_emp,"%d", &empresa[i+1].em_id);
			fscanf(contacto_emp,"%d", &empresa[i+1].em_contact);
			fgets(empresa[i+1].em_name,MAX,nome_emp);
			fgets(empresa[i+1].em_tipo,MAX,tipo_emp);
			
			fflush(stdin);	
		}
	
	fclose(id_emp); fclose(nome_emp); fclose(contacto_emp); fclose(tipo_emp); fclose(dados_emp);


//---------------------------------------Empresa ---------------------------------------------------------------
	if(id_ptr == NULL && nome_ptr == NULL && seccao_ptr == NULL && descricao_ptr == NULL && local_ptr == NULL && idp_ff == NULL){
		printf("\n\nErro posto\n");
		inicio();
	}
	
		for(i=0;!feof(id_ptr);i++){
			fflush(stdin);
			fscanf(id_ptr, "%d", &ptrabalho[i+1].post_id);
			fscanf(idp_ff,"%d", &ptrabalho[i+1].ff_id);
			fflush(stdin);		
			fscanf(nome_ptr, "%s", ptrabalho[i+1].post_nome);					
			fscanf(seccao_ptr, "%s", ptrabalho[i+1].post_seccao);
			fscanf(descricao_ptr, "%s", ptrabalho[i+1].post_descricao);
            fscanf(local_ptr, "%s", ptrabalho[i+1].post_local);
		}
		
	fclose(id_ptr);fclose(nome_ptr);fclose(seccao_ptr);fclose(descricao_ptr);fclose(local_ptr);fclose(idp_ff);
		
	if(id_comp == NULL && serie_comp == NULL && garantia_comp == NULL && comp_id_comp == NULL  && fabricante_id_comp == NULL && fornecedor_id_comp == NULL && data_comp == NULL && tipo_comp == NULL && condicao_comp == NULL && obs_comp == NULL && desiganacao_comp == NULL && dia_said==NULL && mes_said==NULL && ano_said==NULL && dia_cp==NULL && mes_cp==NULL && ano_cp==NULL && dia_ch==NULL && mes_ch==NULL && ano_ch==NULL && dia_p==NULL && mes_p==NULL && ano_p==NULL){
			printf("erro componente\n");
			inicio();
		}
		for(i=0;!feof(id_comp);i++){
				fflush(stdin);	
				fscanf(id_comp, "%d", &componente[i+1].comp_id);			
				fscanf(serie_comp, "%d", &componente[i+1].comp_serie);					
				fscanf(garantia_comp, "%d",&componente[i+1].comp_garantia);
				fscanf(comp_id_comp, "%d",&componente[i+1].post_id);
                fscanf(fabricante_id_comp, "%d",&componente[i+1].fab_id);
				fscanf(fornecedor_id_comp, "%d", &componente[i+1].for_id);
				fscanf(data_comp, "%d", &componente[i+1].dat_aqui);
				fflush(stdin);	
				fscanf(tipo_comp, "%s", componente[i+1].comp_tipo);
				fscanf(condicao_comp, "%s", componente[i+1].com_condicao);
				fscanf(obs_comp, "%s", componente[i+1].com_obs);
				fscanf(desiganacao_comp, "%s", componente[i+1].com_designacao);
		}
		fclose(id_comp);fclose(serie_comp);fclose(garantia_comp);fclose(comp_id_comp);fclose(fabricante_id_comp);fclose(fornecedor_id_comp);fclose(data_comp);fclose(tipo_comp);fclose(condicao_comp);fclose(obs_comp);fclose(desiganacao_comp);
		
		
	if(id_interno_op == NULL && id_externo_op == NULL && id_pt_op == NULL && id_emp_op == NULL && id_componente_op == NULL  && id_funcionario_op == NULL && tipo_op == NULL && obs_op == NULL && cache_op == NULL){
		printf("erro operacao\n");
		inicio();
	}

	for(i=0;!feof(id_interno_op);i++){

				fscanf(id_interno_op, "%d", &operacao[i+1].op_idInterno);			
				fscanf(id_externo_op, "%d", &operacao[i+1].op_idExterno);					
				fscanf(id_pt_op, "%d", &operacao[i+1].pt_id);
				fscanf(cache_op, "%f", &operacao[i+1].op_Cache);
				fscanf(id_emp_op, "%d", &operacao[i+1].emp_id);
				printf("Helooo");		
				fscanf(dia_said, "%d", &op_said[i+1].dia);
				fscanf(mes_said, "%d", &op_said[i+1].mes);
				fscanf(ano_said, "%d", &op_said[i+1].ano);
				
				fscanf(dia_cp, "%d", &op_cheg[i+1].dia);
				fscanf(mes_cp, "%d", &op_cheg[i+1].mes);
				fscanf(ano_cp, "%d", &op_cheg[i+1].ano);
				
				fscanf(dia_p, "%d", &op_Pchegada[i+1].dia);
				fscanf(mes_p, "%d", &op_Pchegada[i+1].mes);
				fscanf(ano_p, "%d", &op_Pchegada[i+1].ano);			
				
				fscanf(id_componente_op, "%d", &operacao[i+1].comp_id);
                fscanf(id_funcionario_op, "%d", &operacao[i+1].ff_id);
                fflush(stdin);
				fscanf(tipo_op, "%s", operacao[i+1].op_tipo);
				fscanf(obs_op, "%s", operacao[i+1].op_obs);
	}
		fclose(id_interno_op);fclose(id_externo_op);fclose(id_pt_op);fclose(id_emp_op);fclose(id_componente_op);fclose(id_funcionario_op);fclose(tipo_op);fclose(obs_op);fclose(cache_op);
	fclose(dia_said);fclose(mes_said);fclose(ano_said);fclose(dia_cp);fclose(mes_cp);fclose(ano_cp);fclose(dia_ch);fclose(mes_ch);
		fclose(ano_ch);fclose(dia_p);fclose(mes_p);fclose(ano_p);
		printf("WELL COME\n\n");
	
	inicio();
}
