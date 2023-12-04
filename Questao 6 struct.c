#include <stdio.h>
#include <stdlib.h>

struct dados
{

    char nome[250];
    int idade;
    char cpf[250];
};

int main()
{

    struct dados funcionario;
    struct dados cliente;

    printf("Nome Do Funcionario:");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);

    printf("Idade do Funcionario:");
    scanf("%d", &funcionario.idade);

    fflush(stdin);

    printf("CPF do Funcionario:");
    fgets(funcionario.cpf, sizeof(funcionario.cpf), stdin);

printf("\n");

    printf("Nome Do Cliente:");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);

    printf("Idade do Cliente:");
    scanf("%d", &cliente.idade);

    fflush(stdin);

    printf("CPF do CLiente:");
    fgets(cliente.cpf, sizeof(cliente.cpf), stdin);

    //system("cls || clear");
    printf("\n");

    printf("Nome do Funcionario:%s",funcionario.nome);
    printf("Idade Do Funcionario:%d\n",funcionario.idade);
    printf("CPF do Funcionario:%s",funcionario.cpf);
    printf("\n");
    printf("Nome do Cliente:%s",cliente.nome);
    printf("Idade Do Cliente:%d\n",cliente.idade);
    printf("CPF do Cliente:%s",cliente.cpf);


    return 0;
}