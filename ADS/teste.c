#include <stdio.h>

int main(){
   char nome[30];
   int idade, matricula;
   float altura;

   printf("Digite seu nome: ");
  fgets(nome, 25, stdin);

   printf("Digite sua idade: ");
   scanf("%d", &idade);
   
   printf("Digite sua altura: ");
   scanf("%f", &altura);
   
   printf("Informe o numero de sua matrícula: ");
   scanf("%d", &matricula);

   printf("O aluno %s com %d anos, e medindo %.2f de altura, foi matriculado no numero %d", nome, idade, altura, matricula);

   return 0;
}