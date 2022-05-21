#ifndef _CONSULTA_H
#define _CONSULTA_H
#

void documento(short int dc );
void Consultar(){
	top: printf("\n\n--------------------> Consultar operacoes <---------------------\n");
	
	printf("\n\t\tMAIN CONSULT\n Wich your option\n\n");
	re: printf("\t\t1. File In \n\t\t2. File On \n\t\t3. Main\n\t\t:: ");scanf("%d",&op);
		if (op<1 && op>3) goto re;
		
		if(op<3) documento(op);
		else inicio();
		
		printf("\n\t\t\t\t\t\t\t\t 1. Return\t 2. Continue\n\t\t\t\t\t\t\t\t--> ");scanf("%d",&i);
			if(i==1) inicio();
				else goto top;
	}
void documento(short int dc){
	i=1,n=0,x=0; /// VAriaveis globais
	if(dc==1){
		//--------------------------Verificar o id digitado com o armazenado
		in: printf("Insert you option: ");	scanf("%d",&id);
	
		while(operacao[i].op_idInterno!='\0'){
				if(id==operacao[i].op_idInterno) n=i;
			i++;
			}
			
			if(n==0) {
					printf("Not found\n\n");
					  	x++;
						  if(x==3) Consultar();
						else		 
					 		goto in;
			}
			
			printf("Id Intern: %d\n",operacao[n].op_idInterno);
					printf("Id Component: %d\n",operacao[n].comp_id);
					printf("Id Company: %d\n",operacao[n].emp_id);
					fflush(stdin);
					printf("\n Wich Operation: %s \n",operacao[n].op_tipo);				
					fflush(stdin);
					printf("Datas:\n \tSaida: %d-%d-%d\n\tChegada: %d-%d-%d%d\n\tPrevista: %d-%d-%d\n\tOperacao: %d-%d-%d\n",
							op_said[n].dia,op_said[n].mes,op_said[n].ano,op_cheg[n].dia,op_cheg[n].mes,op_cheg[n].ano,
							op_Pchegada[n].dia,op_Pchegada[n].mes,op_Pchegada[n].ano,op_operac[n].dia,op_operac[n].mes,op_operac[n].ano );
					fflush(stdin);
					printf("Id do funcionario: %d\n",operacao[n].ff_id);
					printf("Montante: %2.3f \n",operacao[n].op_Cache);		
					fflush(stdin);		
					printf("Observacao: %s \n",operacao[n].op_obs);
					fflush(stdin);			
	}else {
		x=0;
		ex: printf("Digite o id do documento: ");scanf("%d",&id);
		
	//--------------------------Verificar o id digitado com o armazenado
		while(operacao[i].op_idExterno!='\0'){
				if(id==operacao[i].op_idExterno) n=i;
			i++;
			}
			
			if(n==0) {
				printf("Nao encontrado\n\n");
					  	x++;
						  if(x==3) Consultar();
						else		 
					 		goto ex;			
			}
//------------------------------------------------------- Mostrar os dados do documento
			printf("Id Interno: %d\n",operacao[n].op_idInterno);
			printf("Id do componente: %d\n",operacao[n].comp_id);
			printf("Id da empresa: %d\n",operacao[n].emp_id);
			fflush(stdin);
			printf("\nTipo de operacao: %s \n",operacao[n].op_tipo);				
			fflush(stdin);
			printf("Datas:\n \tSaida: %d %d %d\n\tChegada: %d - %d - %d\n\tPrevista: %d %d %d\n\tOperacao: %d %d %d\n",
				op_said[n].dia,op_said[n].mes,op_said[n].ano,op_cheg[n].dia,op_cheg[n].mes,op_cheg[n].ano,
				op_Pchegada[n].dia,op_Pchegada[n].mes,op_Pchegada[n].ano,op_operac[n].dia,op_operac[n].mes,op_operac[n].ano );
			fflush(stdin);
			printf("Id do funcionario: %d\n",operacao[n].ff_id);
			fflush(stdin);
			printf("Montante: %2.3f \n",operacao[n].op_Cache);		
			fflush(stdin);
			printf("Observacao: %s \n",operacao[n].op_obs);
			fflush(stdin);
	}
	
}

#endif
