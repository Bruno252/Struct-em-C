#include <stdio.h>
#include <stdio.h>


struct endereco{

    char rua[250];
    char numero[250];
    char bairro[250];
    char cidade[250];
    char estado[250];

};

struct dados_funcionario{

    char nome[250];
    char data[250];
    char matricula[250];
    struct endereco endereco;

};

struct dados_cliente
{
    char nome[250];
    char data[250];
    struct endereco endereco;
};

int main()
{

    struct dados_funcionario funcionario;
    struct dados_cliente cliente[3];
    int i,j;

    printf("Funcionario:\n");
    printf("Nome do Funcionario:");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);

    printf("Data de Admisao:");
    fgets(funcionario.data, sizeof(funcionario.data), stdin);

    printf("Matricula:");
    fgets(funcionario.matricula, sizeof(funcionario.matricula), stdin);

    printf("\nEndereco:\n");
        printf("Rua:");
        fgets(funcionario.endereco.rua, sizeof(funcionario.endereco.rua), stdin);
        
        printf("Numero:");
        fgets(funcionario.endereco.numero, sizeof(funcionario.endereco.numero), stdin);
    
        printf("Bairro:");
        fgets(funcionario.endereco.bairro, sizeof(funcionario.endereco.bairro), stdin);
    
        printf("Estado:");
        fgets(funcionario.endereco.cidade, sizeof(funcionario.endereco.cidade), stdin);
    
        printf("Bairro:");
        fgets(funcionario.endereco.estado, sizeof(funcionario.endereco.estado), stdin);
    
    printf("\nCliente:\n");
    for (i = 0; i < 1; i++)
    {
        fflush(stdin);
        printf("Nome do Funcionario:");
        fgets(cliente[i].nome, sizeof(cliente[i].nome), stdin);

        printf("Data de Nascismento:");
        fgets(cliente[i].data, sizeof(cliente[i].data), stdin);

        printf("\nEndereco:\n");
    
        printf("Rua:");
        fgets(cliente[i].endereco.rua, sizeof(cliente[i].endereco.rua), stdin);
        
        printf("Numero:");
        fgets(cliente[i].endereco.numero, sizeof(cliente[i].endereco.numero), stdin);
    
        printf("Bairro:");
        fgets(cliente[i].endereco.bairro, sizeof(cliente[i].endereco.bairro), stdin);
    
        printf("Cidade:");
        fgets(cliente[i].endereco.cidade, sizeof(cliente[i].endereco.cidade), stdin);
    
        printf("Estado:");
        fgets(cliente[i].endereco.estado, sizeof(cliente[i].endereco.estado), stdin);
    
        printf("\n");
        
    }
    printf("\n");
    system("cls || clear");

    printf("_______________________________\n");
    printf("\nFuncionario:\n");
    printf("Nome:%s", funcionario.nome);
    printf("Data de Admisao:%s", funcionario.data);
    printf("Matricula:%s", funcionario.matricula);
    printf("\nEndereco:\n");
    printf("Rua:%s",funcionario.endereco.rua);
    printf("Numero:%s",funcionario.endereco.numero);
    printf("Bairro:%s",funcionario.endereco.bairro);
    printf("Cidade:%s",funcionario.endereco.cidade);
    printf("Estado:%s",funcionario.endereco.estado);
    printf("_______________________________\n");

    printf("\nCliente:\n");
    for(i=0;i<1;i++){

        printf("Nome:%s", cliente[i].nome);
        printf("Data de Nascismento:%s", cliente[i].data);
        printf("\nEndereco:\n");
            for(j=0;j<1;j++){

                printf("Rua:%s",cliente[i].endereco.rua);
                printf("Numero:%s",cliente[i].endereco.numero);
                printf("Bairro:%s",cliente[i].endereco.bairro);
                printf("Cidade:%s",cliente[i].endereco.cidade);
                printf("Estado:%s",cliente[i].endereco.estado);

            }
        printf("_______________________________\n");
        printf("\n");
    
    }

    return 0;
}