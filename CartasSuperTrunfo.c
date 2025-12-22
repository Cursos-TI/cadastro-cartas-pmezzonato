#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int pontos1, pontos2, pop1, pop2;
  float area1, area2, pib1, pib2;
  char enter, estado1, estado2; 
  char cidade1[20], cidade2[20];

  // Área para entrada de dados

  printf("SUPER TRUNFO - CADASTRO DE CARTAS\n\n");
   printf("Antes de comecar, tenha em mente as informacoes que você deve ter de cada cidade a ser cadastrada:\n\n");
   printf("Estado;\nPopulacão (em milhares de habitantes);\nÁrea (em km²);\nPIB (em bilhões de reais);\nNúmero de pontos turísticos.\n\n");
   printf("[APERTE ENTER PARA COMECAR]: ", enter);
   scanf("%c", &enter);
   printf("\n----------------------------\n\n");
    printf("Carta 1:\n\n");

    // Escolha do primeiro estado

      printf("A - São Paulo\n");
      printf("B - Minas Gerais\n");
      printf("C - Rio de Janeiro\n");
      printf("D - Bahia\n");
      printf("E - Paraná\n");
      printf("F - Rio Grande do Sul\n");
      printf("G - Pernambuco\n");
      printf("H - Ceará\n\n");
      printf("Escolha um estado para a primeira carta (digite a letra referente ao mesmo): ");
      scanf(" %c", &estado1);


      // Escolha da primeira cidade

      printf("Agora escolha o nome da cidade (apenas uma palavra - sem espacos): ");
      scanf(" %s", cidade1);

        // Populacao - Cidade 1

      printf("Indique o número de habitantes desta cidade (em milhares de hab.): ");
      scanf(" %d", &pop1);

      // Área - Cidade 1

      printf("Indique a área desta cidade (em km²): ");
      scanf(" %f", &area1);

      // PIB - Cidade 1

      printf("Qual é o PIB desta cidade? (em bilhões de reais): ");
      scanf(" %f", &pib1);

      // Pontos turísticos - Cidade 1

      printf("Quantos pontos turísticos tem esta cidade?: ");
      scanf(" %d", &pontos1);

      printf("\n\nPrimeira carta cadastrada com sucesso. Vamos a segunda?\n");
      printf("\n----------------------------\n\n");

    printf("Carta 2:\n\n");

    // Escolha do segundo estado

      printf("A - São Paulo\n");
      printf("B - Minas Gerais\n");
      printf("C - Rio de Janeiro\n");
      printf("D - Bahia\n");
      printf("E - Paraná\n");
      printf("F - Rio Grande do Sul\n");
      printf("G - Pernambuco\n");
      printf("H - Ceará\n\n");
      printf("Agora escolha o estado da segunda carta: ");
      scanf(" %c", &estado2);

      // Escolha da primeira cidade

      printf("Agora escolha o nome da cidade (apenas uma palavra - sem espacos): ");
      scanf(" %s", cidade2);

      // Populacao - Cidade 1

      printf("Indique o número de habitantes desta cidade (em milhares de hab.): ");
      scanf(" %d", &pop2);

      // Área - Cidade 1

      printf("Indique a área desta cidade (em km²): ");
      scanf(" %f", &area2);

      // PIB - Cidade 1

      printf("Qual é o PIB desta cidade? (em bilhões de reais): ");
      scanf(" %f", &pib2);

      // Pontos turísticos - Cidade 1

      printf("Quantos pontos turísticos tem esta cidade?: ");
      scanf(" %d", &pontos2);
      printf("\n----------------------------\n\n");

      // Área para exibição dos dados da cidade

        printf("CARTAS CADASTRADAS\n\n");
        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("Populacão: %d mil pessoas\n", pop1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n\n", pontos1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c01\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("Populacão: %d mil pessoas\n", pop2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n\n", pontos2);

        return 0;
} 