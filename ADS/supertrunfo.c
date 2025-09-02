#include <stdio.h>
int main(){
    char estado;
    char codigo [20] = "A01";
    char cidade [40];
    int população, PontosTuristicos;
    float area, PIB;

    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Qual a população: ");
    scanf("%d", &população);

    printf("Area em KM2: ");
    scanf("%f", &area);

    printf("informe o PIB: ");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos? : ");
    scanf("%d", &PontosTuristicos);

    printf("Carta 1: \n");
    printf(" Estado: %s \n Código %s \n Nome da Cidade: %s \n População: %d \n Area: %.2f \n PIB: %f\n Pontos Turisticos: %d ", estado, codigo, cidade, população, area, PIB, PontosTuristicos);

    return 0;
    
}