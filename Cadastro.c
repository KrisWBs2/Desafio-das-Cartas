#include <stdio.h>
int main(){

char cidade;
float populacao;
float area;
float pib;
int turistico;

printf("Escreva a sigla da cidade\n");
scanf("%s", &cidade);

printf("Escreva a população da sua cidade\n");
scanf("%f", &populacao);

printf("Escreva a área da sua cidade\n");
scanf("%f", &area);

printf("Escreva o PIB da sua cidade\n");
scanf("%f", &pib);

printf("Escreva quantos pontos turísticos sua cidade tem\n");
scanf("%d", &turistico);

printf("Cidade: %d\n", cidade);
printf("População: %f\n", populacao);
printf("Área: %f\n", area);
printf("PIB: %f\n", pib);
printf("Pontos turísticos: %d\n", turistico);

}