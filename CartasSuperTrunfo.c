#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Mestre)

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // -----------------------------
    // CADASTRO DA CARTA 1
    // -----------------------------
    printf("Cadastre a Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' para o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número de habitantes: ");
    scanf("%ld", &populacao1);

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto (PIB) em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &turistico1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + turistico1 + pibPerCapita1 + (1 / densidade1);

    // -----------------------------
    // CADASTRO DA CARTA 2
    // -----------------------------
    printf("\nCadastre a Carta 2\n");

    printf("Digite uma letra de 'A' a 'H' para o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes: ");
    scanf("%ld", &populacao2);

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto (PIB) em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &turistico2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + turistico2 + pibPerCapita2 + (1 / densidade2);

    // -----------------------------
    // EXIBIÇÃO DAS CARTAS
    // -----------------------------
    printf("\n________________________________________\n");

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n_______________________________________\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // -----------------------------
    // COMPARAÇÃO DAS CARTAS
    // -----------------------------
    printf("\n\nComparação de Cartas:\n");

    int resultado;

    resultado = (populacao1 > populacao2);
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = (area1 > area2);
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = (pib1 > pib2);
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = (turistico1 > turistico2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = (densidade1 < densidade2); // menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = (pibPerCapita1 > pibPerCapita2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = (superPoder1 > superPoder2);
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
