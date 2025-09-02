#include <stdio.h>

int main(){

   int n = 5;
   int *ponteiro ; 

   ponteiro = &n;
   printf("O valor de n é %d\n", n); // Aqui simplesmente mostramos o valor armazenado na variável n.
   printf("O endereço de n é %p\n", &n);// Aqui mostramos o endereço da variável n na memoria. 

   printf("O conteúdo apontado pelo ponteiro é %d\n", *ponteiro);
   printf("O endereço apontado pelo ponteiro é %p\n",&n );

   printf("O endereço do ponteiro é %p\n", &ponteiro);// Aqui mostramos o endereço do ponteiro na memoria
   printf("o valor de ponteiro é %d\n", ponteiro); 
}