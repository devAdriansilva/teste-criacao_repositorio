#include <stdio.h>

int main(){

    //Torre: Move-se em linha reta horizontalmente ou verticalmente.  5 frente
    //Bispo: Move-se na diagonal. 5 diagona direita
    //Rainha: Move-se em todas as direções. 8 esquerda
    int torre, bispo, rainha;

    printf("Movimentos da torre:\n");
    for (torre = 1 ; torre <= 5 ; torre++)
    {
       printf("Cima \n");
    }
    printf("(%d vezes)\n \n",torre );

    bispo = 1;
    printf("Movimentos do Bispo:\n \n");
    while (bispo <= 5)
    {
    printf("Cima \n");
    printf("Direita \n");
    bispo ++;
    }
    printf("\n(%d vezes Cima) \n( %d vezes Direita ) \n\n",bispo, bispo );

    printf("Movimentos da Rainha:\n \n");

    rainha = 1;
    do
    {
        printf("Esquerda\n");
        rainha ++;
        
    } while (rainha < 8);
    
    printf("\n(%d Vezes Esquerda)", rainha);

    return 0;
}
 