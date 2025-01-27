#include <stdio.h>

int main(){

    char nomepais[50];
    char nomeestadoA[50], nomeestadoB[50], nomeestadoC[50],nomeestadoD[50],nomeestadoE[50],nomeestadoF[50],nomeestadoG[50],nomeestadoH[50];
    char cidadeA01[50], cidadeA02[50], cidadeA03[50], cidadeA04[50];
    int areaA01,areaA02,areaA03,areaA04;
    int turismoA01,turismoA02,turismoA03,turismoA04;
    int populacaoA01, populacaoA02,populacaoA03,populacaoA04;
    int pibA01,pibA02,pibA03,pibA04;

printf("BEM-VINDOS AO JOGO SUPER TRUNFO PAÍSES\n");

printf("Digite o nome do País:\n");
scanf("%s", &nomepais);

printf("Ótimo, seu País é o %s, agora vamos cadastrar estados do %s divididos entre A ao H, cada estado terá 4 cidades!!\n", nomepais, nomepais);

printf("Digite o nome do estado A:\n");
scanf("%s", &nomeestadoA);

printf("seu primeiro estado é o %s, agora vamos cadastrar 4 de suas cidades...\n", nomeestadoA);

printf("Digite o nome da Cidade 1\n");
scanf("%s", cidadeA01 );

printf("Qual a população de/a %s\n", cidadeA01);
scanf("%d", &populacaoA01);

printf("Digite a área de/a %s\n",cidadeA01);
scanf("%d", &areaA01);

printf("Qual é o pib de/a %s\n", cidadeA01);
scanf("%d", &pibA01);

printf("Qual é a quantidade de pontos turísticos de %s\n", cidadeA01);
scanf("%d", &turismoA01);

printf("DADOS CIDADE A01\n");
printf("Polução: %d\n", populacaoA01);
printf("Pib:%d\n", pibA01);
printf("Área:%d\n", areaA01);
printf("Número de pontos turísticos:%d\n", turismoA01);


return 0;
}