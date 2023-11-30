#include <stdio.h>
#include <stdlib.h>

struct dados{

char nome[250];
char nascimento[250];
char rg[250];
char cpf[250];

};

int main(){

struct dados pessoa[5];
int i;

    for(i=0;i<2;i++){

        printf("Nome:");
        fgets(pessoa[i].nome,250,stdin);
        
        printf("Data de Nascimento:");
        fgets(pessoa[i].nascimento,250,stdin);

        printf("RG:");
        fgets(pessoa[i].rg,250,stdin);

        printf("CPF:");
        fgets(pessoa[i].cpf,250,stdin);
        printf("\n");
        fflush(stdin);
        //setbuf(stdin,NULL);
    }

printf("\n");

    for(i=0;i<2;i++){

        printf("Nome:%s",pessoa[i].nome);
        printf("Data de Nascimento:%s",pessoa[i].nascimento);
        printf("RG:%s",pessoa[i].rg);
        printf("CPF:%s",pessoa[i].cpf);
        printf("\n");
    }

    return 0;
}