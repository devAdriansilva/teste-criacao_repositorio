#include <stdio.h>

int main(){

    float temp, umid;
    unsigned int estoque;
    int estoqueMinino= 1000;

    printf("informe a temperatura: ");
    scanf("%f", &temp);

    printf("Informe a umidade: ");
    scanf("%f", &umid);

    printf("Informe o estoque atual: ");
    scanf("%u", &estoque);

    if (temp >= 30)
    {
       printf("A temperatura está alta!\n");
    } else {
        printf(" A temperatura está dentro dos parâmetros!\n");
    }

    if (umid > 50)
    {
        printf("Humidade Elevada!\n");
    } else {
        printf("Umidade dentro dos parâmetros!\n");
    }

    if (estoque < estoqueMinino)
    {
        printf("Estoque abaixo do mínimo.\n");
    } else {
        printf("Estoque dentro do Limite\n");
    }
    
    

    

  return 0;
}