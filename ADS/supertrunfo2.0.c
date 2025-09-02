#include <stdio.h>

int main(){
     char estado[3], codigo [5], cidade [20];
     int populacao, pontos_turisticos;
     float area ,pib;
     
     printf("Digite o estado: ");
     scanf("%s", estado);
    
     printf("Digite o código da carta: ");
     scanf("%s", codigo);
    
     printf("Digite o nome da cidade: ");
     scanf("%s",cidade);
    
     printf("Digite a população: ");
     scanf("%d", &populacao);
    
     printf("Digite a area [KM2]: ");
     scanf("%f", &area);

     printf("Informe o PIB: ");
     scanf("%f", &pib);

     printf("Pontos turisticos: ");
     scanf("%d", &pontos_turisticos);

    printf("Aqui está o resultado: \n");
    printf("ESTADO: %s \n CÓDIGO: %s \n CIDADE: %s \n POPULAÇÃO: %d \n AREA: %.2f \n PIB: %.2f \n PONTOS TURÍSTICOS: %d ", estado, codigo, cidade, populacao, area, pib, pontos_turisticos);
    
    
     return 0;
}