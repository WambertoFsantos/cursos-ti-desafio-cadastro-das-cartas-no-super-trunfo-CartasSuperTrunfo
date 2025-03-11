#include <stdio.h>

int main() {
    // Definição das variáveis para carta 1
    int codigo1,pontos_turisticos1; 
    char nome1[50], letra1;
    float area1, pib_percapita1, super_poder1;
    double pib1, densidade_populcional1;
    unsigned long int populacao1;  // alteração de int para unsigned para salvar dados da população

    // Definição das variáveis para carta 2
    int codigo2, pontos_turisticos2;
    char nome2[50], letra2;
    float area2, pib_percapita2, super_poder2;
    double pib2, densidade_populcional2;
    unsigned long int populacao2;  // alteração de int para unsigned para salvar dados da população
    //----------------------------------------------------------------------------------------------------
    // Cadastro carta 1
    printf("\n- Cadastro Carta 1: -\n");
    printf("Insira uma letra de 'A' a 'H' repsentando um dos 8 estados : \n");
    scanf(" %c", &letra1);
    getchar(); // Limpa o buffer após a leitura do caractere

    printf("Insira o código do Estado: (2 Numeros)\n");
    scanf("%d", &codigo1);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite o nome do Estado:\n");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite a população do Estado:\n");
    scanf("%lu", &populacao1);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite a área do Estado (em km²):\n");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer após a leitura do float

    printf("Digite o PIB do Estado (em bilhões):\n");
    scanf("%lf", &pib1);
    getchar(); // Limpa o buffer após a leitura do double

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Primeira carta adicionada com sucesso.\n\n");
    //----------------------------------------------------------------------------------------------------
    // Cadastro carta 2
    printf("\n- Cadastro Carta 2: -\n");
    printf("Insira uma letra de 'A' a 'H' repsentando um dos 8 estados : \n");
    scanf(" %c", &letra2);
    getchar(); // Limpa o buffer após a leitura do caractere

    printf("Insira o código do Estado: (2 Numeros)\n");
    scanf("%d", &codigo2);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite o nome do Estado:\n");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população do Estado:\n");
    scanf("%lu", &populacao2);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite a área do Estado (em km²):\n");
    scanf("%f", &area2);
    getchar(); // Limpa o buffer após a leitura do float

    printf("Digite o PIB do Estado (em bilhões):\n");
    scanf("%lf", &pib2);
    getchar(); // Limpa o buffer após a leitura do double

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Segunda carta adicionada com sucesso.\n\n");

    printf("Dados das cartas adicionadas.\n\n");
    //----------------------------------------------------------------------------------------------------
    // Calculo Carta 1
    densidade_populcional1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + ( 1 / densidade_populcional1);

    //----------------------------------------------------------------------------------------------------
    // Calculo Carta 2
    densidade_populcional2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + ( 1 / densidade_populcional2);
  
    //----------------------------------------------------------------------------------------------------
    // Exibição Carta 1
    printf("\n- Carta 1 -\n");
    printf("Código: %c%d\n", letra1, codigo1);
    printf("Nome: %s", nome1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populcional1);
    printf("Pib per capita: %.2f reais\n", pib_percapita1);
    
    //----------------------------------------------------------------------------------------------------
    // Exibição Carta 2
    printf("\n- Carta 2 -\n");
    printf("Código: %c%d\n", letra2, codigo2);
    printf("Nome: %s", nome2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populcional2);
    printf("Pib per capita: %.2f reais\n", pib_percapita2);

    //----------------------------------------------------------------------------------------------------
    //Comparação das cartas
    printf("\n- Comparação de Cartas -\n");
    printf("População: %s (%d)\n", (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu", (populacao1 > populacao2));
    printf("Área: %s (%d)\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu", (area1 > area2));
    printf("PIB: %s (%d)\n", (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu", (pib1 > pib2));
    printf("Pontos Turísticos: %s (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? "Carta 1 venceu" : "Carta 2 venceu", (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: %s (%d)\n", (densidade_populcional1 > densidade_populcional2) ? "Carta 1 venceu" : "Carta 2 venceu", (densidade_populcional1 > densidade_populcional2));
    printf("PIB per Capita: %s (%d)\n", (pib_percapita1 > pib_percapita2) ? "Carta 1 venceu" : "Carta 2 venceu", (pib_percapita1 > pib_percapita2));
    printf("Super Poder: %s (%d)\n", (super_poder1 > super_poder2) ? "Carta 1 venceu" : "Carta 2 venceu", (super_poder1 > super_poder2));



    return 0;
}