
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   // Definição das variáveis para armazenar os atributos da cidade
   int codigo;
   char nome[50];
   int populacao;
   float area;
   double pib;
   int pontos_turisticos;

   // Cadastro carta 1
   printf("Digite o código da cidade: carta 1");
   scanf("%d", &codigo);
   getchar(); // Limpa o buffer após a leitura do inteiro

   printf("Digite o nome da cidade :  ");
   fgets(nome, sizeof(nome), stdin);

   printf("Digite a população da cidade: ");
   scanf("%d", &populacao);
   
   printf("Digite a área da cidade (em km²): ");
   scanf("%f", &area);
   
   printf("Digite o PIB da cidade (em bilhões): ");
   scanf("%lf", &pib);
   
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontos_turisticos);

   // Exibição Carta 1
   printf("\n- Carta 1 -\n");
   printf("Código: %d\n", codigo);
   printf("Nome: %s", nome);
   printf("População: %d habitantes\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2lf bilhões\n", pib);
   printf("Pontos turísticos: %d\n", pontos_turisticos); "\n"

   // Linha de separação
   printf("\n----------------------------------------\n\n");

// Cadastro carta 2
printf("Digite o código da cidade: Carta 2 ");
scanf("%d", &codigo);
getchar(); // Limpa o buffer após a leitura do inteiro

printf("Digite o nome da cidade: ");
fgets(nome, sizeof(nome), stdin);

printf("Digite a população da cidade: ");
scanf("%d", &populacao);

printf("Digite a área da cidade (em km²): ");
scanf("%f", &area);

printf("Digite o PIB da cidade (em bilhões): ");
scanf("%lf", &pib);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontos_turisticos);

// Exibição Carta
printf("\n- Carta 2 -\n");
printf("Código: %d\n", codigo);
printf("Nome: %s", nome);
printf("População: %d habitantes\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2lf bilhões\n", pib);
printf("Pontos turísticos: %d\n", pontos_turisticos);


   return 0;
}