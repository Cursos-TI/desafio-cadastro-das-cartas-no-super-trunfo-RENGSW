#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas - Nível Novato
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];
    char cidade1[50];
    char cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int turistico1;
    int turistico2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // CADASTRO DA CARTA 1

    printf("Cadastre a Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' para o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto (PIB): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos na cidade: ");
    scanf("%d", &turistico1);


    // CADASTRO DA CARTA 2

    printf("\nCadastre a Carta 2\n");
    
    printf("Digite uma letra de 'A' a 'H' para o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto (PIB): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos na segunda cidade: ");
    scanf("%d", &turistico2);
    
    printf("\n________________________________________\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // EXIBIÇÃO DAS DUAS CARTAS:

    // DADOS DA CARTA 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);
    
    printf("\n_______________________________________\n");
    
    // DADOS DA CARTA 2
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);


    return 0;
}