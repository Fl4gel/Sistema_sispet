#include<stdio.h>

char nome[20];
int idade;
main(void){

	printf("Digite o nome completo\n\n");
	fgets(nome,20,stdin);
	printf("Digite sua idade\n\n");
	scanf("%d", &idade);
	printf("nome gravado :%s\nIdade : %d", nome, idade);
}
