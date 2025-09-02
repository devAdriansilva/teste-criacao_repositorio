#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media , soma;
     printf("******************************************* \n");
    printf("##### PROGRAMA DE CALCULO DE MÉDIAS #####\n");
    printf("*******************************************\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma / 3;
    printf("\n");
    printf("*******************************************\n");
    printf("   ########### RESULTADO ##############\n");
    printf("A média do aluno foi %.1f \n", media);
     printf("*******************************************");
    return 0;
}