#include "declaracao.h"
#include "inicio.h"


void Salvar(){

	//Salvar prara funcion�rios
	//Salvar prara funcion�rios	
	FILE *id_ff, *id_ff_r, *nome_ff, *funcao_ff, *descricao_ff, *dados_ff;
	//Cria��o dos ficheiros fim	
	short int contador_funcionario,aux[MAX];
		
	
	printf("\n______Guardando ficheiros______\n\n");	
	//abre o ficheiro id.txt dentro da pasta f_funcionario se existirem
	id_ff = fopen("f_funcionario/id.txt", "w");
	nome_ff = fopen("f_funcionario/nome.txt", "w");
	funcao_ff = fopen("f_funcionario/funcao.txt", "w");
	descricao_ff = fopen("f_funcionario/descricao.txt", "w");
	dados_ff = fopen("f_funcionario/.txt", "w");
	//abre o ficheiro id.txt dentro da pasta f_funcionario se existirem fim
	
	// contador_funcionario ferifica se j� se realizou a primeira inser��o nos ficheiros, mas inicializa com 1 de verdadeiro
	contador_funcionario=1;	
	// Aqui � verificado se os ficheiros s�o nulos, caso estejam nulos ou n�o existam, ser�o criados
	// Esse bloco s� � executado quando os ficheiros n�o existem, depois de serem criados e adicionados ficheiros, deixar� de ser executado
	if(id_ff == NULL && nome_ff == NULL && funcao_ff == NULL && descricao_ff == NULL && dados_ff==NULL){
		printf("Ficheiros criados com sucesso!");
		CreateDirectory("f_funcionario", NULL);
		id_ff = fopen("f_funcionario/id.txt", "w");
		nome_ff = fopen("f_funcionario/nome.txt", "w");
		funcao_ff = fopen("f_funcionario/funcao.txt", "w");
		descricao_ff = fopen("f_funcionario/descricao.txt", "w");
		dados_ff = fopen("f_funcionario/.txt", "w");	
		//para a primeira incers�o o contador_funcionario recebe 0 pra depois ser verificado.
		contador_funcionario=0;
	}
//---------------Pega a ultima posicao do vetor funcionario-------------------------------------------------------------------------
	for(i=1;i<=MAX;i++){
		if(ff[i].ff_id!=0) quant_funcionario=ff[i].ff_id;
	}
//---------------Pega a ultima posicao do vetor funcionario-------------------------------------------------------------------------

	//	if(contador_funcionario==0){
		// o verificador � 0, logo � a primeira inser��o nos ficheiros
		for(i=0; i<quant_funcionario;i++){
			
			// Na primeira volta do ciclo de repeticao, ou seja, quando i=0 vai adicionar os seguintes  no ficheiro sem saltar linhas
		//	if(i==0)
		//	{							
				fprintf(id_ff, "%d\n", ff[i+1].ff_id);			
				fprintf(nome_ff, "%s\n", ff[i+1].ff_nome);					
				fprintf(funcao_ff, "%s\n", ff[i+1].ff_funcao);
				fprintf(descricao_ff, "%s\n", ff[i+1].ff_descricao);
		}
		printf("Dados %d funcionarios guardados!", quant_funcionario);
		// Aqui fecha todos os ficheiros abertos
		fclose(id_ff);fclose(nome_ff);fclose(funcao_ff);fclose(descricao_ff);fclose(dados_ff);
		contador_funcionario=1;

	
	//Salvar prara empresas
	//Salvar prara empresas	
	FILE *id_emp, *nome_emp, *contacto_emp, *tipo_emp, *dados_emp;
	//Cria??o dos ficheiros fim	
	int contador_empresa, j;
	
	
	printf("\n______Guardando ficheiros______\n\n");	
	//abre o ficheiro id.txt dentro da pasta f_empresa se existirem
	id_emp = fopen("f_empresa/id.txt", "w");
	nome_emp = fopen("f_empresa/nome.txt", "w");
	contacto_emp = fopen("f_empresa/contacto.txt", "w");
	tipo_emp = fopen("f_empresa/tipo.txt", "w");
	dados_emp = fopen("f_empresa/.txt", "w");
	//abre o ficheiro id.txt dentro da pasta f_empresa se existirem fim
	
	// contador_empresa ferifica se j? se realizou a primeira inser??o nos ficheiros, mas inicializa com 1 de verdadeiro
	contador_empresa=1;	
	// Aqui ? verificado se os ficheiros s?o nulos, caso estejam nulos ou n?o existam, ser?o criados
	// Esse bloco s? ? executado quando os ficheiros n?o existem, depois de serem criados e adicionados ficheiros, deixar? de ser executado
	if(id_emp == NULL && nome_emp == NULL && contacto_emp == NULL && tipo_emp == NULL && dados_emp==NULL){
		printf("Ficheiros criados com sucesso!");
		CreateDirectory("f_empresa", NULL);
		id_emp = fopen("f_empresa/id.txt", "w");
		nome_emp = fopen("f_empresa/nome.txt", "w");
		contacto_emp = fopen("f_empresa/contacto.txt", "w");
		tipo_emp = fopen("f_empresa/tipo.txt", "w");
		dados_emp = fopen("f_empresa/.txt", "w");	
		//para a primeira incers?o o contador_empresa recebe 0 pra depois ser verificado.
		contador_empresa=0;
	}

//---------------Pega a ultima posicao do vetor empresa-------------------------------------------------------------------------
	for(i=0;i<=MAX;i++){
		
		if(empresa[i+1].em_id!='\0') quant_empresa=empresa[i+1].em_id;
	}
//---------------Pega a ultima posicao do vetor empresa-------------------------------------------------------------------------

	//	if(contador_empresa==0){
		// o verificador ? 0, logo ? a primeira inser??o nos ficheiros
		for(j=0; j<quant_empresa;j++){
								
				fprintf(id_emp, "%d\n", empresa[j+1].em_id);			
				fprintf(contacto_emp, "%d\n", empresa[j+1].em_contact);
				fflush(stdin);
				fprintf(nome_emp, "%s\n", empresa[j+1].em_name);					
				fprintf(tipo_emp, "%s\n", empresa[j+1].em_tipo);
		}
		printf("Dados %d empresas guardados!", quant_empresa);
		// Aqui fecha todos os ficheiros abertos
		fclose(id_emp);fclose(nome_emp);fclose(contacto_emp);fclose(tipo_emp);fclose(dados_emp);
		contador_empresa=1;
		
	//Salvar prara Posto de trabalho
	//Salvar prara Posto de trabalho	
	FILE *id_ptr, *nome_ptr, *seccao_ptr, *descricao_ptr, *local_ptr, *idp_ff;
	//Cria??o dos ficheiros fim	
	int contador_ptrabalho, h;
		
	
	printf("\n______Guardando ficheiros______\n\n");	
	//abre o ficheiro id.txt dentro da pasta f_ptrabalho se existirem
	id_ptr = fopen("f_ptrabalho/id.txt", "w");
	nome_ptr = fopen("f_ptrabalho/nome.txt", "w");
	seccao_ptr = fopen("f_ptrabalho/seccao.txt", "w");
	descricao_ptr = fopen("f_ptrabalho/descricao.txt", "w");
    local_ptr = fopen("f_ptrabalho/local.txt", "w");
	idp_ff = fopen("f_ptrabalho/Funcionario.txt", "w");
	//abre o ficheiro id.txt dentro da pasta f_ptrabalho se existirem fim
	
	// contador_ptrabalho ferifica se h? se realizou a primeira inser??o nos ficheiros, mas inicializa com 1 de verdadeiro
	contador_ptrabalho=1;	
	// Aqui ? verificado se os ficheiros s?o nulos, caso esteham nulos ou n?o existam, ser?o criados
	// Esse bloco s? ? executado quando os ficheiros n?o existem, depois de serem criados e adicionados ficheiros, deixar? de ser executado
	if(id_ptr == NULL && nome_ptr == NULL && seccao_ptr == NULL && descricao_ptr == NULL && local_ptr == NULL && idp_ff==NULL){
		printf("Ficheiros criados com sucesso!");
		CreateDirectory("f_ptrabalho", NULL);
		id_ptr = fopen("f_ptrabalho/id.txt", "w");
		nome_ptr = fopen("f_ptrabalho/nome.txt", "w");
		seccao_ptr = fopen("f_ptrabalho/seccao.txt", "w");
		descricao_ptr = fopen("f_ptrabalho/descricao.txt", "w");
        local_ptr = fopen("f_ptrabalho/local.txt", "w");
		idp_ff = fopen("f_ptrabalho/Funcionario.txt", "w");
		//para a primeira incers?o o contador_ptrabalho recebe 0 pra depois ser verificado.
		contador_ptrabalho=0;
	}
	
	
	
//---------------Pega a ultima posicao do vetor posto-------------------------------------------------------------------------
	for(i=0;i<=MAX;i++){
		
		if(ptrabalho[i+1].post_id!='\0') quant_ptrabalho=ptrabalho[i+1].post_id;
	}
//---------------Pega a ultima posicao do vetor posto-------------------------------------------------------------------------

	
	//	if(contador_ptrabalho==0){
		// o verificador ? 0, logo ? a primeira inser??o nos ficheiros
		for(h=0; h<quant_ptrabalho;h++){
			
			// Na primeira volta do ciclo de repeticao, ou seha, quando h=0 vai adicionar os seguintes  no ficheiro sem saltar linhas
		//	if(h==0)
		//	{							
				fprintf(id_ptr, "%d\n", ptrabalho[h+1].post_id);
				fprintf(idp_ff, "%d\n", ptrabalho[h+1].ff_id);	
				fflush(stdin);
				fprintf(nome_ptr, "%s\n", ptrabalho[h+1].post_nome);					
				fprintf(seccao_ptr, "%s\n", ptrabalho[h+1].post_seccao);
				fprintf(descricao_ptr, "%s\n", ptrabalho[h+1].post_descricao);
                fprintf(local_ptr, "%s\n", ptrabalho[h+1].post_local);
             
		}
		printf("Dados %d Posto de trabalho guardados!", quant_ptrabalho);
		// Aqui fecha todos os ficheiros abertos
		fclose(id_ptr);fclose(nome_ptr);fclose(seccao_ptr);fclose(descricao_ptr);fclose(idp_ff);fclose(local_ptr);
		contador_ptrabalho=1;

	//Salvar prara Componentes
	//Salvar prara Componentes	
	FILE *id_comp, *serie_comp, *garantia_comp, *comp_id_comp, *fabricante_id_comp,*fornecedor_id_comp,*data_comp,*tipo_comp,*condicao_comp,*obs_comp,*desiganacao_comp, *dados_comp;
	//Cria??o dos ficheiros fim	
	int contador_componente, c;
		
	
	printf("\n______Guardando ficheiros______\n\n");	
	//abre o ficheiro id.txt dentro da pasta f_componente se existirem
	id_comp = fopen("f_componente/id.txt", "w");
	serie_comp = fopen("f_componente/serie.txt", "w");
	garantia_comp = fopen("f_componente/garantia.txt", "w");
	comp_id_comp = fopen("f_componente/posto_id.txt", "w");
    fabricante_id_comp = fopen("f_componente/fabricante.txt", "w");
	fornecedor_id_comp = fopen("f_componente/fornecedor.txt", "w");
	data_comp = fopen("f_componente/data.txt", "w");
	tipo_comp = fopen("f_componente/tipo.txt", "w");
	condicao_comp = fopen("f_componente/condicao.txt", "w");
	obs_comp = fopen("f_componente/observacao.txt", "w");
	desiganacao_comp = fopen("f_componente/desinacao.txt", "w");
	dados_comp = fopen("f_componente/.txt", "w");
	//abre o ficheiro id.txt dentro da pasta f_componente se existirem fim
	
	// contador_componente ferifica se h? se realizou a primeira inser??o nos ficheiros, mas inicializa com 1 de verdadeiro
	contador_componente=1;	
	// Aqui ? verificado se os ficheiros s?o nulos, caso esteham nulos ou n?o existam, ser?o criados
	// Esse bloco s? ? executado quando os ficheiros n?o existem, depois de serem criados e adicionados ficheiros, deixar? de ser executado
	if(id_comp == NULL && serie_comp == NULL && garantia_comp == NULL && comp_id_comp == NULL  && fabricante_id_comp == NULL && fornecedor_id_comp == NULL && data_comp == NULL && tipo_comp == NULL && condicao_comp == NULL && obs_comp == NULL && desiganacao_comp == NULL && dados_comp==NULL){
		printf("Ficheiros criados com sucesso!");
		CreateDirectory("f_componente", NULL);
		id_comp = fopen("f_componente/id.txt", "w");
		serie_comp = fopen("f_componente/serie.txt", "w");
		garantia_comp = fopen("f_componente/garantia.txt", "w");
		comp_id_comp = fopen("f_componente/posto_id.txt", "w");
        fabricante_id_comp = fopen("f_componente/fabricante.txt", "w");
		fornecedor_id_comp = fopen("f_componente/fornecedor.txt", "w");
		data_comp = fopen("f_componente/data.txt", "w");
		tipo_comp = fopen("f_componente/tipo.txt", "w");
		condicao_comp = fopen("f_componente/condicao.txt", "w");
		obs_comp = fopen("f_componente/observacao.txt", "w");
		desiganacao_comp = fopen("f_componente/desinacao.txt", "w");
		dados_comp = fopen("f_componente/.txt", "w");	
		//para a primeira incers?o o contador_componente recebe 0 pra depois ser verificado.
		contador_componente=0;
	}
	
	
	
//---------------Pega a ultima posicao do vetor componente-------------------------------------------------------------------------
	for(i=0;i<=MAX;i++){
		
		if(componente[i+1].comp_id!='\0') quant_componente=componente[i+1].comp_id;
	}
//---------------Pega a ultima posicao do vetor componente-------------------------------------------------------------------------

	
	//	if(contador_componente==0){
		// o verificador ? 0, logo ? a primeira inser??o nos ficheiros
		for(c=0; c<quant_componente;c++){
				fflush(stdin);	
				fprintf(id_comp, "%d\n", componente[c+1].comp_id);			
				fprintf(serie_comp, "%d\n", componente[c+1].comp_serie);					
				fprintf(garantia_comp, "%d\n", componente[c+1].comp_garantia);
				fprintf(comp_id_comp, "%d\n", componente[c+1].post_id);
                fprintf(fabricante_id_comp, "%d\n", componente[c+1].fab_id);
				fprintf(fornecedor_id_comp, "%d\n", componente[c+1].for_id);
				fprintf(data_comp, "%d\n", componente[c+1].dat_aqui);
				fflush(stdin);
				fprintf(tipo_comp, "%s\n", componente[c+1].comp_tipo);
				fprintf(condicao_comp, "%s\n", componente[c+1].com_condicao);
				fprintf(obs_comp, "%s\n", componente[c+1].com_obs);
				fprintf(desiganacao_comp, "%s\n", componente[c+1].com_designacao);
		
		}
		printf("Dados %d Componentes guardados!", quant_componente);
		// Aqui fecha todos os ficheiros abertos
		fclose(id_comp);fclose(serie_comp);fclose(garantia_comp);fclose(comp_id_comp);fclose(fabricante_id_comp);fclose(fornecedor_id_comp);fclose(data_comp);fclose(tipo_comp);fclose(condicao_comp);fclose(obs_comp);fclose(desiganacao_comp);fclose(dados_comp);
		contador_componente=1;
	
//Salvar prara operacaos
	//Salvar prara operacaos	
	FILE *id_interno_op, *id_externo_op, *id_pt_op, *id_emp_op, *id_componente_op, *id_funcionario_op,*tipo_op,*obs_op,*cache_op;
	FILE *dia_said,*mes_said,*ano_said,*dia_cp,*mes_cp,*ano_cp,*dia_ch,*mes_ch,*ano_ch,*dia_p,*mes_p,*ano_p;
	
	//Cria??o dos ficheiros fim	
	int contador_operacao, op;
		
	
	printf("\n______Guardando ficheiros______\n\n");	
	//abre o ficheiro id_intenro.txt dentro da pasta f_operacao se existirem
	id_interno_op = fopen("f_operacao/id_intenro.txt", "w");
	id_externo_op = fopen("f_operacao/id_Externo.txt", "w");
	id_pt_op = fopen("f_operacao/id_posto_de_trabalho.txt", "w");
	id_componente_op = fopen("f_operacao/id_componente.txt", "w");
	id_emp_op = fopen("f_operacao/id_empresa.txt", "w");
    id_funcionario_op = fopen("f_operacao/id_fabricante.txt", "w");
	tipo_op = fopen("f_operacao/tipo_operacao.txt", "w");
	obs_op = fopen("f_operacao/ano.txt", "w");
	 
	dia_said = fopen("f_operacao/Saida dia.txt", "w");
	mes_said = fopen("f_operacao/Saidmes.txt", "w");
	ano_said = fopen("f_operacao/Saida ano.txt", "w");
	
	dia_cp=fopen("f_operacao/Componente dia.txt", "w");
	mes_cp=fopen("f_operacao/Componente mes.txt", "w");
	ano_cp= fopen("f_operacao/Componente ano.txt", "w");
	
	dia_ch=fopen("f_operacao/Componente dia de chegada.txt", "w");
	mes_ch=fopen("f_operacao/Componente mes de chegada.txt", "w");
	ano_ch=fopen("f_operacao/Componente ano de chegada.txt", "w");
	cache_op = fopen("f_operacao/cache.txt", "w");
	
	dia_p=fopen("f_operacao/Componente dia prevista de chegada.txt", "w");
	mes_p=fopen("f_operacao/Componente mes prevista de chegada.txt", "w");
	ano_p=fopen("f_operacao/Componente ano prevista de chegada.txt", "w");

	
	cache_op = fopen("f_operacao/cache.txt", "w");
	
	//abre o ficheiro id_intenro.txt dentro da pasta f_operacao se existirem fim
	
	// contador_operacao ferifica se h? se realizou a primeira inser??o nos ficheiros, mas inicializa com 1 de verdadeiro
	contador_operacao=1;	
	// Aqui ? verificado se os ficheiros s?o nulos, caso esteham nulos ou n?o existam, ser?o criados
	// Esse bloco s? ? executado quando os ficheiros n?o existem, depois de serem criados e adicionados ficheiros, deixar? de ser executado
	if(id_interno_op == NULL && id_externo_op == NULL && id_pt_op == NULL && id_emp_op == NULL && id_componente_op == NULL  && id_funcionario_op == NULL && tipo_op == NULL && obs_op == NULL && cache_op == NULL && dia_said==NULL && mes_said==NULL && ano_said==NULL && dia_cp==NULL && mes_cp==NULL && ano_cp==NULL && dia_ch==NULL && mes_ch==NULL && ano_ch==NULL && dia_p==NULL && mes_p==NULL && ano_p==NULL){
		printf("Ficheiros criados com sucesso!");
		CreateDirectory("f_operacao", NULL);
		id_interno_op = fopen("f_operacao/id_intenro.txt", "w");
		id_externo_op = fopen("f_operacao/id_Externo.txt", "w");
		id_pt_op = fopen("f_operacao/id_posto_de_trabalho.txt", "w");
		id_componente_op = fopen("f_operacao/id_componente.txt", "w");
		id_emp_op = fopen("f_operacao/id_empresa.txt", "w");
        id_funcionario_op = fopen("f_operacao/id_fabricante.txt", "w");
		tipo_op = fopen("f_operacao/tipo_operacao.txt", "w");
		obs_op = fopen("f_operacao/ano.txt", "w");
		
		dia_said = fopen("f_operacao/Saida dia.txt", "w");
		mes_said = fopen("f_operacao/Saidmes.txt", "w");
		ano_said = fopen("f_operacao/Saida ano.txt", "w");
		
		dia_cp=fopen("f_operacao/Componente dia.txt", "w");
		mes_cp=fopen("f_operacao/Componente mes.txt", "w");
		ano_cp= fopen("f_operacao/Componente ano.txt", "w");
		
		dia_ch=fopen("f_operacao/Componente dia de chegada.txt", "w");
		mes_ch=fopen("f_operacao/Componente mes de chegada.txt", "w");
		ano_ch=fopen("f_operacao/Componente ano de chegada.txt", "w");
	
		dia_p=fopen("f_operacao/Componente dia prevista de chegada.txt", "w");
		mes_p=fopen("f_operacao/Componente mes prevista de chegada.txt", "w");
		ano_p=fopen("f_operacao/Componente ano prevista de chegada.txt", "w");
		cache_op = fopen("f_operacao/cache.txt", "w");
		
	
		//para a primeira incers?o o contador_operacao recebe 0 pra depois ser verificado.
		contador_operacao=0;
	}
	
//---------------Pega a ultima posicao do vetor componente-------------------------------------------------------------------------
	for(i=0;i<=MAX;i++){
		
		if(operacao[i+1].op_idInterno!='\0') quant_operacao=operacao[i+1].op_idInterno;
		printf("%i\n",quant_operacao);
	
	}
//---------------Pega a ultima posicao do vetor componente-------------------------------------------------------------------------
		for(op=0; op<quant_operacao;op++){
				fflush(stdin);
				fprintf(dia_said, "%d\n", op_said[op+1].dia);
				fprintf(mes_said, "%d\n", op_said[op+1].mes);
				fprintf(ano_said, "%d\n", op_said[op+1].ano);
				
				fprintf(dia_cp, "%d\n", op_cheg[op+1].dia);
				fprintf(mes_cp, "%d\n", op_cheg[op+1].mes);
				fprintf(ano_cp, "%d\n", op_cheg[op+1].ano);
				
				fprintf(dia_p, "%d\n", op_Pchegada[op+1].dia);
				fprintf(mes_p, "%d\n", op_Pchegada[op+1].mes);
				fprintf(ano_p, "%d\n", op_Pchegada[op+1].ano);			
				
				fprintf(cache_op, "%f\n", operacao[op+1].op_Cache);				
				fprintf(id_interno_op, "%d\n", operacao[op+1].op_idInterno);			
				fprintf(id_externo_op, "%d\n", operacao[op+1].op_idExterno);					
				fprintf(id_pt_op, "%d\n", operacao[op+1].pt_id);
				fprintf(id_emp_op, "%d\n", operacao[op+1].emp_id);
				fprintf(id_componente_op, "%d\n", operacao[op+1].comp_id);
                fprintf(id_funcionario_op, "%d\n", operacao[op+1].ff_id);
				fflush(stdin);
				fprintf(tipo_op,"%s\n", operacao[op+1].op_tipo);
				fprintf(obs_op, "%s\n", operacao[op+1].op_obs);
		}
		printf("Dados %d operacaos guardados!", quant_operacao);
		// Aqui fecha todos os ficheiros abertos
		fclose(id_interno_op);fclose(id_externo_op);fclose(id_pt_op);fclose(id_emp_op);fclose(id_componente_op);fclose(id_funcionario_op);fclose(tipo_op);fclose(obs_op);fclose(cache_op);
		fclose(dia_said);fclose(mes_said);fclose(ano_said);fclose(dia_cp);fclose(mes_cp);fclose(ano_cp);fclose(dia_ch);fclose(mes_ch);
		fclose(ano_ch);fclose(dia_p);fclose(mes_p);fclose(ano_p);
		
		contador_operacao=1;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	inicio();
}
