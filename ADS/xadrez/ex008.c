#include <stdio.h>

int main(){
    int index;
    char *alunos [][3]={
    {"1 Pedro", "Engenharia", "Mestrado"},
    {"2 Juliana", "Arquitetura" , "Técnico"},
    {"3 André", "Psicologia", "Doutorado"},
    {"4 Ana","Desenvolvedor","Tecnólogo"}
    };
    printf("Informe o número do aluno: ");
    scanf("%d", &index);
    printf("NOME: %s/ CURSO: %s / NÍVEL: %s", alunos[index-1][0], alunos[index-1][1], alunos[index-1][2]);
    printf("\nNOMES DOS ALUNOS\n");
    for (index= 0; index <= 3; index++)
    {
        printf("%s\n", alunos[index][0]);
    }
    printf("CURSOS: \n");
    for (index = 0; index < 4 ; index++)
    {
        printf("%s\n", alunos[index][1]);
    }
    
    

    return 0;
}