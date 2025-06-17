#include <stdio.h>

int main() {
    // Definição das variáveis da primeira carta
    int pontosTuristicos1;
    unsigned long int populacao1;
    float pib1, area1;
    char codigo1[4], cidade1[50], estado1;

    // Definição das variáveis da segunda carta
    int pontosTuristicos2;
    unsigned long int populacao2;
    float pib2, area2;
    char codigo2[4], cidade2[50], estado2;

    // Entrada dos dados da primeira carta 
    printf("Vamos começar com o registro da primeira carta!\n");

    printf("Insira o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Insira o código de identificação: ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População de %s: ", cidade1);
    scanf("%lu", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos em %s: ", cidade1);
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada dos dados da segunda carta
    printf("Agora vamos registrar a segunda carta.\n");

    printf("Insira o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Insira o código de identificação: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População de %s: ", cidade2);
    scanf("%lu", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos em %s: ", cidade2);
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos indicadores
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (area1 / populacao1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (area2 / populacao2);

    // Exibição dos dados
    printf("\n======= PRIMEIRA CARTA =======\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("\n======= SEGUNDA CARTA =======\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação das cartas
    printf("\n======= COMPARAÇÃO DAS CARTAS =======\n");

    printf("\nPopulação: %s venceu!", 
           (populacao1 > populacao2) ? cidade1 : (populacao1 < populacao2) ? cidade2 : "Empate");

    printf("\nÁrea: %s venceu!", 
           (area1 > area2) ? cidade1 : (area1 < area2) ? cidade2 : "Empate");

    printf("\nPIB: %s venceu!", 
           (pib1 > pib2) ? cidade1 : (pib1 < pib2) ? cidade2 : "Empate");

    printf("\nPontos Turísticos: %s venceu!", 
           (pontosTuristicos1 > pontosTuristicos2) ? cidade1 : (pontosTuristicos1 < pontosTuristicos2) ? cidade2 : "Empate");

    printf("\nDensidade Populacional: %s venceu!", 
           (densidade1 > densidade2) ? cidade1 : (densidade1 < densidade2) ? cidade2 : "Empate");

    printf("\nPIB per Capita: %s venceu!", 
           (pibPerCapita1 > pibPerCapita2) ? cidade1 : (pibPerCapita1 < pibPerCapita2) ? cidade2 : "Empate");

    printf("\nSuper Poder: %s venceu!\n", 
           (superPoder1 > superPoder2) ? cidade1 : (superPoder1 < superPoder2) ? cidade2 : "Empate");

    printf("\n======================================\n");

    return 0;
}