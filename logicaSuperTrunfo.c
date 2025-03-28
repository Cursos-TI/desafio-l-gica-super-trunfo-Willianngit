#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 


int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    
    // Cadastro das Cartas:
    
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta: ");
    scanf("%s", codigo1); 

    printf("Nome da cidade: ");
    scanf("%s", cidade1); 

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando densidade populacional e PIB per capita 
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000.0 / populacao1; // PIB convertido em reais

    // Calculando Super Poder
    float inverso_densidade1 = 1 / densidade_populacional1;
    super_poder1 = (float)populacao1 + area1 + (float)pib1 * 1000000000.0 + (float)pontos_turisticos1 + pib_per_capita1 + inverso_densidade1;


   // Entrada dos dados para a segunda carta
   printf("\nDigite os dados da segunda carta:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado2); 

   printf("Código da Carta: ");
   scanf("%s", codigo2); 

   printf("Nome da cidade: ");
   scanf("%s", cidade2); 

   printf("População: ");
   scanf("%lu", &populacao2);

   printf("Área (em km²): ");
   scanf("%f", &area2);

   printf("PIB (em bilhões de reais): ");
   scanf("%f", &pib2);

   printf("Número de pontos turísticos: ");
   scanf("%d", &pontos_turisticos2);

   // Calculando densidade populacional e PIB per capita 
   densidade_populacional2 = (float)populacao2 / area2;
   pib_per_capita2 = pib2 * 1000000000.0 / populacao2; // PIB convertido em reais

   // Calculando Super Poder
   float inverso_densidade2 = 1 / densidade_populacional2;
   super_poder2 = (float)populacao2 + area2 + (float)pib2 * 1000000000.0 + (float)pontos_turisticos2 + pib_per_capita2 + inverso_densidade2;

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");

    if (populacao1 > populacao2){
        printf("Cidade1 tem a maior populaçao\n");
    } else {
        printf("Cidade2 tem a maior populaçao\n");
    }
    if (area1 > area2){
        printf("Area1 é maior que Area2\n");
    } else {
        printf("Area2 é maior que Area1\n");
    }
    if (pib1 > pib2){
        printf("PIB1 é maior que PIB2\n");
    } else {
        printf("PIB2 é maior que PIB1\n");
    }
    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Cidade1 tem mais pontos turisticos\n");
    } else {
        printf("Cidade2 tem mais pontos turisticos\n");
    }
    if (densidade_populacional1 > densidade_populacional2){
        printf("A densidade populacional da Cidade1 é maior\n");
    } else {
        printf("A densidade populacional da Cidade2 é maior\n");
    }
    if (pib_per_capita1 > pib_per_capita2){
        printf("pib per capita da Cidade1 é maior\n");
    } else {
        printf("pib per capita da cidade2 é maior\n");
    }
    if (super_poder1 > super_poder2){
        printf("Super Poder da cidade 1 é maior\n");
    } else {
        printf("Super poder da cidade 2 é maior\n");
    } 
    
    //Resultado
    printf("\nResultado:\n");

    printf("\nResultado das Cartas (Atributo: População):\n");
printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);
if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

// Área
printf("\nComparação de cartas (Atributo: Área):\n");
printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
if (area1 > area2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

// PIB
printf("\nComparação de cartas (Atributo: PIB):\n");
printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", cidade1, estado1, pib1);
printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", cidade2, estado2, pib2);
if (pib1 > pib2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

// Pontos Turísticos
printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
printf("Carta 1 - %s (%c): %d pontos turísticos\n", cidade1, estado1, pontos_turisticos1);
printf("Carta 2 - %s (%c): %d pontos turísticos\n", cidade2, estado2, pontos_turisticos2);
if (pontos_turisticos1 > pontos_turisticos2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

// Densidade Populacional
printf("\nComparação de cartas (Atributo: Densidade Populacional):\n");
printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade_populacional1);
printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade_populacional2);
if (densidade_populacional1 < densidade_populacional2) { // Menor densidade vence
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

// PIB per Capita
printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
printf("Carta 1 - %s (%c): %.2f reais\n", cidade1, estado1, pib_per_capita1);
printf("Carta 2 - %s (%c): %.2f reais\n", cidade2, estado2, pib_per_capita2);
if (pib_per_capita1 > pib_per_capita2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

// Super Poder
printf("\nComparação de cartas (Atributo: Super Poder):\n");
printf("Carta 1 - %s (%c): %.2f\n", cidade1, estado1, super_poder1);
printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, super_poder2);
if (super_poder1 > super_poder2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
} else {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
}

    
    

    return 0;
}


   
    

    

