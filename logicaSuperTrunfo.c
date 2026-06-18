#include <stdio.h>

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int carta1, carta2, populacao1, populacao2, ptsTuristicos1, ptsTuristicos2;
  char estado1[2], estado2[2], codigoCarta1[4], codigoCarta2[4], cidade1[15], cidade2[15];
  float areakm1, areakm2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;

  // Área para entrada de dados
  printf(" ****** Input de dados ****** \n\n");
  //Card I
  printf("Card I: ");
  scanf("%d", &carta1);

  //Estado
  printf("Estado I: ");
  scanf("%s", &estado1);

  //Codigo
  printf("Codigo I: ");
  scanf("%s", &codigoCarta1);

  //nome da cidade
  printf("Cidade I: ");
  scanf("%s", &cidade1);

  //população
  printf("Populacao I: ");
  scanf("%d", &populacao1);

  //area
  printf("Area I: ");
  scanf("%f", &areakm1);

  //pib
  printf("Pib I: ");
  scanf("%f", &pib1);

  //qtd de pts turisticos
  printf("Total Pontos Turisticos: ");
  scanf("%d", &ptsTuristicos1);

  //densidade populacional populacao/area
  densidade1 = populacao1/areakm1;

  //pib per capita  pib/populacao
  pibPerCapita1 = pib1/populacao1;

  //Card II
  printf("\nCard II: ");
  scanf("%d", &carta2);

  //Estado
  printf("Estado II: ");
  scanf("%s", &estado2);

  //Codigo
  printf("Codigo II: ");
  scanf("%s", &codigoCarta2);

  //nome da cidade
  printf("Cidade II: ");
  scanf("%s", &cidade2);

  //população
  printf("Populacao II: ");
  scanf("%d", &populacao2);

  //area
  printf("Area II: ");
  scanf("%f", &areakm2);

  //pib
  printf("Pib II: ");
  scanf("%f", &pib2);

  //qtd de pts turisticos
  printf("Total Pontos Turisticos: ");
  scanf("%d", &ptsTuristicos2);

  //densidade populacional populacao/area
  densidade2 = populacao2/areakm2;

  //pib per capita  pib/populacao
  pibPerCapita2 = pib2/populacao2;

  printf(" ****** Resultado ******\n\n");
  //resultado carta I
  printf("Card I: %d\n", carta1);
  printf("Estado I: %s\n", estado1);
  printf("Codigo I: %s\n", codigoCarta1);
  printf("Cidade I: %s\n", cidade1);
  printf("Populacao I: %d\n", populacao1);
  printf("Area I: %f\n", areakm1);
  printf("PIB: %f\n", pib1);
  printf("Pontos Turisticos: %d\n", ptsTuristicos1);
  printf("Densidade populacional: %.2f\n", densidade1);
  printf("PIB Per Capita I: %.10f\n\n", pibPerCapita1);

  //resultado carta II
  printf("Card II: %d\n", carta2);
  printf("Estado II: %s\n", estado2);
  printf("Codigo II: %s\n", codigoCarta2);
  printf("Cidade II: %s\n", cidade2);
  printf("Populacao II: %d\n", populacao2);
  printf("Area II: %f\n", areakm2);
  printf("PIB II: %f\n", pib2);
  printf("Pontos Turisticos II: %d\n", ptsTuristicos2);
  printf("Densidade populacional II: %.2f\n", densidade2);
  printf("PIB Per Capita II: %.10f\n", pibPerCapita2);

  if (populacao1 > populacao2) {
    printf("Card I venceu!");
  } else {
    printf("Card II venceu");
  }
return 0;
}