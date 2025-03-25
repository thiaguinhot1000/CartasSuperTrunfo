#include <stdio.h>
int main()
{
    // carta 1 - variáveis

    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Entrada de dados - carta 1

    printf("Jogo das cartas das cidades\n");
    printf("\ncarta 1:\n");

    printf("Digite o estado da carta 1 (A-H): ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta 1 (ex:A-H): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a população 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área 1 (km): ");
    scanf("%f", &area1);

    printf("Digite o PIB 1: ");
    scanf("%f", &pib1);

    printf("Digite os pontosturisticos 1: ");
    scanf("%d", &pontosturisticos1);

    // carta 2 - variáveis

    char estado2[18];
    char codigo2[19];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Entrada de dados - carta 2

    printf("Jogo das cartas das cidades\n");
    printf("\ncarta 2:\n");

    printf("Digite o estado da carta 2 (A-H): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta 2 (ex:A-H): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área 2 (km): ");
    scanf("%f", &area2);

    printf("Digite o PIB 2: ");
    scanf("%f", &pib2);

    printf("Digite os pontosturisticos 2: ");
    scanf("%d", &pontosturisticos2);
}
