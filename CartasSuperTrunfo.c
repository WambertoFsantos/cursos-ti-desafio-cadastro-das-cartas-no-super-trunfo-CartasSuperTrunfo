#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

 // Definição das variáveis para carta 1
   int codigo1, populacao1, pontos_turisticos1;
   char nome1[50];
   float area1;
   double pib1;

   // Definição das variáveis para carta 2
   int codigo2, populacao2, pontos_turisticos2;
   char nome2[50];
   float area2;
   double pib2;

   // Cadastro carta 1
   printf("Digite o código do Estado:\n");
   printf("Estado (uma letra de 'A' a 'H') ");
   scanf("%d", &codigo1);
   getchar(); // Limpa o buffer após a leitura do inteiro

   printf("Digite o nome do Estado:\n  ");
   fgets(nome1, sizeof(nome1), stdin);

   printf("Digite a população do Estado:\n ");
   scanf("%d", &populacao1);                
   
   printf("Digite a área da Estado (em km²):\n ");
   scanf("%f", &area1);
   
   printf("Digite o PIB da Estado(em bilhões):\n ");
   scanf("%lf", &pib1);
   
   printf("Digite o número de pontos turísticos:\n ");
   scanf("%d", &pontos_turisticos1);

   
   printf("Primeira carta adicionada com sucesso.\n\n");

   //-------------------------------------------------------------------
   // Cadastro carta 2
   printf("Digite o código do Estado:\n");
   printf("Estado (uma letra de 'A' a 'H') ");
   scanf("%d", &codigo2);
   getchar(); // Limpa o buffer após a leitura do inteiro

   printf("Digite o nome da Estado:\n  ");
   fgets(nome2, sizeof(nome2), stdin);

   printf("Digite a população da estado:\n ");
   scanf("%d", &populacao2);
   
   printf("Digite a área da estado (em km²):\n ");
   scanf("%f", &area2);
   
   printf("Digite o PIB da Estadoo (em bilhões):\n ");
   scanf("%lf", &pib2);
   
   printf("Digite o número de pontos turísticos:\n ");
   scanf("%d", &pontos_turisticos2);

   printf("Segunda carta adicionada com sucesso.\n\n");

   printf("dados das cartas adicionadas.\n\n");
   
   //-------------------------------------------------------------------
   // Exibição Carta 1
   printf("\n- Carta 1 -\n");
   printf("Código: %d\n", codigo1);
   printf("Nome: %s", nome1);
   printf("População: %d habitantes\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2lf bilhões\n", pib1);
   printf("Pontos turísticos: %d\n\n", pontos_turisticos1);

   //-------------------------------------------------------------------
   // Exibição Carta 2
   printf("\n- Carta 2 -\n");
   printf("Código: %d\n", codigo2);
   printf("Nome: %s", nome2);
   printf("População: %d habitantes2\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2lf bilhões\n", pib2);
   printf("Pontos turísticos: %d\n\n", pontos_turisticos2);

   //-------------------------------------------------------------------

   return 0;