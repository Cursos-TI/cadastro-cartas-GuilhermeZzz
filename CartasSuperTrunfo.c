#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char codigo1[] = "A01";
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da carta 2
    char codigo2[] = "A02";
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro da carta 1
    printf("=== Cadastro da Carta %s ===\n", codigo1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a area em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    // Cadastro da carta 2
    printf("\n=== Cadastro da Carta %s ===\n", codigo2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a area em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nCarta %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}