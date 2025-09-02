#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

    int matriz [LINHAS][COLUNAS];

    int valor= 0;
   for (int i = 0; i < LINHAS; i++)
   {
        for (int j = 0; j < COLUNAS; j++)
        {
            valor ++;
            matriz[i][j]= valor;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
        
   }
   


    return 0;
}