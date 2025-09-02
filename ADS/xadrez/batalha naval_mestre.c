#include <stdio.h>
#define LINHAS 20
#define COLUNAS 20

int main(){
    int tabuleiro[LINHAS][COLUNAS];

    //Preenchimento da matriz
   for (int i = 0; i < LINHAS; i++)
   {
    for (int j = 0; j < COLUNAS; j++)
    {
        tabuleiro[i][j]= 0;
    }
   }

   //Exibição da matriz
   for (int i = 0; i < LINHAS; i++)
   {
    printf("->");
    for (int j = 0; j < COLUNAS; j++)
    {
        printf("%2d",tabuleiro[i][j]);
    }
    printf("\n");
   }

   printf("\n");
   
   //  Linha superior da matriz

   for (int j = 0; j < LINHAS; j++)
   {
        tabuleiro[0][j]= 1; 
   }

   // Lateral esquerda da matriz
   for (int i = 0; i < LINHAS; i++)
   {
        tabuleiro[i][0] = 1;
   }

   // Lateral direita da matriz
   for (int i = 0; i < LINHAS; i++)
   {
        tabuleiro[i][19] = 1;
   }

   // Linha inferior da matriz
   for (int j = 0; j < LINHAS; j++)
   {  
        tabuleiro[19][j]= 1;  
   }

   // Quadrado 
   for (int i = 1; i < 4 ; i++)
   {
    for (int j = 1; j < 4; j++)
    {
       tabuleiro[i][j] = 4;
    } 
   }

   // Cruz
   for (int i = 1; i < 4; i++)
   {
    for (int j = 5; j < 8; j++)
    {
        //Parte vertical da cruz
        if ((i > 0 && i < 8) && (j ==6 ))
        {
            tabuleiro[i][j] = 7;
        }
        //Parte horizontal da cruz
        if (i == 2 && j > 3 && j < 9)
        {
            tabuleiro[i][j] = 7;
        }   
    } 
   }
   
   // Triângulo
    for (int i = 4; i < 6; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            
                //ponta superior do triângulo
                if (i == 4 && j == 2 )
                {
                    tabuleiro[i][j] = 3;
                } 
                //base do triângulo
                if ((i == 5 ) && (j > 0 && j < 4))
                {
                    tabuleiro[i][j]= 3;
                }  
             
        }
    }

    // Triângulo maior
    for (int i = 5 ; i < 9; i++)
    {
        for (int j = 1; j < 8; j++)
        {
           if (( i == 5) && (j== 4))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i==6) &&(j > 2 && j < 6 ))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i == 7) && (j > 1 && j <7))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i==8)&& (j > 0 && j < 8))
           {
            tabuleiro[i][j]= 5;
           } 
        }  
    } 

    //Triângulo invertido
    for (int i = 1; i < 5; i++)
    {
        for (int j = 9; j < 16; j++)
        {
           if ((i == 1) && ( j > 8 && j < 16))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i == 2)&&( j > 9 && j <  15))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i == 3)&& (j > 10 && j < 14))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i == 4)&& (j == 12))
           {
            tabuleiro[i][j]= 5;
           }
        }  
    }

    //Losango
    for (int i = 10; i < 17; i++)
    {
        for (int j = 1; j < 8; j++)
        {
           if ((i == 10)&&( j == 4 ))
           {
            tabuleiro[i][j]= 5;
           }
           if ((i == 11)&&( j > 2 && j < 6 ))
           {
             tabuleiro[i][j]= 5;
           }
           if ((i == 12)&&( j > 1 && j < 7))
           {
             tabuleiro[i][j]= 5;
           }
           if ((i == 13)&&(j > 0 && j < 8))
           {
             tabuleiro[i][j]= 5;
           }
           if ((i == 14)&&( j > 1 && j < 7))
           {
             tabuleiro[i][j]= 5;
           }
           if ((i == 15)&& (j > 2 && j < 6))
           {
             tabuleiro[i][j]= 5;
           }
           if ((i == 16)&&(j == 4))
           {
             tabuleiro[i][j]= 5;
           }   
        }  
    }

   printf(" Matriz após alterações \n");
   //Matriz alterada
 
   for (int i = 0; i < LINHAS; i++)
   {
    printf("->");
    for (int j = 0; j < COLUNAS; j++)
    {
        printf("%2d",tabuleiro[i][j]);
    }
    printf("\n");
   }
   
   
    return 0;
}