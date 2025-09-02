#include <stdio.h>

int main(){
     int matriz1[2][2];
     int matriz2[2][2];
     int soma_matrizes[2][2];


   // Obtendo valores para a matriz1

   printf("Informe os valores da Matriz 1:\n");
     for (int i = 0; i < 2; i++)
     {
       for (int j = 0; j < 2; j++)
       {
         printf("Informe o valor [%d][%d] -> ", i, j);
         scanf("%d",&matriz1[i][j]);
       }
        } 
        
   printf("Informe os valores da Matriz 2:\n");       
      for (int i = 0; i < 2; i++)
      {
         for (int j = 0; j < 2; j++)
         {
            printf("Informe o valor [%d][%d]->", i, j);
           scanf("%d", &matriz2[i][j]); 
         }
         
      }

       printf("### MATRIZ 1 ###\n");
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d " ,matriz1[i][j]);
      }
      printf("\n");
    }
   printf("### MATRIZ 2 ###\n");
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        printf("%d ",matriz2[i][j]);
      }
      printf("\n");
    }
    
    
      //PROSSEGUIR COM A SOMA DAS MATRIZES
    printf("SOMA DAS MATRIZES\n");

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        soma_matrizes[i][j]= matriz1[i][j] + matriz2[i][j]; 
      }
      
    }

    for (int l = 0; l < 2 ; l++)
    {
      for (int c = 0; c < 2; c++)
      {
        printf("%d \t",soma_matrizes[l][c]);
      }
      printf("\n");
    }
    
    
   
        
    return 0;
}