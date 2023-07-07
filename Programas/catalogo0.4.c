#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

char str1[] = "sim", str2[] = "sim", nome_cartao[25];
int resultado;
int opcao_catalogo;
int opcao_aperitivos;
int opcao_brinquedos;
int opcao_coleiras;
int opcao_vestimentas;
int opcao_pagamento;
float valor_total;
int num, data, cvv, cep, tel;
void entrada_catalogo(){ //menu do catalogo

         setlocale(LC_ALL,"");
   printf("Seja bem vindo ao catálogo de items!!\n\nEscolha o tipo de produto que você está buscando\n");
   	printf("1) - Rações e aperitivos\n");
    printf("2) - Brinquedos\n");
    printf("3) - Coleiras\n");
    printf("4) - Vestimentas\n"); 
	printf("5) - Voltar ao menu principal\n\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao_catalogo);
    
    getchar();
         system("cls");
}
void catalogo_aperitivos(){
	
         setlocale(LC_ALL,"");
    printf("\n\n1) - Ração para cachorro - R$:15,90");
	printf("\n\n2) - Ração para gato - R$:25,99");
	printf("\n\n3) - Ração para tartaruga - R$:20,00");
	printf("\n\n4) - Ração para leão - R$:100,00");
	printf("\n\n5) - Ração para pou - R$:19,50");
	printf("\n\n6) - Ração para Jorge - R$:3,00\n\n");
	printf("Digite a opção desejada :");   
	scanf("%d", &opcao_aperitivos);
	
    getchar();
	system("cls"); 
}
void catalogo_coleiras(){
         setlocale(LC_ALL,"");
    printf("\n\n1) - coleira azul - R$ 12,90");
	printf("\n\n2) - coleira branca - R$ 12,90");
	printf("\n\n3) - coleira roxa - R$ 12,90");
	printf("\n\n4) - coleira verde - R$ 12,90");
	printf("\n\n5) - coleira laranja de couro - R$ 25,90");
	printf("\n\n6) - COleira brilhante com preto - R$ 25,90\n\n");
    printf("Digite a opção desejada :"); 
    scanf("%d", &opcao_coleiras);
    getchar();
    system("cls");
}
void catalogo_brinquedos(){
	     setlocale(LC_ALL,"");
    printf("\n\n1) - arranhador médio");
	printf("\n\n2) - bola com espaço para ração");
	printf("\n\n3) - vara com pena pendurada");
	printf("\n\n4) - bola com sininho");
	printf("\n\n5) - osso médio para roer ");
	printf("\n\n6) - bola de tênis \n\n");
    printf("Digite a opção desejada :"); 
    scanf("%d", &opcao_brinquedos);
    getchar();
    system("cls");
}
void catalogo_vestimentas(){
		     setlocale(LC_ALL,"");
    printf("\n\n1) - roupa azul para cachorros pequenos");
	printf("\n\n2) - roupa azul para cachorros médios");
	printf("\n\n3) - roupa azul para cachorros grandes");
	printf("\n\n4) - roupa amarela para gatos");
	printf("\n\n5) - roupa preta para hamsters");
	printf("\n\n6) - roupa para pombos \n\n");
    printf("Digite a opção desejada :"); 
    scanf("%d", &opcao_vestimentas);
    getchar();
    system("cls");
}
void pagamento(){
	printf("Qual a forma de pagamento desejada ? ");
	printf("\n1) - Boleto\n2) - Credito\n3) - Pix");
	printf("\n\nqual a forma de pagamento : ");
	scanf("%d",&opcao_pagamento);
	  getchar();
		system("cls");
	if(opcao_pagamento == 1){
	    printf("O Boleto será enviado ao email---- o pagamento será comfirmado em até 5 dias utéis\n\n");
	}else if(opcao_pagamento==2){
	  printf("\n\nDigite o nome que esta no cartão : ");
				fgets(nome_cartao,25,stdin);
		
		printf("\n\nNumero do cartão : ");
				scanf("%d",&num);
			
		printf("\n\nData de validade : ");
				scanf("%d",&data);
			
		printf("\n\nCVV do cartão (3 numeros atrás do cartão) : ");
				scanf("%d",&cvv);
					system("cls");
					
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
			
			printf("\n\nTelefone caso algum problema ocorrar : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");
   }else if(opcao_pagamento==3){
   	printf("Envie um pix para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com\n\n");
   }else{ printf("Opção inválida");
   }getchar();
   }  
void catalogo_principal{
  resultado = strcmp(str1, str2);
	while(resultado==0){
	
	entrada_catalogo();
	
	switch(opcao_catalogo){
		case 1:
			catalogo_aperitivos();
			pagamento();
        break;
		case 2:
		    catalogo_brinquedos();
		    pagamento();
		break;
		case 3:
		    catalogo_coleiras();
		    pagamento();
		break;
		case 4:
		    catalogo_vestimentas();
		    pagamento();
		break;
		case 5:
			("Sistema será desligado");
			exit(0);
		break;
		default:
		     printf("opção inválida\n\n");	
        break;	
	}
}
}
