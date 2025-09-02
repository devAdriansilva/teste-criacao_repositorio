#include <stdio.h>

int main(){

   int n, n2, n3;
   int *ponteiro, *ponteiro2; 

     printf("valor inicial do ponteiro -> %d\n", ponteiro);
     printf("valor inicial do ponteiro -> %p\n", ponteiro);
     
   printf(" Valor inicial de n -> %d\n",n); // valor na variável n (zero ou lixo de memória).
   printf(" Endereço de n -> %p\n", &n);// endereço da variável n

   printf("Endereço de ponteiro -> %p \n", &ponteiro); // endereço da variável ponteiro

   n= 5; // A variével n recebe o valor 5

   
  //Atribuindo um ponteiro para a variável. Ou indicando para onde o ponteiro vai apontar.
   ponteiro = &n; // A variável ponteiro recebe o enderço de n. Ou seja, agora o ponteiro tem pra onde apontar.

   printf("Novo valor de n -> %d\n",n); // Agora mostramos o valor na variável n que neste ponto é 5.
   printf("Novo valor do ponteiro -> %d\n", ponteiro);
   printf("Novo valor do ponteiro -> %p\n", ponteiro);

   //Definindo para onde o ponteiro 'ponteiro2' vai apontar.
   ponteiro2 = &n2;
   printf(" valor de n2 antes de ser inicializado -> %d\n", n2);

   //Definindo um valor para n2
   n2= 15;
   printf(" valor de n2 depois de ser inicializado -> %d\n", n2);

   // alterando o valor de n2 através do ponteiro
   *ponteiro2 = 10; 

   n3 = 2;
   printf("Valor de n3 após inicialização -> %d\n",n3);
    // copiando o valor de uma variável 
   n3 = *ponteiro2;

   printf("%d\n", n2);
   printf("%d\n",n3);
  return 0;
}