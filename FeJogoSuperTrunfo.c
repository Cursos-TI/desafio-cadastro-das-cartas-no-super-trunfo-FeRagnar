#include <stdio.h>

int main() {
    
    char Estado[50];
    char CodigoDacarta[50];
    char Nomedacidade[50];
    int Populacao;
    float Area;
    float PIB; 
    int Numerodepontosturisticos;

    
    char estado[50];
    char codigodacarta[50];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib; 
    int numerodepontosturisticos;

    printf("\n");
    printf("Carta 01\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", CodigoDacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Numerodepontosturisticos);

    // Espaço entre as cartas
    printf("\n");

    printf("Carta 02\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numerodepontosturisticos);

    // Exibição dos dados coletados
    printf("\n--- DADOS DAS CARTAS ---\n");

    printf("\n");
    printf("\nCarta 01\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", CodigoDacarta);
    printf("Nome da cidade: %s\n", Nomedacidade);
    printf("População: %d\n", Populacao);
    printf("Área²: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numerodepontosturisticos);


    printf("\n");
    printf("\nCarta 02\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numerodepontosturisticos);

    return 0;
    
}