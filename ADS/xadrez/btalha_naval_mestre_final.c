#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

int main(){
    int tabuleiro[LINHAS][COLUNAS];

    //Preenchimento da matriz
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j]= 0;
        }
    }
    
    //Exibindo a matriz antes do prenchimento

    printf("## Tabuleiro Batalha Naval ## \n");
    for (int i = 0; i < 10; i++)
    {
        printf("->");
        for (int j = 0; j < 10; j++)
        {
            printf("%2d",tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // Cone
    for (int i = 1; i < 4; i++)
    {
        for (int j = 5; j < 10; j++)
        {
            // Lonta do cone
            if ((i == 1)&&( j == 7 ))
            {
                tabuleiro[i][j]= 4;
            }

            // Linha horizonta do meio
            if (( i == 2)&&(j > 5 &&  j < 9))
            {
                tabuleiro[i][j]= 4;
            }

            // Base do cone
            if ((i == 3)&&(j > 4 && j < 10))
            {
                tabuleiro[i][j]= 4;
            }   
        }  
    }
    // Losango
    for (int i = 5; i <10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 5)&&(j == 2 ))
            {
               tabuleiro[i][j] = 7;
            }
            if ((i == 6)&&(j > 0 && j < 4 ))
            {
                tabuleiro[i][j]= 7;
            }
            if ((i == 7)&&(j >= 0 && j < 5))
            {
                tabuleiro[i][j]= 7;
            } if ((i == 8)&&( j > 0 && j <4))
            {
                tabuleiro[i][j]= 7;
            } if ((i== 9)&&(j > 1 && j < 3))
            {
                tabuleiro[i][j]= 7;
            } 
        }
    }

    // Cruz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // Linha vertical da cruz
          if ((i >= 0 && i < 5)&&(j == 2))
          {
            tabuleiro[i][j]= 1;
          }

          // Linha horizontal da cruz
          if ((i == 2)&&(j >= 0 && j < 5))
          {
             tabuleiro[i][j]= 1;
          }
        }  
    }

 //Exibindo a matriz depois do prenchimento
 printf("## Tabuleiro após preenchimento ## \n");
    for (int i = 0; i < 10; i++)
    {
        printf("->");
        for (int j = 0; j < 10; j++)
        {
            printf("%2d",tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}