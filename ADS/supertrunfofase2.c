#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));
    // declaração das variáveis
    char estado, estado1;
    char codigo[4], codigo1[4], atributo[20];
    char cidade[20], cidade1[20];
    unsigned long int populacao, populacao1;
    float area, area1,densidade_populacional, densidade_populacional1, super_poder, super_poder1;
    double pib, pib1,pib_percapita, pib_percapita1;
    int pontos_turisticos, pontos_turisticos1;
    int result, result1, escolha;
    
    

    //Entrada de dados para a carta 1
    printf("CARTA 1: \n");

    printf("Digite um estado (entre A e H ): ");
    scanf(" %c", &estado);

    printf("Digite um código para a carta: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a area de cidade[KM2]: ");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: ");
    scanf("%lf", &pib);

    printf("Quantidade de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos);

    //Calculo da densidade populacional, densidade invertida e PIB percapita carta 1
    densidade_populacional = populacao / area ;
    pib_percapita = (pib * 1000000000) / populacao;
    float densidade_invertida = 1 / densidade_populacional;

    // calculo do Super Poder para carta 1
    super_poder = populacao + area + pib + pontos_turisticos + pib_percapita + densidade_invertida;
    
    


    printf("\n");

    //Entrada de dadps para a carta 2
    printf("CARTA 2: \n");
    printf("Digite um estado (entre A e H ): ");
    scanf(" %c", &estado1);

    printf("Digite um código para a carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade [KM2]: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade: ");
    scanf("%lf", &pib1);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Calculo da densidade populacional, densidade invertida e PIB percapita carta 2
    densidade_populacional1 = populacao1 / area1 ;
    pib_percapita1 = (pib1 * 1000000000 ) / populacao1;
    float densidade_invertida1 = 1 / densidade_populacional1;

     // calculo do Super Poder para carta 2
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + densidade_invertida1;
    

// Resultado da captura de dados referentes à carta 1 
     printf("Carta 1: \n");
     printf("Estado: %c \n", estado); 
     printf("Código: %s \n", codigo);
     printf("Nome da cidade: %s \n", cidade);
     printf("População: %d \n", populacao);
     printf("Área: %.2f km2 \n", area);
     printf("PIB: %.2lf bilhões de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n",pontos_turisticos);
     printf("Densidade Populacional: %.2lf\n",densidade_populacional);
     printf("PIB per Capita: %.2lf\n", pib_percapita);

     printf("\n");

    // Resultado da captura de dados referentes à carta 2 
     printf("Carta 2:\n");
     printf("Estado: %c \n", estado1);
     printf("Código: %s \n", codigo1);
     printf("Nome da Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f km2 \n ", area1); 
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
     printf("Densidade Populacional: %.2lf \n",densidade_populacional1);
     printf("PIB per Capita: %.2lf \n", pib_percapita1);

    printf("Escolha o atributo para a batalha:\n ");
    printf("1 -> População \n");
    printf("2 -> Área \n");
    printf("3 -> PIB \n");
    printf("4 -> Pontos Turisticos \n");
    printf("5 -> Densidade demográfica \n");
    printf("\n");
    scanf("%d", &escolha);
    
   float valor1, valor2;
   switch (escolha)
   {
   case 1:
    valor1 = populacao;
    valor2 = populacao1;
    strcpy(atributo, "população");
    break;
   case 2:
    valor1 = area;
    valor2 = area1;
    strcpy(atributo, "Área");
    break;
   case 3:
    valor1 = pib;
    valor2 = pib1;
    strcpy(atributo, "PIB");
    break;
   case 4:
    valor1 = pontos_turisticos;
    valor2 = pontos_turisticos1;
    strcpy(atributo, "Pontos Turísticos");
    break;
   case 5:
    valor1 = densidade_populacional;
    valor2 = densidade_populacional1;
    strcpy(atributo, "Dens. Demográfica");
    break;   
   default:
    printf("Opçào inválida!!");
    break;
   }
   

if (escolha == 5) {  
    if (valor1 < valor2) {
        printf("Carta 1 venceu!\n");
    } else if (valor2 < valor1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
} else {  
    if (valor1 > valor2) {
        printf("Carta 1 venceu!\n");
    } else if (valor2 > valor1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
}
printf("\nResumo da batalha:\n");
printf("Atributo escolhido: %s\n", atributo);
printf("Carta 1 (%s): %.2f\n", codigo, valor1);
printf("Carta 2 (%s): %.2f\n", codigo1, valor2);

    
    
    return 0;
}
