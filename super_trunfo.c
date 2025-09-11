#include <stdio.h>

int main() {
    char estado1;
    char cartaCodigo1[20], cidadeNome1[50];
    unsigned long int populacao1;
    int turisticosPontos1;
    float kmArea1, pib1;
    float densidade1, pibPerCapita1, superPoder1;

    char estado2;
    char cartaCodigo2[20], cidadeNome2[50];
    unsigned long int populacao2;
    int turisticosPontos2;
    float kmArea2, pib2;
    float densidade2, pibPerCapita2, superPoder2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", cartaCodigo1);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", cidadeNome1);

    printf("Informe a População: ");
    scanf("%lu", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &kmArea1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &turisticosPontos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", cartaCodigo2);

    printf("Informe o Nome da Cidade: ");
    scanf("%s", cidadeNome2);

    printf("Informe a População: ");
    scanf("%lu", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &kmArea2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &turisticosPontos2);

    // Cálculos para a carta 1 e Convertendo bilhões para reais
    densidade1 = populacao1 / kmArea1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    superPoder1 = (float)populacao1 + kmArea1 + pib1 + (float)turisticosPontos1 + pibPerCapita1 + (1.0f / densidade1);

    // Cálculos para a carta 2 e Convertendo bilões para reais
    densidade2 = populacao2 / kmArea2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    superPoder2 = (float)populacao2 + kmArea2 + pib2 + (float)turisticosPontos2 + pibPerCapita2 + (1.0f / densidade2);

     // --- Saída ---
    printf("\nDados da carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cartaCodigo1);
    printf("Nome da Cidade: %s\n", cidadeNome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", kmArea1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticosPontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nDados da carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cartaCodigo2);
    printf("Nome da Cidade: %s\n", cidadeNome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", kmArea2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticosPontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Exibição dos resultados das comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: Carta 1 venceu (%d)\n", (kmArea1 > kmArea2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (turisticosPontos1 > turisticosPontos2));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade2 < densidade1));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;

}