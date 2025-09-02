#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int escolhaJogador, escolhaComputador;
   srand(time(0));
   // pedra vence tesoura
   // papel vence pedra
   // tesoura vence papel

   printf("###### JOGO DE JOKENPÔ ##### \n");
   
   printf("[1] - Pedra\n");
   printf("[2] - Papel\n");
   printf("[3] - Tesoura\n");
   printf("Escolha a opção: ");
   scanf("%d", &escolhaJogador);
   escolhaComputador = rand() % 3 + 1;

   switch (escolhaJogador)
   {
   case (1):
        printf("Escolha Jogador -> Pedra -");
        break;
   case (2): 
        printf("Escolha Jogador -> Papel -");
        break;
   case (3):
        printf("Escolha Jogador -> Tesoura -");
        break;
   default:
        printf("Opção Inválida!");
        break;
   }

   switch (escolhaComputador)
   {
   case (1):
        printf("Escolha Computador ->  Pedra  \n");
        break;
   case (2):
        printf("Escolha Computador ->  Papel\n");
        break;
   case (3):
        printf(" Escolha Computador ->  Tesoura \n");
        break;     
   default:
        break;
   }
   if (escolhaJogador == escolhaComputador)
   {
    printf("Jogo empatado!!");

   } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
              (escolhaJogador == 2 && escolhaComputador == 1) ||
              (escolhaJogador == 3 && escolhaComputador == 2) )
   {
     printf("$$$ - Parabens você venceu!! - $$$");
   } else {
    printf("Que pena, Você perdeu!!");
   }
   

    return 0;
}
