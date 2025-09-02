#include <stdio.h>

int main(){

    int c = 0, dobro;
    while (c <= 100)
    {
        if (c % 2 == 0)
        {
            dobro = c * 2;
            printf("O número %d é um número PAR. O dobro desse valor é %d\n", c, dobro);
            
            
        } else {
            printf("O número %d, é um número IMPAR.\n", c);
        }
        c++;
    }
    

    return 0;
}