#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int pontos1, pontos2, atributo;
  float area1, area2, pib1, pib2, pop1, pop2, densidade1, densidade2, capita1, capita2, super1, super2;
  char enter, estado1, estado2; 
  char cidade1[20], cidade2[20];

  // Área para entrada de dados

  printf("SUPER TRUNFO - CADASTRO DE CARTAS\n\n");
   printf("Antes de começar, pesquise as seguintes informações de cada cidade a ser cadastrada:\n\n");
   printf("Estado;\nPopulação (em milhares de habitantes);\nÁrea (em km²);\nPIB (em bilhões de reais);\nNúmero de pontos turísticos.\n\n");
   printf("[APERTE ENTER PARA COMEÇAR]: ");
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

      printf("Agora escolha o nome da cidade (apenas uma palavra - sem espaços): ");
      scanf(" %s", cidade1);

        // Populacao - Cidade 1

      printf("Indique o número de habitantes desta cidade (em milhares de hab.): ");
      scanf(" %f", &pop1);

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

      // Escolha da segunda cidade

      printf("Agora escolha o nome da cidade (apenas uma palavra - sem espaços): ");
      scanf(" %s", cidade2);

      // Populacao - Cidade 2

      printf("Indique o número de habitantes desta cidade (em milhares de hab.): ");
      scanf(" %f", &pop2);

      // Área - Cidade 2

      printf("Indique a área desta cidade (em km²): ");
      scanf(" %f", &area2);

      // PIB - Cidade 2

      printf("Qual é o PIB desta cidade? (em bilhões de reais): ");
      scanf(" %f", &pib2);

      // Pontos turísticos - Cidade 2

      printf("Quantos pontos turísticos tem esta cidade?: ");
      scanf(" %d", &pontos2);
      printf("\n----------------------------\n\n");

      // Definindo o cálculo para densidade demográfica e pib per capita

        densidade1 = (pop1*1000) / area1;
        capita1 = (pib1*1000000) / pop1;

        densidade2 = (pop2*1000) / area2;
        capita2 = (pib2*1000000) / pop2;

      // Definindo o cálculo para  Super Poder

        super1 = pop1 + area1 + pib1 + pontos1 + capita1 - densidade1;
        super2 = pop2 + area2 + pib2 + pontos2 + capita2 - densidade2;

      // Escolhendo o atributo

      printf("Agora escolha o atributo para comparação, entre as opções abaixo:\n\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("5. Densidade Populacional\n");
      printf("6. PIB per capita\n");
      printf("7. Super Poder\n\n");
        scanf("%d", &atributo);

      // Resultado

      switch (atributo){
      
      case 1:
      if (pop1 == pop2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi População.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem população de %.0f000 pessoas e a Carta 2 tem a população de %.0f000 pessoas.", pop1, pop2);

      } else if (pop1 > pop2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi População.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem população de %.0f000 pessoas e a Carta 2 tem a população de %.0f000 pessoas.", pop1, pop2);
      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi População.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem população de %.0f000 pessoas e a Carta 2 tem a população de %.0f000 pessoas.", pop1, pop2);

      }

      break;

        case 2:

        if (area1 == area2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi Área.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem área de %.0f km² e a Carta 2 tem área de %.0f km².", area1, area2);

      } else if (area1 > area2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi Área.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem área de %.0f km² e a Carta 2 tem área de %.0f km².", area1, area2);
      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi Área.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem área de %.0f km² e a Carta 2 tem área de %.0f km².", area1, area2);

      }

      break;

      case 3:

        if (pib1 == pib2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi PIB.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem PIB de %.2f bilhões de reais e a Carta 2 tem PIB de %.2f bilhões de reais.", pib1, pib2);

      } else if (pib1 > pib2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi PIB.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem PIB de %.2f bilhões de reais e a Carta 2 tem PIB de %.2f bilhões de reais.", pib1, pib2);
      
      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi PIB.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem PIB de %.2f bilhões de reais e a Carta 2 tem PIB de %.2f bilhões de reais.", pib1, pib2);

      }

      break;

      case 4:

        if (pontos1 == pontos2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi Número de Pontos Turísticos.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem %d pontos turísticos e a Carta 2 tem %d pontos turísticos.", pontos1, pontos2);

      } else if (pontos1 > pontos2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi Número de Pontos Turísticos.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem %d pontos turísticos e a Carta 2 tem %d pontos turísticos.", pontos1, pontos2);
      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi Número de Pontos Turísticos.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem %d pontos turísticos e a Carta 2 tem %d pontos turísticos.", pontos1, pontos2);

      }

      break;

      case 5:

        if (densidade1 == densidade2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi Densidade Populacional.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem densidade de %.2f hab/km² e a Carta 2 tem densidade de %.2f hab/km².", densidade1, densidade2);

      } else if (densidade1 < densidade2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi Densidade Populacional.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem densidade de %.2f hab/km² e a Carta 2 tem densidade de %.2f hab/km².", densidade1, densidade2);

      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi Densidade Populacional.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem densidade de %.2f hab/km² e a Carta 2 tem densidade de %.2f hab/km².", densidade1, densidade2);

      }

      break;

      case 6:

        if (capita1 == capita2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi PIB per capita.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem PIB per capita de %.2f reais e a Carta 2 tem PIB per capita de %.2f reais.", capita1, capita2);

      } else if (capita1 > capita2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi PIB per capita.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem PIB per capita de %.2f reais e a Carta 2 tem PIB per capita de %.2f reais.", capita1, capita2);

      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi PIB per capita.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem PIB per capita de %.2f reais e a Carta 2 tem PIB per capita de %.2f reais.", capita1, capita2);

      }

      break;

      case 7:

        if (super1 == super2){
        printf("### RESULTADO: EMPATE! ###\n\n");
        printf("O atributo escolhido foi Super Poder\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem Super Poder %.2f e a Carta 2 tem Super Poder %.2f.", super1, super2);

      } else if (super1 > super2){
      printf("### RESULTADO: A CARTA 1 GANHOU! ###\n\n");
        printf("O atributo escolhido foi Super Poder.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem Super Poder %.2f e a Carta 2 tem Super Poder %.2f.", super1, super2);

      } else {
        printf("### RESULTADO: A CARTA 2 GANHOU\n\n");

        printf("O atributo escolhido foi Super Poder.\n\n");

        printf("Carta 1:\n\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c01\n", estado1);
        printf("Nome da cidade: %s\n", cidade1);
        printf("População: %.0f000\n", pop1);
        printf("Área: %.0f km²\n", area1);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib1);
        printf("Número de pontos turísticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per capita: %.2f reais\n", capita1);
        printf("Super Poder: %.2f\n\n", super1);

        printf("Carta 2:\n\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c02\n", estado2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %.0f000 pessoas\n", pop2);
        printf("Área: %.0f km²\n", area2);
        printf("Produto Interno Bruto (PIB): %.2f bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per capita: %.2f reais\n", capita2);
        printf("Super Poder: %.2f\n\n", super2);
      
        printf("Como consta acima, a Carta 1 tem Super Poder %.2f e a Carta 2 tem Super Poder %.2f.", super1, super2);

      }

      break;
      
      default:
        printf("Atributo inválido. Por favor, escolha um número entre 1 e 7.\n");
       }
      
}
