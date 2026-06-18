#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // Área para definição das variáveis com valores aleatórios
  // Carta 1
  int carta1 = 1;
  char estado1[2] = "M";
  char codigoCarta1[4] = "M01";
  char cidade1[15] = "Minas Gerais";
  int populacao1 = 2000000;
  float areakm1 = 2500.55;
  float pib1 = 529.31;
  int ptsTuristicos1 = 30;
  
  // Carta 2
  int carta2 = 2;
  char estado2[2] = "S";
  char codigoCarta2[4] = "S02";
  char cidade2[15] = "Sao Paulo";
  int populacao2 = 1800000;
  float areakm2 = 2150.75;
  float pib2 = 489.52;
  int ptsTuristicos2 = 25;
  
  // Carta 3
  int carta3 = 3;
  char estado3[2] = "R";
  char codigoCarta3[4] = "R03";
  char cidade3[15] = "Rio de Janeiro";
  int populacao3 = 1600000;
  float areakm3 = 1800.30;
  float pib3 = 412.78;
  int ptsTuristicos3 = 45;
  
  // Carta 4
  int carta4 = 4;
  char estado4[2] = "B";
  char codigoCarta4[4] = "B04";
  char cidade4[15] = "Belo Horizonte";
  int populacao4 = 1400000;
  float areakm4 = 1500.45;
  float pib4 = 356.94;
  int ptsTuristicos4 = 28;
  
  float densidade1, densidade2, densidade3, densidade4;
  float pibPerCapita1, pibPerCapita2, pibPerCapita3, pibPerCapita4;

  // Cálculos das propriedades derivadas
  densidade1 = populacao1 / areakm1;
  pibPerCapita1 = pib1 / populacao1;
  
  densidade2 = populacao2 / areakm2;
  pibPerCapita2 = pib2 / populacao2;
  
  densidade3 = populacao3 / areakm3;
  pibPerCapita3 = pib3 / populacao3;
  
  densidade4 = populacao4 / areakm4;
  pibPerCapita4 = pib4 / populacao4;

  // Exibição dos resultados
  printf(" ****** Resultado ******\n\n");
  
  // Resultado carta 1
  printf("Card I: %d\n", carta1);
  printf("Estado I: %s\n", estado1);
  printf("Codigo I: %s\n", codigoCarta1);
  printf("Cidade I: %s\n", cidade1);
  printf("Populacao I: %d\n", populacao1);
  printf("Area I: %.2f\n", areakm1);
  printf("PIB I: %.2f\n", pib1);
  printf("Pontos Turisticos I: %d\n", ptsTuristicos1);
  printf("Densidade populacional I: %.2f\n", densidade1);
  printf("PIB Per Capita I: %.10f\n\n", pibPerCapita1);

  // Resultado carta 2
  printf("Card II: %d\n", carta2);
  printf("Estado II: %s\n", estado2);
  printf("Codigo II: %s\n", codigoCarta2);
  printf("Cidade II: %s\n", cidade2);
  printf("Populacao II: %d\n", populacao2);
  printf("Area II: %.2f\n", areakm2);
  printf("PIB II: %.2f\n", pib2);
  printf("Pontos Turisticos II: %d\n", ptsTuristicos2);
  printf("Densidade populacional II: %.2f\n", densidade2);
  printf("PIB Per Capita II: %.10f\n\n", pibPerCapita2);

  // Resultado carta 3
  printf("Card III: %d\n", carta3);
  printf("Estado III: %s\n", estado3);
  printf("Codigo III: %s\n", codigoCarta3);
  printf("Cidade III: %s\n", cidade3);
  printf("Populacao III: %d\n", populacao3);
  printf("Area III: %.2f\n", areakm3);
  printf("PIB III: %.2f\n", pib3);
  printf("Pontos Turisticos III: %d\n", ptsTuristicos3);
  printf("Densidade populacional III: %.2f\n", densidade3);
  printf("PIB Per Capita III: %.10f\n\n", pibPerCapita3);

  // Resultado carta 4
  printf("Card IV: %d\n", carta4);
  printf("Estado IV: %s\n", estado4);
  printf("Codigo IV: %s\n", codigoCarta4);
  printf("Cidade IV: %s\n", cidade4);
  printf("Populacao IV: %d\n", populacao4);
  printf("Area IV: %.2f\n", areakm4);
  printf("PIB IV: %.2f\n", pib4);
  printf("Pontos Turisticos IV: %d\n", ptsTuristicos4);
  printf("Densidade populacional IV: %.2f\n", densidade4);
  printf("PIB Per Capita IV: %.10f\n\n", pibPerCapita4);

  //Menu
  int opcao, card, jogador, computador;
  float densidadeJogador, densidadeComputador;

  srand(time(0));
  computador = rand() % 4 + 1; // Gera número entre 1 e 4

  printf("******SUPER TRUNFO******\n\n");
  printf("1. Iniciar jogo\n");
  printf("2. Regras do jogo\n");
  printf("3. Sair\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Escolha um card (1-4):\n");
      printf("Card: 1\n");
      printf("Card: 2\n");
      printf("Card: 3\n");
      printf("Card: 4\n");
      scanf("%d", &jogador);

      // Determina a densidade do jogador
      switch (jogador) {
        case 1:
          densidadeJogador = densidade1;
          printf("Sua densidade populacional: %.2f\n", densidade1);
          break;
        case 2:
          densidadeJogador = densidade2;
          printf("Sua densidade populacional: %.2f\n", densidade2);
          break;
        case 3:
          densidadeJogador = densidade3;
          printf("Sua densidade populacional: %.2f\n", densidade3);
          break;
        case 4:
          densidadeJogador = densidade4;
          printf("Sua densidade populacional: %.2f\n", densidade4);
          break;
        default:
          printf("Por favor escolha um Card Registrado!\n");
          return 0; // Sai do programa se escolha inválida
      }

      // Determina a densidade do computador
      switch (computador) {
        case 1:
          densidadeComputador = densidade1;
          printf("Densidade populacional do computador: %.2f\n", densidade1);
          break;
        case 2:
          densidadeComputador = densidade2;
          printf("Densidade populacional do computador: %.2f\n", densidade2);
          break;
        case 3:
          densidadeComputador = densidade3;
          printf("Densidade populacional do computador: %.2f\n", densidade3);
          break;
        case 4:
          densidadeComputador = densidade4;
          printf("Densidade populacional do computador: %.2f\n", densidade4);
          break;
        default:
          printf("Erro na seleção do computador!\n");
          return 0;
      }

      // Comparação de densidades
      printf("\n--- Resultado da Comparação ---\n");
      if (densidadeJogador > densidadeComputador) {
        printf("*** Voce Ganhou! ***\n");
      } else if (densidadeJogador < densidadeComputador) {
        printf("*** Voce Perdeu! ***\n");
      } else {
        printf("*** Empate! ***\n");
      }
      break;

    case 2:
      printf("\n--- REGRAS DO JOGO ---\n");
      printf("1. Escolha uma carta (1 a 4)\n");
      printf("2. O computador escolherá outra carta aleatoriamente\n");
      printf("3. Vence quem tiver a MAIOR densidade populacional\n");
      printf("4. Em caso de empate, ninguém ganha.\n\n");
      break;

    case 3:
      printf("Saindo do jogo...\n");
      break;

    default:
      printf("Opção inválida!\n");
      break;
  }
  
  return 0;
}