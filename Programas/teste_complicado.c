#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <locale.h>
int opc = 0;
int opc1 = 0;
void MostrarMenu(){
    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO AO ANYANIMAL******\n\n");
    printf("*************************************\n\n");

    printf("1) - CADASTRO DE CLIENTES\n");
    printf("2) - LOGIN\n");
    printf("3) - CATALOGO DE VENDAS\n");
    printf("4) - CADASTRO DE FORNCEDORES\n");
    printf("5) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opc);
		
    getchar();	system("cls");
}
void CadastroClientes(){
		setlocale(LC_ALL, "Portuguese");
		
	char email[15], nome[15];   
	int senha, cpf, data_nascimento, telefone;

    printf("Adicione os dados do Cliente\n");
    
    printf("\n\nEmail: ");	scanf("%s", &email);	system("cls");

    printf("\n\nNome: ");	scanf("%s", &nome);		system("cls");
		
    printf("\n\nSenha: ");	scanf("%s", &senha);	system("cls");
		
    printf("\n\nCPF: ");	scanf("%s", &cpf);		system("cls");
		
    printf("\n\nData de nascimento: ");	scanf("%s", &data_nascimento);   system("cls");
    	
    printf("\n\nTelefone: ");	scanf("%s", &telefone);	system("cls");
    	
    printf("\n\nCadastrado\n");

}
void TelaLogin (){
		setlocale(LC_ALL, "Portuguese");
	
	char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];        

    printf("Digite o Login: ");	scanf("%s", login1);

    printf("Digite a Senha: ");	scanf("%s", senha1);	system("cls");

	printf("\nLogado !\n\n");
}
void Catalogo(){
	setlocale(LC_ALL, "Portuguese");
		
	int a, b, cep, tel[9], cpf, num, cvv[4], data;
	char nome[25];
		
	printf("BEM VINDO AO CATALOGO");
	printf("\n\n1) - Ração para cachorro - R$:15,90");
	printf("\n\n2) - Ração para gato - R$:25,99");
	printf("\n\n3) - Ração para tartaruga - R$:20,00");
	printf("\n\n4) - Ração para leão - R$:100,00");
	printf("\n\n5) - Ração para pou - R$:19,50");
	printf("\n\n6) - Ração para Jorge - R$:3,00\n\n");
	
	printf("\n\nDigite o numero do produto: ");	scanf("%d",&a);		system("cls");

	if (a==1){

		printf("Item escolhido foi 'Ração pra cachorro - R$:15,90'n\n ");
		
		printf("Qual a forma de pagamento desejada ? ");
		printf("\n1) - debito\n2) - Credito\n3) - Pix");
		printf("\n\nqual a forma de pagamento : ");
			scanf("%d",&b);
				system("cls");
				
		if (b==3) {
			
			printf("\n\nFaça um pix de R$:15,90 para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com");
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
				
			printf("\n\nTelefone caso algum problema ocorra : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");}
		if (b<=2) {
			
			printf("\n\nDigite o nome que esta no cartão : ");
				fgets(nome,25,stdin);
			
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
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");}
		else {
			
			printf("opcao invalida");}
	}
	if (a==2){
	
		printf("Item escolhido foi 'Ração pra gato - R$:25,99'\n\n");
		
		printf("Qual a forma de pagamento desejada ? ");
		printf("\n1) - debito\n2) - Credito\n3) - Pix");
		printf("\n\nqual a forma de pagamento : ");
			scanf("%d",&b);
				system("cls");
				
		if (b==3) {
			
			printf("\n\nFaça um pix de R$:15,90 para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com");
				
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
				
			printf("\n\nTelefone caso algum problema ocorra : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");;
			
		}
		if (b<=2) {
			
			printf("\n\nDigite o nome que esta no cartão : ");
				scanf("%s",&nome);
				
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
		}
		else {
			
			printf("opcao invalida");}			
	}
	if (a==3){
	
		printf("Item escolhido foi 'Ração pra tartaruga - R$:20,00'\n\n");
		
		printf("Qual a forma de pagamento desejada ? ");
		printf("\n1) - debito\n2) - Credito\n3) - Pix");
		printf("\n\nqual a forma de pagamento :");
			scanf("%d",&b);
				system("cls");
		if (b==3) {
			
			printf("\n\nFaça um pix de R$:15,90 para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com");
			
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
			
			printf("\n\nTelefone caso algum problema ocorra : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");
			
		}
		if (b<=2) {
			printf("\n\nDigite o nome que esta no cartão : ");
				scanf("%s",&nome);
			
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
		}
		else {
			
			printf("opcao invalida");}
	}
	if (a==4){
	
		printf("Item escolhido foi 'Ração pra leão - R$:100,00'\n\n");
		
		printf("Qual a forma de pagamento desejada ? ");
		printf("\n1) - debito\n2) - Credito\n3) - Pix");
		printf("\n\nqual a forma de pagamento : ");
			scanf("%d",&b);
				system("cls");
		if (b==3) {
			
			printf("\n\nFaça um pix de R$:15,90 para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com");
			
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
				
			printf("\n\nTelefone caso algum problema ocorra : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");}
		if (b<=2) {
			
			printf("\n\nDigite o nome que esta no cartão : ");
				scanf("%s",&nome);
				
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
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");}
		else {
			
			printf("opcao invalida");}
	}
	if (a==5){
	
		printf("Item escolhido foi ' Ração pra pou - R$:19,50'\n\n");
		printf("Qual a forma de pagamento desejada ? ");
		printf("\n1) - debito\n2) - Credito\n3) - Pix");
		printf("\n\nqual a forma de pagamento : ");	
			scanf("%d",&b);
				system("cls");
		if (b==3) {
			
			printf("\n\nFaça um pix de R$:15,90 para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com");
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
				
			printf("\n\nTelefone caso algum problema ocorra : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");
			
		}
		if (b<=2) {
			
			printf("\n\nDigite o nome que esta no cartão : ");
				fgets(nome,25,stdin);
				
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
		}
		else {
			printf("opcao invalida");
		}
	}
	if (a==6){
	
		printf("Item escolhido foi 'Ração para Jorge - R$:3,00'\n\n ");
		printf("Qual a forma de pagamento desejada ? ");
		printf("\n1) - debito\n2) - Credito\n3) - Pix");
		printf("\n\nqual a forma de pagamento : ");	
			scanf("%d",&b);
				system("cls");
		if (b==3) {
			
			printf("\n\nFaça um pix de R$:15,90 para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com");
			printf("\n\nENDEREÇO\n\nDigite seu CEP: ");
				scanf("%d",&cep);
				
			printf("\n\nTelefone caso algum problema ocorra : (61) ");
				scanf("%d",&tel);
					system("cls");
					
			printf("FEITO !\n\nSeu pedido chegará em 4 dias");
		}
		if (b<=2) {	
			printf("\n\nDigite o nome que esta no cartão : ");
				scanf("%s",&nome);
			
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
		}
		if (a>6) {
			printf("opcao invalida");
		}
	}
}
void CadastroForncedores(){
	
	setlocale(LC_ALL, "Portuguese");
	
    printf("Adicione os dados do Fornecedor:\n");
    
    char email[15], razao_social[15], senha[15], cnpj[20], telefone[15], CEP[20], cidade[15], estado[15], complemento[30], nomeprod[20];   
    int a;
    float valor, valor1;
    
    printf("\n\nE-mail: "); //CADASTRO DO FORNECEDOR
    	scanf("%s", &email);
    		
    printf("\n\nRazão social: ");	scanf("%s", &razao_social);
    		
    printf("\n\nSenha: ");	scanf("%s", &senha);
   	 		
    printf("\n\nCPF: ");	scanf("%s", &cnpj);
    		
    printf("\n\nTelefone: ");	scanf("%s", &telefone);		system("cls");

	printf("ENDEREÇO"); //ENDEREÇO DO FORNECEDOR
	
    printf("\n\nCEP: ");	scanf("%s", &CEP);
    
    printf("\n\nCidade: ");	scanf("%s", &cidade);
    		
    printf("\n\nEstado: ");	scanf("%s", &estado);
    
    printf("\n\nComplemento: ");	scanf("%s", &complemento);	system("cls");
    
	printf("CADASTRO CONCLUÍDO COM SUCESSO!\n\n");
	
		system("pause");	system("cls");
			
	printf("Deseja inserir algum produto no site ?\n\n1) - SIM\n2) - NÃO");
		printf("Escolha uma opção : ");		scanf("%d",&a);
		
	if (a==1) {
		printf("Digite o nome do produto : ");
			scanf("%s",nomeprod);
			
		printf("\n\nQual será o valor do produto ? (aparecerá no site com uma taxa para o site) : ");
			scanf("%f",&valor);	valor1=valor+5;
				
		printf("O produto '%s' foi colocado a venda com o valor de %.2f",nomeprod,valor1);		
	}	
	if (a==2) {
		printf("\n\nSistema será desligado");	
	}			
	else {
		printf("\n\nOpção invalida !\n\nSistema será desligado");
	}
}
int main() {
	
setlocale(LC_ALL, "");
    MostrarMenu();
        switch (opc)
        {
        	
        case 1 : // CADASTRO DE CLIENTES
        	CadastroClientes();
            	void Retornar();
        break;
        
		case 2 : // lOGIN DE CLIENTES
			TelaLogin();
				void retornar();
			
		case 3 : //CATALOGO
			Catalogo();
				void retornar();
		break;
		
		
		case 4 : // CADASTRO DE FORNCEDORES
			CadastroForncedores();
				void retorno();
		break;
		
		case 5 : // SAIR DO SISTEMA
			printf("Sistema sera desligado");
		break;
		
        default :
            printf("Opção Invalida!");
        break;    
        }
}
