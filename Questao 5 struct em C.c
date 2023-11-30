#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados
{

    char nome[250];
    int idade;
    float nota[2];
    float media;
    char resultado[3][500];
};

int main()
{

    struct dados aluno[3];
    int i, j;
    float soma;

    for (i = 0; i < 1; i++)
    {

        printf("Nome:");
        fgets(aluno[i].nome, 250, stdin);

        printf("Idade:");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%d Nota:", j + 1);
            scanf("%f", &aluno[i].nota[j]);
            soma += aluno[i].nota[j];

        }

        aluno[i].media = soma / j;

        if (aluno[i].media>= 7)
        {
            strcpy(aluno[i].resultado[i], "Aluno Aprovado\n");
        }
        else if (aluno[i].media >= 5 && aluno[i].media < 7)
        {
            strcpy(aluno[i].resultado[i], "Aluno em Recuperacao\n");
        }
        else
        {
            strcpy(aluno[i].resultado[i], "Aluno esta reprovado\n");
        }

        soma = 0;

        fflush(stdin);
        // setbuf(stdin,NULL);
        printf("\n");
    }

    system("cls || clear");

    for (i = 0; i < 1; i++)
    {

        printf("Nome:%s", aluno[i].nome);
        printf("Idade:%d\n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%d Nota:%.2f\n", j + 1, aluno[i].nota[j]);
        }
        /*
         */
        printf("Media:%.2f\n", aluno[i].media);
        printf("Situacao:%s", aluno[i].resultado[i]);
        printf("\n");
    }

    return 0;
}