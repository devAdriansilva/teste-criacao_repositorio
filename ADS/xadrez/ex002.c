#include <stdio.h>

int main(){

    int n;
     do
     {
        printf("Digite um número PAR par aencerrar : ");
         scanf("%d", &n);
         if (n %2 == 0 )
         {
             printf("O número %d é PAR. \n", n);
         } else
         {
             printf("O número %d é IMPAR. \n", n);
         }
                 
     } while (n % 2 != 0 );
      
     printf("Você Digitou um número PAR. Saindo do programa...");

    return 0;
}