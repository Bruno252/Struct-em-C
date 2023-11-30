#include <stdio.h>
#include <stdlib.h>

struct dados{

char nome[250];
int idade;
char endereco[250];

};

int main(){

    struct dados pessoa;

    printf("Nome:");
    fgets(pessoa.nome,250,stdin);

    printf("Idade:");
    scanf("%d",&pessoa.idade);

    fflush(stdin);
    //setbuf(stdin,NULL);

    printf("Endereco:");
    fgets(pessoa.endereco,250,stdin);


    printf("\n");

    printf("Nome:%s",pessoa.nome);
    printf("Idade:%d\n",pessoa.idade);
    printf("Endereco:%s",pessoa.endereco);


    return 0;
}