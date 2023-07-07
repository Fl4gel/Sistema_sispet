#include<stdio.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <locale.h>

int opcao;
int repetidor=1;
void MostrarMenu(){

    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO AO ANYANIMAL******\n\n");
    printf("*************************************\n\n");

	printf("1) - LOGIN\n");
    printf("2) - CADASTRO DE CLIENTES\n");
    printf("3) - CADASTRO DE FORNECEDORES\n");
    printf("4) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao);
		
    getchar();  
		system("cls");  

}
void TelaLogin(){
	
	setlocale(LC_ALL, "Portuguese");

    char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];        


    printf("Digite o Login: ");
    scanf("%s", login1);

    printf("Digite a Senha: ");
    scanf("%s", senha1);

    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)
        printf("\n\nLOGADO!\n\n");

    else
        printf("\n\nDADOS INVALIDOS!\n\n");  
		
	system("pause");
    system("cls"); 

}

void CadastroClientes(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char email[15], nome[15];   
	int senha, cpf, data_nascimento, telefone;

    printf("Adicione os dados do Cliente\n");
    
    printf("\n\nEmail: ");
    scanf("%s", &email);
        system("cls");
        
    printf("Nome: ");
    scanf("%s", &nome);
    	system("cls");
    
    printf("Senha: ");
    scanf("%s", &senha);
    	system("cls");
    
    printf("CPF: ");
    scanf("%s", &cpf);
    	system("cls");
    
    printf("Data de nascimento: ");
    scanf("%s", &data_nascimento);
    	system("cls");
    
    printf("Telefone: ");
    scanf("%s", &telefone);
    	system("cls");
    	
    printf("Cadastrado\n\n");
    system("pause");
    system("cls");
}

void CadastroFornecedores(){

	setlocale(LC_ALL, "Portuguese");
	
    printf("\n\nAdicione os dados do Fornecedor:\n");
    
    char nome[30], email[15], razao_social[15], senha[15], cnpj[20], telefone[15], CEP[20], cidade[15], estado[15], complemento[30];   
    
    printf("E-mail: ");
    fgets(nome,20,stdin);
    	system("cls");  

    
    printf("Razão social: ");
    scanf("%s", &razao_social);
    	system("cls");  
    
    printf("Senha: ");
    scanf("%s", &senha);
    	system("cls");  
    
    printf("CPF: ");
    scanf("%s", &cnpj);
    system("cls");
    
    printf("Telefone: ");
    scanf("%s", &telefone);
        system("cls");
    
    printf("CEP: ");
    scanf("%s", &CEP);
        system("cls");
    
    printf("Cidade: ");
    scanf("%s", &cidade);
        system("cls");
        
    printf("Estado: ");
    scanf("%s", &estado);
        system("cls");
    
    printf("Complemento: ");
    scanf("%s", &complemento);
        system("cls");
    
    printf("Dados Cadastrados:\nNome : %s\n\n");
    system("pause");
    system("cls");
}
int main(){
	while(repetidor!=0){
	

    setlocale(LC_ALL, "");
    MostrarMenu();
        switch (opcao)
        {
        	case 1 : // Tela login 
        	      TelaLogin();
        	      void Retornar();
            break;
		    case 2 : // Gravar Clientes
                CadastroClientes();
                void Retornar();
            break;

            case 3 : // Gravar Fornecedores
                CadastroFornecedores();
                void Retornar();
            break;

			case 4 : // Sair do Sistema
				printf("\nSistema sera desligado");
			break;
            default :
                printf("Opção Invalida!");
            break;    
            printf("Para sair do sistema pressiona 0, caso contrário pressione qualquer outra tecla\n");
            scanf("%i", &repetidor);
        }
		getchar();}
return 0;

    }
  ()}
}

