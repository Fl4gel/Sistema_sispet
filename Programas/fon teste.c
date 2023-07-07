#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int opcao;
int repetidor=1;
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
void MostrarMenu(){
    printf("*************************************\n\n");
    printf("******SEJA BEM VINDO AO ANYANIMAL******\n\n");
    printf("*************************************\n\n");

    printf("1) - LOGIN\n");
    printf("2) - CADASTRO DE CLIENTES\n");
    printf("3) - CADASTRO DE FORNECEDORES\n");
    printf("4) - Mostrar o cat�logo de itens\n");
    printf("5) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OP��O DESEJADA: ");
    scanf("%d", &opcao);  
        system("cls");  
getchar();
return;
}
void catalogo_aperitivos(){
    
         setlocale(LC_ALL,"");
    printf("\n\n1) - Ra��o para cachorro - R$:15,90");
    printf("\n\n2) - Ra��o para gato - R$:25,99");
    printf("\n\n3) - Ra��o para tartaruga - R$:20,00");
    printf("\n\n4) - Ra��o para le�o - R$:100,00");
    printf("\n\n5) - Ra��o para lagarto - R$:19,50");
    printf("\n\n6) - Ra��o para peixe - R$:3,00\n\n");
   
   printf("Digite a op��o desejada :");   
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
    printf("\n\n6) - Coleira brilhante com preto - R$ 25,90\n\n");
    
    printf("Digite a op��o desejada :");
    scanf("%d", &opcao_coleiras);
    getchar();
system("cls");
}
void catalogo_brinquedos(){
         setlocale(LC_ALL,"");
    printf("\n\n1) - arranhador m�dio");
    printf("\n\n2) - bola com espa�o para ra��o");
    printf("\n\n3) - vara com pena pendurada");
    printf("\n\n4) - bola com sininho");
    printf("\n\n5) - osso m�dio para roer ");
    printf("\n\n6) - bola de t�nis \n\n");
    
    printf("Digite a op��o desejada :");
    scanf("%d", &opcao_brinquedos);
    getchar();
system("cls");
}
void catalogo_vestimentas(){
             setlocale(LC_ALL,"");
    printf("\n\n1) - roupa azul para cachorros pequenos");
    printf("\n\n2) - roupa azul para cachorros m�dios");
    printf("\n\n3) - roupa azul para cachorros grandes");
    printf("\n\n4) - roupa amarela para gatos");
    printf("\n\n5) - roupa preta para hamsters");
    printf("\n\n6) - roupa para pombos \n\n");
    printf("Digite a op��o desejada :");
    scanf("%d", &opcao_vestimentas);
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
        
    //print das informa��es do cliente
    printf("Usu�rio Cadastrado\n\nDados cadastrados :\n\nNome : %sEmail : %s\nSenha : %d\nCadastro de Pessoa F�sica : %d\nData de nascimento : %d\nTelefone : %d\n\n", nome_completo, email ,senha , cpf , data_nascimento, telefone);
    system("pause");
    system("cls");
    getchar();
return;
}

void entrada_catalogo(){ //menu do catalogo

         setlocale(LC_ALL,"");
   printf("Seja bem vindo ao cat�logo de items!!\n\nEscolha o tipo de produto que voc� est� buscando\n");
      printf("1) - Ra��es e aperitivos\n");
    printf("2) - Brinquedos\n");
    printf("3) - Coleiras\n");
    printf("4) - Vestimentas\n");
    printf("5) - Sair do sistema\n\n");
    
    printf("DIGITE A OP��O DESEJADA: ");
    scanf("%d", &opcao_catalogo);
    
    getchar();
         system("cls");
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
    
    printf("Raz�o social: ");
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
    
       printf("Dados Cadastrados:\nNome : %s\nEmail : %s\nRaz�o Social : %s\nSenha : %d\nCadastro de pessoa Jur�dica: %d\nTelefone : (61)%d\nCEP : %.0f\n", nome, email, sub_nome, senha, cnpj, telefone, CEP);
      printf("Cidade : %s\nEstado : %s\nComplemento : %s",cidade ,estado, complemento);
      system("pause");
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
        printf("O Boleto ser� enviado ao email---- o pagamento ser� comfirmado em at� 5 dias ut�is\n\n");
    }else if(opcao_pagamento==2){
      printf("\n\nDigite o nome que esta no cart�o : ");
                fgets(nome_cartao,25,stdin);
        
        printf("\n\nNumero do cart�o : ");
                scanf("%d",&num);
            
        printf("\n\nData de validade : ");
                scanf("%d",&data);
            
        printf("\n\nCVV do cart�o (3 numeros atr�s do cart�o) : ");
                scanf("%d",&cvv);
                    system("cls");
                    
            printf("\n\nENDERE�O\n\nDigite seu CEP: ");
                scanf("%d",&cep);
 printf("\n\nTelefone caso algum problema ocorrar : (61) ");
                scanf("%d",&tel);
                    system("cls");
                    
            printf("FEITO !\n\nSeu pedido chegar� em 4 dias");
   }else if(opcao_pagamento==3){
       printf("Envie um pix para o CPF 113.219.276-57\nE envie o comprovante para o email fulano@gmail.com\n\n");
   }else{ printf("Op��o inv�lida");
   }getchar();
   }  
int main(){
    while(repetidor!=0){
    

    setlocale(LC_ALL, "");
MostrarMenu();
        switch (opcao)
        {
            case 1 : // Tela login
                  TelaLogin();
             system("cls");
            break;
        case 2 : // Gravar Clientes
CadastroClientes();
             system("cls");
            break;

            case 3 : // Gravar Fornecedores
                CadastroFornecedores();
             system("cls");
            break;

            case 5 : // Sair do Sistema
                exit(0);//estrutura para controlar a repeti��o
            scanf("%i", &repetidor);
                 system("cls");
            break;
            case 4://abrir catalogo
                  catalogo_principal();
            default :// Caso o usu�rio seleciona uma op��o diferente das existentes
                printf("Op��o Invalida!");   //estrutura para controlar a repeti��o
            scanf("%i", &repetidor);
system("cls");
            break;    
}
        getchar();}
return 0;

    }
void catalogo_principal(){
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
            printf("Sistema ser� desligado");
            exit(0);
        break;
        default:
             printf("op��o inv�lida\n\n");    
        break;    
    }

