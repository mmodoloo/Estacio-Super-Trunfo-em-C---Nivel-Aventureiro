#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char estado1;
    char codigo1[10];
    char cidade1[50];
    float populacao1;
    char unidadePopulacao1[20];
    char complementePopulacao1[20];
    float area1;
    char unidadeArea1[20];
    char complementeArea1[20];
    float pib1;
    char unidadePib1[20];
    char complementoPib1[20];
    int pontosTuristicos1;

    char buffer[100]; // buffer temporário para ler tudo como string

    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, " %c", &estado1);

    printf("Codigo da carta (ex A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Populacao (exemplo: 11 mil habitantes): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f %s %s", &populacao1, unidadePopulacao1, complementePopulacao1);

    printf("Area (exemplo: 1 mil km): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f %s %s", &area1, unidadeArea1, complementeArea1);

    printf("PIB (exemplo: 1 mil reais): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f %s %s", &pib1, unidadePib1, complementoPib1);

    printf("Numero de pontos turisticos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pontosTuristicos1);

    // Calcula a densidade populacional e o PIB per capita
    float densidadePopulacional1 = populacao1 / area1;
    float perCapita1 = pib1 / populacao1;

    // Exibição das informações
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %.0f %s %s\n", populacao1, unidadePopulacao1, complementePopulacao1);
    printf("Area: %.0f %s %s\n", area1, unidadeArea1, complementeArea1);
    printf("PIB: %.0f %s %s\n", pib1, unidadePib1, complementoPib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f habitantes por quilometro quadrado\n", densidadePopulacional1);
    printf("PIB per capita: R$%f\n", perCapita1);

    return 0;
}
