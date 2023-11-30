#include <stdio.h>
#include <stdlib.h>

struct dados{

char nome[250];
int idade;
float peso;
float altura;

};

int main(){

struct dados pessoa;

printf("Nome:");
//scanf("%s",&pessoa.nome);
fgets(pessoa.nome,250,stdin);

printf("Idade:");
scanf("%d",&pessoa.idade);

printf("Peso:");
scanf("%f",&pessoa.peso);

printf("Altura:");
scanf("%f",&pessoa.altura);

printf("\n");

printf("Nome:%s",pessoa.nome);
printf("Idade:%d\n",pessoa.idade);
printf("Peso:%.2fKg\n",pessoa.peso);
printf("Altura:%.2fm\n",pessoa.altura);

    return 0;
}