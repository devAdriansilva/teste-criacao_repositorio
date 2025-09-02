#include <stdio.h>

int  main(){
    int idade, matricula;
    float altura;
    char nome [50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome); 
    
    printf("Digite sua Matrícula:");
    scanf("%d", &matricula);

    printf("Olá %s. Você tem %i anos. Sua altura é %.2f Sua mátricula é %d", nome,idade, altura, matricula );
    return 0;  
}