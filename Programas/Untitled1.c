#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int opcao_catalogo;
int opcao_aperitivo;
int opcao_brinquedos;
int opcao_coleiras;
int opcao_vestimentas;
void entrada_catalogo(){ //menu do catalogo

         setlocale(LC_ALL,"");
   printf("Seja bem vindo ao catálogo de items!!\n\nEscolha o tipo de produto que você está buscando\n");
   	printf("1) - Rações e aperitivos\n");
    printf("2) - Brinquedos\n");
    printf("3) - Coleiras\n");
    printf("4) - Vestimentas\n\n");    
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
	scanf("%d", &opcao_aperitivo);
	
    getchar();
	system("cls"); 
}
void catalogo_coleiras(){
         setlocale(LC_ALL,"");
    printf("\n\n1) - coleira azul");
	printf("\n\n2) - coleira branca");
	printf("\n\n3) - coleira roxa");
	printf("\n\n4) - coleira verde");
	printf("\n\n5) - coleira laranja de couro");
	printf("\n\n6) - COleira brilhante com preto\n\n");
    printf("Digite a opção desejada :"); 
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
    getchar();
    system("cls");
}
void pagamento(){
	
}
int main(void){
	entrada_catalogo();
	
	switch(opcao_catalogo){
		case 1:
			catalogo_aperitivos();
        break;
		case 2:
		    catalogo_brinquedos();
		break;
		case 3:
		    catalogo_coleiras();
		break;
		case 4:
		    catalogo_vestimentas();
		break;
		default:
		     printf("\n\nopção inválida");	
	}
}
