#include <stdio.h>

int main(){

    char estado1, estado2, codigocarta1[10], codigocarta2[10], nomecidade1[50], nomecidade2[50];
    int pontosturisticos1, pontosturisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2, SuperPoder1, SuperPoder2;
    

printf("### Super Trunfo Em C - Tema 1 ###\n\n");


//Cadastramento dos dados da Carta 1
printf("Cadastro Carta 1:\n");

printf("Digite uma letra entre A e H para o Estado:\n");
scanf(" %c", &estado1);

printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
scanf(" %s", codigocarta1);

printf("Digite o nome da cidade:\n");
scanf(" %s", nomecidade1);

printf("Digite o numero da população da cidade:\n");
scanf("%lu", &populacao1);

printf("Digite o tamanho da área da cidade em km²:\n");
scanf("%f", &area1);

printf("Digite o PIB da cidade em Reais:\n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos da cidade:\n");
scanf("%d", &pontosturisticos1);

//cálculo do pib per capita e da densidade pupulacional da cidade 1

densidadepopulacional1 = ((float)populacao1 / area1);
pibpercapita1 = (pib1 / (float)populacao1);


//Cadastramento dos dados da carta 2
printf("\nCadastro Carta 2:\n");

printf("Digite uma letra entre A e H para o Estado:\n");
scanf(" %c", &estado2);

printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
scanf(" %s", codigocarta2);

printf("Digite o nome da cidade:\n");
scanf(" %s", nomecidade2);

printf("Digite o numero da população da cidade:\n");
scanf("%lu", &populacao2);

printf("Digite o tamanho da area da cidade em km²\n");
scanf("%f", &area2);

printf("Digite o PIB da cidade em Reais:\n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos da cidade:\n");
scanf("%d", &pontosturisticos2);

//cálculo do pib per capita e da densidade pupulacional da cidade 2

densidadepopulacional2 = ((float)populacao2 / area2);
pibpercapita2 = (pib2 / (float)populacao2);

//Calculando o inverso da densidade populacional para usar nos poderes das cartas 1 e 2
float InversoDensidade1, InversoDensidade2;
InversoDensidade1 = (area1 / populacao1);
InversoDensidade2 = (area2 / populacao2);

//Calculando o Super Poder das cartas 1 e 2

SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + InversoDensidade1 + pibpercapita1;
SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + InversoDensidade2 + pibpercapita2;


//Exibição dos dados das cartas 1 e 2
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigocarta1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Área em km²: %.2f\n", area1);
printf("PIB em Reais: %.2f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
printf("PIB per Capita: %.2f\n", pibpercapita1);
printf("Super Poder da Carta: %f\n\n", SuperPoder1);


printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigocarta2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área em km²: %.2f\n", area2);
printf("PIB em Reais: %.2f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
printf("PIB per Capita: %.2f\n", pibpercapita2);
printf("Super Poder da Carta: %f\n\n", SuperPoder2);

//Comparação entre as cartas 1 e 2

printf("Comparação de Cartas:\n");

if (populacao1 > populacao2){
    printf("População: Carta 1 venceu (1)\n");
} else {
    printf("População: Carta 2 venceu (0)\n");
}

if (area1 > area2){
    printf("Área: Carta 1 venceu (1)\n");
} else{
    printf("Área: Carta 2 venceu (0)\n");
}

if (pib1 > pib2){
    printf("PIB: Carta 1 venceu (1)\n");
} else {
    printf("PIB: Carta 2 venceu (0)\n");
}

if (pontosturisticos1 > pontosturisticos2){
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
} else {
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
}

if (InversoDensidade1 > InversoDensidade2){
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
} else {
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
}

if (pibpercapita1 > pibpercapita2){
    printf("PIB per Capita: Carta 1 venceu (1)\n");
} else {
    printf("PIB per Capita: Carta 2 venceu (0)\n");
}

if (SuperPoder1 > SuperPoder2){
    printf("Super Poder: Carta 1 venceu (1)\n");
} else {
    printf("Super Poder: Carta 2 venceu (0)\n");
}

    return 0;
}