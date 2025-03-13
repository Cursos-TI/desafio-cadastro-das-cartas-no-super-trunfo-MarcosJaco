#include <stdio.h>

int main()
{

    char estado1, estado2, codigocarta1[10], codigocarta2[10], nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2;

    printf("### Super Trunfo Em C - Tema 1 ###\n\n");

    printf("Cadastro Carta 1:\n");

    printf("Digite uma letra entre A e H para o Estado:\n");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomecidade1);

    printf("Digite o numero da população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da área da cidade em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade em Reais:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontosturisticos1);

    printf("\nCadastro Carta 2:\n");

    printf("Digite uma letra entre A e H para o Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomecidade2);

    printf("Digite o numero da população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da area da cidade em km²\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em Reais:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontosturisticos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em Reais: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em Reais: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", pontosturisticos2);

    return 0;
}