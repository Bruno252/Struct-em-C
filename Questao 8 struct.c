#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_aluno{

    char turma[250];
    char nome[250];
    int idade;
    float nota[2];
    float media;
    char situacao[250];

};

struct dados_professor{

    char nome[250];
    char disciplina[250];
    char turma[250];


};

int main(){

struct dados_aluno aluno[3];
struct dados_professor professor[2];
int i,j;
float soma;


//Aluno
/*
*/
    printf("Aluno:\n");
for(i=0;i<3;i++){

    fflush(stdin);
    printf("\nTurma:");
    fgets(aluno[i].turma,sizeof(aluno[i].turma),stdin);
    
    printf("Nome:");
    fgets(aluno[i].nome,sizeof(aluno[i].nome),stdin);

    printf("Idade:");
    scanf("%d",&aluno[i].idade);
    fflush(stdin);

    for(j=0;j<2;j++){

        printf("%d Nota:",j+1);
        scanf("%f",&aluno[i].nota[j]);
        soma+=aluno[i].nota[j];

    }
    aluno[i].media=soma/j;
    soma=0;

    if(aluno[i].media>=7){
        strcpy(aluno[i].situacao,"Aluno esta aprovado\n");

    }else if(aluno[i].media>=5 && aluno[i].media<7){
        strcpy(aluno[i].situacao,"Aluno esta em recuperacao\n");

    }else{
        strcpy(aluno[i].situacao,"Aluno esta reprovado\n");

    }
}

fflush(stdin);

//Professor
    printf("\nProfesso:\n");
    for(i=0;i<2;i++){

        fflush(stdin);
        printf("\nNome:");
        fgets(professor[i].nome,sizeof(professor[i].nome),stdin);

        for(j=0;j<1;j++){

            printf("%d Disciplina:",j+1);
            fgets(professor[i].disciplina,sizeof(professor[i].disciplina),stdin);

        }

        for(j=0;j<1;j++){

            printf("%d Turma:",j+1);
            fgets(professor[i].turma,sizeof(professor[i].turma),stdin);

        }

    }


   /*
   */ //Aluno
    system("cls || clear");
    printf("\n");
    printf("Aluno:\n");
    for(i=0;i<3;i++){

        printf("__________________________________\n");
        printf("Numero da Turma:%s",aluno[i].turma);
        printf("Nome:%s",aluno[i].nome);
        printf("Idade:%d\n",aluno[i].idade);

            for(j=0;j<2;j++){
                printf("%d Nota:%.2f\n",j+1,aluno[i].nota[j]);

        }

        printf("Media:%.2f\n",aluno[i].media);
        printf("Situacao:%s",aluno[i].situacao);
        printf("\n");
    }

printf("\n\n\n");
    //Professor
    printf("Professor:\n");
    for(i=0;i<2;i++){

        printf("__________________________________\n");
        printf("Nome:%s",professor[i].nome);
        
        for(j=0;j<1;j++){
            printf("%d Disciplina:%s",j+1,professor[i].disciplina);
        }
        for(j=0;j<1;j++){
            printf("%d Turma:%s",j+1,professor[i].turma);
        }

    }
    /*
    */

    return 0;
}