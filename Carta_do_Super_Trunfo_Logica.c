#include <stdio.h>
#include <string.h>

// Função para exibir menu do primeiro atributo
void exibirMenuPrimeiroAtributo() {
  printf("\n========================================\n");
  printf("   ESCOLHA O PRIMEIRO ATRIBUTO\n");
  printf("========================================\n");
  printf("1. População\n");
  printf("2. Área (km²)\n");
  printf("3. PIB (bilhões de reais)\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("8. Sair\n");
  printf("Digite sua escolha: ");
}

// Função para exibir menu do segundo atributo (dinâmico)
void exibirMenuSegundoAtributo(int primeiroAtributo) {
  printf("\n========================================\n");
  printf("   ESCOLHA O SEGUNDO ATRIBUTO\n");
  printf("========================================\n");
  
  if (primeiroAtributo != 1)
    printf("1. População\n");
  if (primeiroAtributo != 2)
    printf("2. Área (km²)\n");
  if (primeiroAtributo != 3)
    printf("3. PIB (bilhões de reais)\n");
  if (primeiroAtributo != 4)
    printf("4. Pontos Turísticos\n");
  if (primeiroAtributo != 5)
    printf("5. Densidade Populacional\n");
  if (primeiroAtributo != 6)
    printf("6. PIB per Capita\n");
  if (primeiroAtributo != 7)
    printf("7. Super Poder\n");
  printf("8. Sair\n");
  printf("Digite sua escolha: ");
}

// Função para obter o nome do atributo
char *obterNomeAtributo(int atributo) {
  switch (atributo) {
    case 1:
      return "População";
    case 2:
      return "Área (km²)";
    case 3:
      return "PIB (bilhões de reais)";
    case 4:
      return "Pontos Turísticos";
    case 5:
      return "Densidade Populacional";
    case 6:
      return "PIB per Capita";
    case 7:
      return "Super Poder";
    default:
      return "Desconhecido";
  }
}

// Função para obter valor do atributo da carta
float obterValorAtributo(int atributo, unsigned long int populacao, 
                         float area, float pib, int pontosTuristicos,
                         float densidadePopulacao, float pibPerCapita, 
                         float superPoder) {
  switch (atributo) {
    case 1:
      return (float)populacao;
    case 2:
      return area;
    case 3:
      return pib;
    case 4:
      return (float)pontosTuristicos;
    case 5:
      return densidadePopulacao;
    case 6:
      return pibPerCapita;
    case 7:
      return superPoder;
    default:
      return 0.0f;
  }
}

int main() {
  // Variáveis para a Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Variáveis para a Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
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

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);
  getchar(); // Limpar buffer

  printf("Digite a População: ");
  scanf("%lu", &populacao1);

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

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);
  getchar(); // Limpar buffer

  printf("Digite a População: ");
  scanf("%lu", &populacao2);

  printf("Digite a Área (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &pontosTuristicos2);
  getchar(); // Limpar buffer

  // Cálculo da Densidade Populacional e PIB per Capita
  float densidadePopulacao1 = (float)populacao1 / area1;
  float densidadePopulacao2 = (float)populacao2 / area2;

  float pibPerCapita1 = pib1 / (float)populacao1;
  float pibPerCapita2 = pib2 / (float)populacao2;

  // Cálculo do Super Poder
  float superPoder1 = (float)populacao1 + area1 + pib1 +
                      (float)pontosTuristicos1 + pibPerCapita1 +
                      (1.0f / densidadePopulacao1);
  float superPoder2 = (float)populacao2 + area2 + pib2 +
                      (float)pontosTuristicos2 + pibPerCapita2 +
                      (1.0f / densidadePopulacao2);

  // Exibição dos Dados das Cartas
  printf("\n==================================\n");
  printf("        DADOS DAS CARTAS\n");
  printf("==================================\n\n");

  printf("Carta 1 (%s - %s):\n", codigo1, nomeCidade1);
  printf("  Estado: %c\n", estado1);
  printf("  População: %lu\n", populacao1);
  printf("  Área: %.2f km²\n", area1);
  printf("  PIB: %.2f bilhões\n", pib1);
  printf("  Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("  Densidade: %.2f hab/km²\n", densidadePopulacao1);
  printf("  PIB per Capita: %.6f bilhões/hab\n", pibPerCapita1);
  printf("  Super Poder: %.2f\n", superPoder1);

  printf("\n----------------------------------\n\n");

  printf("Carta 2 (%s - %s):\n", codigo2, nomeCidade2);
  printf("  Estado: %c\n", estado2);
  printf("  População: %lu\n", populacao2);
  printf("  Área: %.2f km²\n", area2);
  printf("  PIB: %.2f bilhões\n", pib2);
  printf("  Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("  Densidade: %.2f hab/km²\n", densidadePopulacao2);
  printf("  PIB per Capita: %.6f bilhões/hab\n", pibPerCapita2);
  printf("  Super Poder: %.2f\n", superPoder2);

  // Menu para escolha dos atributos
  int primeiroAtributo = 0;
  int segundoAtributo = 0;
  int escolhaValida = 0;

  // Escolha do primeiro atributo
  while (!escolhaValida) {
    exibirMenuPrimeiroAtributo();
    scanf("%d", &primeiroAtributo);
    getchar(); // Limpar buffer

    switch (primeiroAtributo) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        escolhaValida = 1;
        break;
      case 8:
        printf("\nAté logo!\n");
        return 0;
      default:
        printf("\n⚠️  Opção inválida! Digite um número de 1 a 8.\n");
    }
  }

  escolhaValida = 0;

  // Escolha do segundo atributo (diferente do primeiro)
  while (!escolhaValida) {
    exibirMenuSegundoAtributo(primeiroAtributo);
    scanf("%d", &segundoAtributo);
    getchar(); // Limpar buffer

    switch (segundoAtributo) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        if (segundoAtributo == primeiroAtributo) {
          printf("\n⚠️  Erro! Você já escolheu esse atributo. Escolha outro "
                 "diferente.\n");
        } else {
          escolhaValida = 1;
        }
        break;
      case 8:
        printf("\nAté logo!\n");
        return 0;
      default:
        printf("\n⚠️  Opção inválida! Digite um número de 1 a 8.\n");
    }
  }

  // Obtém valores dos atributos escolhidos
  float valor1Atributo1 = obterValorAtributo(
      primeiroAtributo, populacao1, area1, pib1, pontosTuristicos1,
      densidadePopulacao1, pibPerCapita1, superPoder1);
  float valor2Atributo1 = obterValorAtributo(
      primeiroAtributo, populacao2, area2, pib2, pontosTuristicos2,
      densidadePopulacao2, pibPerCapita2, superPoder2);

  float valor1Atributo2 = obterValorAtributo(
      segundoAtributo, populacao1, area1, pib1, pontosTuristicos1,
      densidadePopulacao1, pibPerCapita1, superPoder1);
  float valor2Atributo2 = obterValorAtributo(
      segundoAtributo, populacao2, area2, pib2, pontosTuristicos2,
      densidadePopulacao2, pibPerCapita2, superPoder2);

  // Comparação do primeiro atributo
  // Para densidade, menor vence; para outros, maior vence
  int vencedor1Atributo1 = (primeiroAtributo == 5)
                               ? (valor1Atributo1 < valor2Atributo1 ? 1 : 2)
                               : (valor1Atributo1 > valor2Atributo1 ? 1 : 2);

  // Comparação do segundo atributo
  int vencedor1Atributo2 = (segundoAtributo == 5)
                               ? (valor1Atributo2 < valor2Atributo2 ? 1 : 2)
                               : (valor1Atributo2 > valor2Atributo2 ? 1 : 2);

  // Soma dos atributos
  float soma1 = valor1Atributo1 + valor1Atributo2;
  float soma2 = valor2Atributo1 + valor2Atributo2;

  // Determina o vencedor geral
  int vencedorGeral = (soma1 > soma2) ? 1 : (soma1 < soma2) ? 2 : 0;

  // Exibição do resultado
  printf("\n==================================\n");
  printf("      RESULTADO DA COMPARAÇÃO\n");
  printf("==================================\n\n");

  printf("Atributos escolhidos:\n");
  printf("  1º: %s\n", obterNomeAtributo(primeiroAtributo));
  printf("  2º: %s\n\n", obterNomeAtributo(segundoAtributo));

  printf("Primeiro Atributo (%s):\n", obterNomeAtributo(primeiroAtributo));
  printf("  %s: %.2f\n", nomeCidade1, valor1Atributo1);
  printf("  %s: %.2f\n", nomeCidade2, valor2Atributo1);
  printf("  ✓ Vencedor: %s\n\n",
         vencedor1Atributo1 == 1 ? nomeCidade1 : nomeCidade2);

  printf("Segundo Atributo (%s):\n", obterNomeAtributo(segundoAtributo));
  printf("  %s: %.2f\n", nomeCidade1, valor1Atributo2);
  printf("  %s: %.2f\n", nomeCidade2, valor2Atributo2);
  printf("  ✓ Vencedor: %s\n\n",
         vencedor1Atributo2 == 1 ? nomeCidade1 : nomeCidade2);

  printf("----------------------------------\n\n");

  printf("SOMA TOTAL DOS ATRIBUTOS:\n");
  printf("  %s: %.2f\n", nomeCidade1, soma1);
  printf("  %s: %.2f\n\n", nomeCidade2, soma2);

  printf("==================================\n");
  if (vencedorGeral == 0) {
    printf("       🎲 EMPATE! 🎲\n");
    printf("  As duas cartas têm a mesma soma!\n");
  } else {
    printf("       🏆 VENCEDOR! 🏆\n");
    printf("    %s (%s)\n",
           vencedorGeral == 1 ? nomeCidade1 : nomeCidade2,
           vencedorGeral == 1 ? codigo1 : codigo2);
  }
  printf("==================================\n\n");

  return 0;
}
