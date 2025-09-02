#include <stdio.h>
 int main()
 {
    int idade = 19;
    

  //char categoria =( idade >=18) ? "Maior de idade":"Menor de idade";
  //printf("você  tem %d anos e por isso é %s ", idade, categoria ); 

 char palavra[] = "Adriano", nome2[20] = "Luiz"; 
 char* nome= nome2;
    
  printf("%s\n", nome);
 nome = "pedro";
 printf("%s\n", nome);
 
  printf("%s\n", nome2);

 
    return 0;
   
 }
 