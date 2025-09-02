#include <stdio.h>

int main()
{
    int tabuleiro [10][10];
    

    char letra = 'A';
    printf("\n");
    printf("");
   // LOOP PARA EXIBIÇÃO DAS LETRAS DE DEMARCAÇÃO DAS COLUNAS
    for (int c = 0; c < 10; c++)
    {
        printf("%c ",letra);
        letra ++;
    }
    printf("\n");
   // LOOP PARA PREENCHIMENTO DO TABULEIRO(MATRIZ)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j]= 0;
        }
        
    }
    // LOOP PARA EXIBIÇÃO DO TABULEIRO
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");   
    }
    printf("\n");
     //POSICIONAMENTO DOS NAVIOS

     printf("NAVIOS POSICIONADOS \n\n");
            //Navio horizontal
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           if ((i==2) && (j > 2 && j < 6))
           {
            tabuleiro[i][j] = 4;
           } 
           // Navio Vertical
           if ((j==3)&&( i >3 && i < 7))
           {
            tabuleiro[i][j]= 4;
           } 
           //Navio diagonal 
           if((i == j) && (i > 3 && i < 7))
           {
            tabuleiro[i][j]= 4;
           }
              
        }

    }

    // EXIBIÇÃO DO TABULEIRO COM NAVIOS POSICIONADOS
    for(int i = 0; i < 10; i++ )
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
