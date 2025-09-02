#include <stdio.h>

int main(){

    int matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                matriz[i][j]= 1;
            } else
            {
                 matriz[i][j]= 0;
            }
            
            
           
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == i+1)
            {
                printf("%d ",matriz[i][j]);
            } else
            {
                 printf("%d ",matriz[i][j]);
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 9; i++)
    {
        
    }
    
    
    
    return 0;
}