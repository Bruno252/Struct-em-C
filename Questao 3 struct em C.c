#include <stdio.h>
#include <stdlib.h>

struct biblioteca{

char nome[250];
char autor[250];
char categoria[250];
float preco;

};

int main(){

struct biblioteca livro[3];
int i;

    for(i=0;i<3;i++){

        printf("Nome do Livro:");
        fgets(livro[i].nome,250,stdin);

        printf("Autor do Livro:");
        fgets(livro[i].autor,250,stdin);

        printf("Categoria do Livro:");
        fgets(livro[i].categoria,250,stdin);

        printf("Preco do Livro:");
        scanf("%f",&livro[i].preco);
        fflush(stdin);
        //setfbuf(stdin,NULL);
        printf("\n");
    }

printf("\n");
system("cls || clear");

    for(i=0;i<3;i++){

        printf("Nome do Livro:%s",livro[i].nome);
        printf("Autor do Livro:%s",livro[i].autor);
        printf("categoria do Livro:%s",livro[i].categoria);
        printf("Preco do Livro:%.2f\n",livro[i].preco);
        printf("\n");
    }


    return 0;
}