#include <stdio.h>

int main() {
    // Definição das variáveis para carta 1
    int codigo1, populacao1, pontos_turisticos1;
    char nome1[50], letra1;
    float area1;
    double pib1;

    // Definição das variáveis para carta 2
    int codigo2, populacao2, pontos_turisticos2;
    char nome2[50], letra2;
    float area2;
    double pib2;

    // Cadastro carta 1
    printf("Digite uma letra de 'A' a 'H' referente ao estado: ");
    scanf(" %c", &letra1);
    getchar(); // Limpa o buffer após a leitura do caractere

    printf("Digite o código do Estado: (2 Numeros)\n");
    scanf("%d", &codigo1);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite o nome do Estado:\n  ");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Digite a população do Estado:\n ");
    scanf("%d", &populacao1);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite a área do Estado (em km²):\n ");
    scanf("%f", &area1);
    getchar(); // Limpa o buffer após a leitura do float

    printf("Digite o PIB do Estado (em bilhões):\n ");
    scanf("%lf", &pib1);
    getchar(); // Limpa o buffer após a leitura do double

    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &pontos_turisticos1);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Primeira carta adicionada com sucesso.\n\n");

    // Cadastro carta 2
    printf("Digite uma letra de 'A' a 'H' referente ao estado: ");
    scanf(" %c", &letra2);
    getchar(); // Limpa o buffer após a leitura do caractere

    printf("Digite o código do Estado: (2 Numeros)\n");
    scanf("%d", &codigo2);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite o nome do Estado:\n  ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população do Estado:\n ");
    scanf("%d", &populacao2);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Digite a área do Estado (em km²):\n ");
    scanf("%f", &area2);
    getchar(); // Limpa o buffer após a leitura do float

    printf("Digite o PIB do Estado (em bilhões):\n ");
    scanf("%lf", &pib2);
    getchar(); // Limpa o buffer após a leitura do double

    printf("Digite o número de pontos turísticos:\n ");
    scanf("%d", &pontos_turisticos2);
    getchar(); // Limpa o buffer após a leitura do inteiro

    printf("Segunda carta adicionada com sucesso.\n\n");

    printf("Dados das cartas adicionadas.\n\n");

    // Exibição Carta 1
    printf("\n- Carta 1 -\n");
    printf("Código: %c%d\n", letra1, codigo1);
    printf("Nome: %s", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2lf hab/km2\n", (populacao1 / area1));
    printf("Pib per capita: %.2lf reais\n", (pib1 / populacao1));

    // Exibição Carta 2
    printf("\n- Carta 2 -\n");
    printf("Código: %c%d\n", letra2, codigo2);
    printf("Nome: %s", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2lf hab/km2\n", (populacao2 / area2));
    printf("Pib per capita: %.2lf reais\n", (pib2 / populacao2));

    return 0;
}