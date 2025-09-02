#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int  numero_jogador, numero_computador, escolha ;
    char tipo_comparação;

    numero_computador = rand() % 100 + 1;

    printf("Bem vindo ao Jogo - MENOR, MAIOR ou IGUAL!!:\n");
    printf("Você deve digitar um número e escolher o tipo de comparação\n");
    printf("M -> Maior\n");
    printf("N -> Menor\n");
    printf("I -> Igual\n");

    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numero_jogador);

    printf("Escolha a comparação:\n ");
    scanf(" %c", &tipo_comparação);

   

    switch (tipo_comparação)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção MAIOR.\n");
        escolha = numero_jogador > numero_computador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção MENOR.\n");
        escolha = numero_jogador < numero_computador ? 1: 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção IGUAL.\n");
        escolha = numero_jogador == numero_computador ? 1: 0;  
        break;  
    default:
       printf("Opção inválida!");
       break;
    }

    printf("O número sorteado foi %d. O número que você scolhe foi %d.\n",numero_computador, numero_jogador);
    if (escolha == 1)
    {
        printf("Parabens você acertou! ");
    } else
    {
        printf("Que pena você errou!" );
    }
       
    return 0;
}