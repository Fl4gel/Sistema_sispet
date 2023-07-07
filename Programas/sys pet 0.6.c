#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

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
		system("cls");  
getchar();
return;
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
    getchar();
return;

}

void CadastroClientes(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char email[15], nome_completo[30];   
	int senha, cpf, data_nascimento, telefone;
  
   printf("Adicione os dados do Cliente\n\nNome: ");
    fgets(nome_completo,30,stdin);
    	system("cls");
		  
    printf("Email: ");
    scanf("%s", &email);
        system("cls");
        
    printf("Senha: ");
    scanf("%d", &senha);
    	system("cls");
    
    printf("CPF: ");
    scanf("%d", &cpf);
    	system("cls");
    
    printf("Data de nascimento: ");
    scanf("%d", &data_nascimento);
    	system("cls");
    
    printf("Telefone: ");
    scanf("%d", &telefone);
    
    	system("cls");
    	
    //print das informações do cliente
    printf("Usuário Cadastrado\n\nDados cadastrados :\n\nNome : %sEmail : %s\nSenha : %d\nCadastro de Pessoa Física : %d\nData de nascimento : %d\nTelefone : %d\n\n", nome_completo, email ,senha , cpf , data_nascimento, telefone);
    system("pause");
    system("cls");
    getchar();
return;
}

void CadastroFornecedores(){

	setlocale(LC_ALL, "Portuguese");
	
    printf("Adicione os dados do Fornecedor:\n");
    
    char nome[30], email[30], sub_nome[20], cidade[15], estado[15], complemento[30];   
	int senha, cnpj, telefone;
	double CEP;
	
    printf("Nome : ");
    fgets(nome,30,stdin);
    	system("cls");  

    printf("Email : ");
    scanf("%s", email);
        system("cls"); 
        getchar();
    
    printf("Razão social: ");
    fgets(sub_nome,20,stdin);
    system("cls");
       
    printf("Senha: ");
    scanf("%d", &senha);
    	system("cls");  
    	
    printf("CPNJ: ");
    scanf("%d", &cnpj);
    system("cls");
    
    printf("Telefone: ");
    scanf("%d", &telefone);
        system("cls");
    
    printf("CEP: ");
    scanf("%lf", &CEP);
        system("cls");
    getchar(); 
    
    printf("Cidade: ");
    fgets(cidade,15,stdin);
        system("cls");
        
    printf("Estado: ");
    fgets(estado,15,stdin);
        system("cls");
    
    printf("Complemento: ");
    fgets(complemento,30,stdin);
        system("cls");
    
       printf("Dados Cadastrados:\nNome : %s\nEmail : %s\nRazão Social : %s\nSenha : %d\nCadastro de pessoa Jurídica: %d\nTelefone : (61)%d\nCEP : %.0f\n", nome, email, sub_nome, senha, cnpj, telefone, CEP);
      printf("Cidade : %s\nEstado : %s\nComplemento : %s",cidade ,estado, complemento);
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
        	       printf("=================================\nPara sair do sistema pressiona 0, caso contrário pressione qualquer outra tecla\n=================================\n");
            scanf("%i", &repetidor);
             system("cls");
            break;
		    case 2 : // Gravar Clientes
                CadastroClientes();
                 printf("=================================\nPara sair do sistema pressiona 0, caso contrário pressione qualquer outra tecla\n=================================\n");//estrutura para controlar a repetição
            scanf("%i", &repetidor);
             system("cls");
            break;

            case 3 : // Gravar Fornecedores
                CadastroFornecedores();
                 printf("=================================\nPara sair do sistema pressiona 0, caso contrário pressione qualquer outra tecla\n=================================\n");//estrutura para controlar a repetição
            scanf("%i", &repetidor); 
             system("cls");
            break;

			case 4 : // Sair do Sistema
			    printf("=================================\nPara sair do sistema pressiona 0, caso contrário pressione qualquer outra tecla\n=================================\n");//estrutura para controlar a repetição
            scanf("%i", &repetidor);
				 system("cls");
			break;
            default :// Caso o usuário seleciona uma opção diferente das existentes
                printf("Opção Invalida!");
                 printf("Para sair do sistema pressiona 0, caso contrário pressione qualquer outra tecla\n");//estrutura para controlar a repetição
            scanf("%i", &repetidor);
             system("cls");
            break;    
        }
		getchar();}
return 0;

    }

