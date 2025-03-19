#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

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
    fgets(nome2, sizeof(nome2), stdin); // fgets para ler strings com espaços

    printf("Digite a população do Estado:\n");
    scanf("%lu", &populacao2); // alteração de int para unsigned para salvar dados da população
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
    densidade_populcional1 = populacao1 / area1; // densidade populacional = população / área
    pib_percapita1 = pib1 / populacao1; // PIB per capita = PIB / população
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + ( 1 / densidade_populcional1); // Super poder = soma dos atributos

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
    //Comparação das Cartas (if / Else)(Switch)
    int escolha1, escolha2; // Variáveis para escolha dos atributos a serem comparados
    printf("\n- Escolha 2 atributos a serem comparados:-\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - Pib\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Super Poder\n");
    printf("Atributo 1: \n");
    scanf("%d", &escolha1);
    printf("Atributo 2: \n");
    scanf("%d", &escolha2);

    //----------------------------------------------------------------------------------------------------
    int Somacarta1, somacarta2; // Variáveis para somar os atributos escolhidos
      Somacarta1 = 0; // guarda a soma dos atributos da carta 1  
      somacarta2 = 0; // guarda a soma dos atributos da carta 2
    //----------------------------------------------------------------------------------------------------
   if (escolha1 == escolha2)//Verifica se as escolhas são iguais
   {
      printf("As Escolhas devem ser diferentes\n");
      return 0;
   }
    //----------------------------------------------------------------------------------------------------
    // Menu 1
   switch (escolha1) 
   {
   case 1: //População
      Somacarta1 += populacao1;
      somacarta2 += populacao2;
   break;

   case 2: //Area
      Somacarta1 += area1;
      somacarta2 += area2;
      break;

   case 3: //Pib
      Somacarta1 += pib1;
      somacarta2 += pib2;
   break;
   
   case 4: //Pontos Turisticos
      Somacarta1 += pontos_turisticos1;       
      somacarta2 += pontos_turisticos2;
   break;

   case 5: //Denidade Populacional
      Somacarta1 += densidade_populcional1;
      somacarta2 += densidade_populcional2;  
 break;

 case 6: //Super Poder
      Somacarta1 += super_poder1;      
      somacarta2 += super_poder2;   
 break;
}
   //----------------------------------------------------------------------------------------------------
   // Menu 2
   switch (escolha2) 
   {
   case 1: //População
      Somacarta1 += populacao1; 
      somacarta2 += populacao2;
   break;      
   case 2: //Area
      Somacarta1 += area1;
      somacarta2 += area2; 
   break;   
   case 3: //Pib
      Somacarta1 += pib1;
      somacarta2 += pib2;
   break;   
   case 4: //Pontos Turisticos
      Somacarta1 += pontos_turisticos1;       
      somacarta2 += pontos_turisticos2;
   break;   
   case 5: //Denidade Populacional
      Somacarta1 += densidade_populcional1;
      somacarta2 += densidade_populcional2;
   break;   
   case 6: //Super Poder
      Somacarta1 += super_poder1;      
      somacarta2 += super_poder2;
   break;
}

printf("A soma dos poderes da carta 1: %d\n", Somacarta1);
printf("A soma dos poderes da carta 2: %d\n", somacarta2); 
if (Somacarta1 > somacarta2) {
   printf("Parabens a carta 1 venceu\n");
}
else if (Somacarta1 < somacarta2) {
   printf("Parabens a carta 2 venceu\n");
}     
else {
   printf("Empate\n");
}   

    return 0;
}