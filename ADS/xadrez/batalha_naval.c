#include <stdio.h>

int main(){
    int tabuleiro [10][10];
    int navio1[3];
    int navio2[3];

    for (int c= 0; c < 3; c++)
    {
       navio1[c] = 3;
       navio2[c]= 4;
    }
    
   
     char letra = 'A';
     printf("\n");
     printf("  ***********************\n");
     printf("  TABULEIRO BATALHA NAVAL \n");
     printf("  ***********************\n");
     printf("     ");
    for (int c = 0; c < 10; c++, letra++)
    {
      
       printf("%c ", letra);
    }
    printf("\n");

   
     // PREENCHIMENTO DO TABULEIRO
    for (int l = 0; l < 10; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            tabuleiro[l][c]= 0;
        }  
    }
    
    // POSICIONAMENTO DOS NAVIOS
    for (int l = 0; l < 10; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            if ((l == 2) && (c > 2 && c < 6 ))
            {
                tabuleiro[l][c] = navio1[1]; //NAVIO NA HORIZONTAL
            }

            if ((l > 3 && l < 7) && (c == 4))
            {
                tabuleiro[l][c] = navio2[1]; //NAVIO NA VERTICAL
            }
            
            
        }
        
    }
    
    // EXIBINDO TABULEIRO PREENCHIDO
     int linha = 1;
    for (int l = 0; l < 10; l++, linha++)
    //Abaixo adiconamos uma estrutura condicional para melhor organizaçào 
    // e exibição da saida. Deslocando mais ou menos espacos antes da
    //primeira posição de cada linha da matriz.
    {  if (l == 9)
    {
        printf("%d-> ", linha);// menos deslocamento na linha 10 (indice 9)
    } else
    {
        printf("%d->  ", linha); // Mais deslocamento da linha 1 ate a linha 9(indice 1 ao 8)
    }

        for (int c = 0; c < 10; c++)
        {
         printf("%d ", tabuleiro[l][c]);          
        }
        printf("\n");
        
    }
    return 0;
}