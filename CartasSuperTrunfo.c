#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[3];           // Ex: "SP"
    char codigo[4];           // Ex: "A01"
    char nomeCidade[50];      // Ex: "São Paulo"
    int populacao;            // População da cidade
    float area;               // Área em km²
    float pib;                // PIB em bilhões
    int pontosTuristicos;     // Número de pontos turísticos
    float densidadePopulacional;  // População / Área
    float pibPerCapita;           // PIB / População
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1, carta2;

    // ===== LEITURA DOS DADOS =====
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", carta1.estado);
    printf("Codigo da carta: ");
    scanf("%3s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", carta2.estado);
    printf("Codigo da carta: ");
    scanf("%3s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ===== CÁLCULOS =====
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===== ESCOLHA DO ATRIBUTO PARA COMPARAR =====
    // Aqui você escolhe qual atributo será comparado
    // Exemplo: comparar população
    int atributoEscolhido = 1; // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade, 5 = PIB per Capita

    printf("\n=== Comparacao de Cartas ===\n");

    if (atributoEscolhido == 1) {
        printf("Atributo: Populacao\n");
        printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        } else if (carta2.populacao > carta1.populacao) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        } else {
            printf("Resultado: Empate!\n");
        }

    } else if (atributoEscolhido == 2) {
        printf("Atributo: Area\n");
        printf("Carta 1 - %s: %.2f km²\n", carta1.nomeCidade, carta1.area);
        printf("Carta 2 - %s: %.2f km²\n", carta2.nomeCidade, carta2.area);

        if (carta1.area > carta2.area)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.area > carta1.area)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 3) {
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s: %.2f\n", carta1.nomeCidade, carta1.pib);
        printf("Carta 2 - %s: %.2f\n", carta2.nomeCidade, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.pib > carta1.pib)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 4) {
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional);
        printf("Carta 2 - %s: %.2f hab/km²\n", carta2.nomeCidade, carta2.densidadePopulacional);

        // Menor densidade vence!
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoEscolhido == 5) {
        printf("Atributo: PIB per Capita\n");
        printf("Carta 1 - %s: %.6f\n", carta1.nomeCidade, carta1.pibPerCapita);
        printf("Carta 2 - %s: %.6f\n", carta2.nomeCidade, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }

    return 0;
}