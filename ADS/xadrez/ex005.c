#include <stdio.h>

int main(){

    int l, c;
    int n;

    for (n=0 ; n < 10 ; n++)
    {
        if (n % 2 != 0)
        {
          printf("O valor %d é IMPAR!\n", n);
        } else if (n == 6)
        {
            continue;
        } else
        {
             printf("O valor %d é PAR!\n", n);
        }
        
        
       
          
               
        
        
           
    }
    

    return 0;
}