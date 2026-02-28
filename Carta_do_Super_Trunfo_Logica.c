#include <stdio.h>

int main() {
  // Variáveis para a Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1; // Alterado para unsigned long int
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Variáveis para a Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2; // Alterado para unsigned long int
  float area2;
  float pib2;
  int pontosTuristicos2;

  printf("--- Bem-vindo ao Cadastro do Super Trunfo de Países! ---\n\n");

  // Cadastro da Carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Digite o Estado (letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o Código da Carta (ex: A01): ");
  scanf(" %s", codigo1);
  fflush(stdout);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Digite a População: ");
  scanf("%lu", &populacao1); // %lu para unsigned long int

  printf("Digite a Área (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\n--- Carta 1 cadastrada com sucesso! ---\n\n");

  // Cadastro da Carta 2
  printf("Cadastro da Carta 2:\n");
  printf("Digite o Estado (letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o Código da Carta (ex: B02): ");
  scanf("%s", codigo2);
  fflush(stdout);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Digite a População: ");
  scanf("%lu", &populacao2); // %lu para unsigned long int

  printf("Digite a Área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculo da Densidade Populacional e PIB per Capita
  float densidadePopulacao1 = (float)populacao1 / area1;
  float densidadePopulacao2 = (float)populacao2 / area2;

  float PibPerCapita1 = pib1 / (float)populacao1;
  float PibPerCapita2 = pib2 / (float)populacao2;

  // Cálculo do Super Poder
  // Super Poder = população + área + PIB + pontos turísticos + PIB per capita +
  // (1 / densidade populacional)
  float superPoder1 = (float)populacao1 + area1 + pib1 +
                      (float)pontosTuristicos1 + PibPerCapita1 +
                      (1.0f / densidadePopulacao1);
  float superPoder2 = (float)populacao2 + area2 + pib2 +
                      (float)pontosTuristicos2 + PibPerCapita2 +
                      (1.0f / densidadePopulacao2);

  // Exibição dos Dados
  printf("\n==================================\n");
  printf("        DADOS DAS CARTAS\n");
  printf("==================================\n\n");

  // Exibição Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao1);
  printf("PIB per Capita: %.2f bilhões/hab\n", PibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\n----------------------------------\n\n");

  // Exibição Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao2);
  printf("PIB per Capita: %.2f bilhões/hab\n", PibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Comparação de Cartas
  printf("\n==================================\n");
  printf("      COMPARAÇÃO DE CARTAS\n");
  printf("==================================\n\n");

  // Para cada atributo: 1 = Carta 1 vence, 0 = Carta 2 vence
  int vencedorPopulacao = (populacao1 > populacao2) ? 1 : 0;
  int vencedorArea = (area1 > area2) ? 1 : 0;
  int vencedorPib = (pib1 > pib2) ? 1 : 0;
  int vencedorPontosTuristicos =
      (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
  int vencedorDensidade = (densidadePopulacao1 < densidadePopulacao2)
                              ? 1
                              : 0; // Menor densidade vence!
  int vencedorPibPerCapita = (PibPerCapita1 > PibPerCapita2) ? 1 : 0;
  int vencedorSuperPoder = (superPoder1 > superPoder2) ? 1 : 0;

  printf("População: Carta %d venceu (%d)\n", vencedorPopulacao ? 1 : 2,
         vencedorPopulacao);
  printf("Área: Carta %d venceu (%d)\n", vencedorArea ? 1 : 2, vencedorArea);
  printf("PIB: Carta %d venceu (%d)\n", vencedorPib ? 1 : 2, vencedorPib);
  printf("Pontos Turísticos: Carta %d venceu (%d)\n",
         vencedorPontosTuristicos ? 1 : 2, vencedorPontosTuristicos);
  printf("Densidade Populacional: Carta %d venceu (%d)\n",
         vencedorDensidade ? 1 : 2, vencedorDensidade);
  printf("PIB per Capita: Carta %d venceu (%d)\n", vencedorPibPerCapita ? 1 : 2,
         vencedorPibPerCapita);
  printf("Super Poder: Carta %d venceu (%d)\n", vencedorSuperPoder ? 1 : 2,
         vencedorSuperPoder);

  return 0;
}