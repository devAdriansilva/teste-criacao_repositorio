#include <stdio.h>

void main(){
    int idade, quantidade;
    float altura;
    double salario;
    char letra;
    char nome[30] = "Adriano";
    
    idade = 36;
    altura = 1.59;
    salario = 1518.00;

    printf(" NOME: ->  %s \n IDADE: -> %d \n ALTURA: -> %.2fmt \n SALÁRIO: -> R$%.2lf ", nome, idade, altura, salario);

   // return 0;
    
}