#include <stdio.h>
 #define LINHAS 10
 #define COLUNAS 10
int main(){

    int tabuleiro[LINHAS][COLUNAS];

    // TABULEIRO INCIAL
    printf("      ### BATALHA NAVAL ###\n");
    for (int i = 0; i < LINHAS; i++)
    {
        printf("-> ");
       for (int j = 0; j < COLUNAS; j++)
       {
         tabuleiro[i][j]= 0;
         printf("%2d ",tabuleiro[i][j]);
       }
       printf("\n");
 
    }

    printf("\n");
    
    // POSICIONANDO OS NAVIOS
      
    /* Para o posicionamento dos navios em diagonal, adotamos uma 
    aboradgem diferente. Inicializamos uma estrutura de repetição com apenas um indice
    como contador. Neste caso o indice i será a variável de controle. O segundo indice 
    ( a variável j) é criada a cada loop recebendo sempre um valor resultante da soma do 
    valor do indicie i + 1. Isso resulta em um padrão, em que a cada loop, o valor do indice j
    é um acrescimo igual ao acrescimo do loop anterior. No primeiro loop o valor de j é i + 1 (6 + 1),
    ou seja 7. No segundo loop o valor de j é i + 1(7 + 1) ou seja 8. Na terceira temos novamente 
    i = 1 (8 = 9) ou seja 9. Nest ponto chegamos ao fim do loop for.*/
         // **NAVIO DIAGONAL 1 *** 
    for (int i = 6; i < 9; i++)
    {
        int j = i + 1;
        tabuleiro[i][j]= 3;
    }
         // **NAVIO DIAGONAL 2 *** 
    /* Aqui temos um padrão semelhante, porém, o valor inicial para o índice principal (i) é 5. 
    Além disso a cada loop o segundo indice (j) é o resultado da subtração da ultima posiçào de 
    i pelo valor atual de i. Apesar de ser um calculo diferente do caso anterior os resultadoos
    também seguem o mesmo padrão a cada loop. ou seja  o valor do indice j
    é um decrescimo igual ao decrescimo do loop anterior. */     
    for (int i = 5; i < 8; i++)
    {
        int j = 8-i;
        tabuleiro[i][j]= 3;
    }
    
    for (int i = 0; i < LINHAS ; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            // DEFININDO NAVIO HORIZONTAL
           if ((i == 2) && (j > 1)&& (j < 5 ))
           {
            tabuleiro[i][j] = 3;
           }
           // DEFININDO NAVIO VERTICAL
           if ((j ==5 ) && ( i > 3 && i < 7))
           {
            tabuleiro [i][j]= 3;
           }      
        }  
       
    }
    printf("    ### NAVIOS POSICIONADOS ### \n");
    for (int i = 0; i < 10; i++)
    {
        printf("-> ");
       for (int j = 0; j < 10; j++)
       {
         printf("%2d ", tabuleiro[i][j]);
       }
       printf("\n");
    }
    return 0;
}