#include <stdio.h>

int main(){
    int linha = 0, colunas = 0;
    char letra = 'A';
    int line = 0;
    int tabuleiro[10][10];
    printf("\n");
    printf(" -----------------------\n");
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf(" -----------------------\n");
    printf("     ");
    for (linha = 0; linha < 10; linha++, letra++) // Definidor de colunas (A - J)
    {
        printf("%c ", letra); // Aqui está a sequência horizonta (A - j)
    }
    printf("\n"); // Quebra de linha
    // Aqui temos o aninhamento dos loops para preenchimento da matriz [10]x[10]  
    for (linha = 0, line = 1; linha < 10; linha++, line++)
    {    //LOOP EXTERNO
        if (linha < 9) // Para manter o alinhamento vertical na impressão do dados criamos
        // uma condição em que no primeiro caso (quando a linha for menor que 9), aumentamos 
        // o distanciamento entre os caracteres com espaços vazios (" ").
       {
         printf("%d->  ", line);
       } else{  // No segundo caso, ou seja quando passamos da linha 9, o espaçamento entre 
        // os caracteres é menor.
        printf("%d-> ", line);
       }
       for (colunas = 0; colunas < 10; colunas++) 
       { // LOOP INTERNO 
       printf("0 ");
       }
        printf("\n"); //quebra de linha no final de cada loop externo.  
    }
    printf("------------------------\n");
    printf("\n");
    printf("***************************\n");

   //POSICIONAMENTO DOS NAVIOS NO TABULEIRO
    printf("-------------------------\n");
    printf("POSICIONAMENTO DOS NAVIOS \n");
    printf("-------------------------\n");
     char navio1 = '#' ;
     int navio2= 3;

    letra = 'A';
    printf("     ");
    for (colunas = 0; colunas < 10; colunas++, letra++)
    {
        printf("%c ", letra);
        
    }
    printf("\n");

    for (linha = 0, line = 1; linha < 10; linha++, line++)
    {
        if (linha < 9)
        {
            printf("%d->  ", line);
        } else{
            printf("%d-> ", line);
        }
              
       for (colunas = 0; colunas < 10; colunas++)
       {
        if (colunas > 2 && colunas < 6)
        {
            tabuleiro[linha][colunas]= navio2;
          
        } else {
             printf("0 " );
        }
       
       }
       printf("\n");
    }
    
    for (linha = 0, line = 1; linha < 10; linha++, line++)
    {
       
        for (colunas  = 0; colunas < 10; colunas++)
        {
            
        }
       
    }
    
    
    

    return 0;
}