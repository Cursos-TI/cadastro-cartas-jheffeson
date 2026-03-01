#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    printf("===== Cadastro da Carta 1 =====\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    float super1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1;
    float super2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2;

    printf("\n========= RESULTADOS =========\n");

    // População
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu!\n");
    else if (populacao2 > populacao1)
        printf("Populacao: Carta 2 venceu!\n");
    else
        printf("Populacao: Empate!\n");

    // Área
    if (area1 > area2)
        printf("Area: Carta 1 venceu!\n");
    else if (area2 > area1)
        printf("Area: Carta 2 venceu!\n");
    else
        printf("Area: Empate!\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu!\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu!\n");
    else
        printf("PIB: Empate!\n");

    // Pontos turísticos
    if (pontos1 > pontos2)
        printf("Pontos Turisticos: Carta 1 venceu!\n");
    else if (pontos2 > pontos1)
        printf("Pontos Turisticos: Carta 2 venceu!\n");
    else
        printf("Pontos Turisticos: Empate!\n");

    // Densidade (menor vence)
    if (densidade1 < densidade2)
        printf("Densidade: Carta 1 venceu!\n");
    else if (densidade2 < densidade1)
        printf("Densidade: Carta 2 venceu!\n");
    else
        printf("Densidade: Empate!\n");

    // Super Poder
    if (super1 > super2)
        printf("Super Poder: Carta 1 venceu!\n");
    else if (super2 > super1)
        printf("Super Poder: Carta 2 venceu!\n");
    else
        printf("Super Poder: Empate!\n");

    return 0;
}