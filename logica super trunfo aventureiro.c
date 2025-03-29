#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definição das variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2; 
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int escolha;

    // Cadastro da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 
    printf("Código da Carta: ");
    scanf("%4s", codigo1); 
    printf("Nome da cidade: ");
    scanf("%99s", cidade1); 
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para primeira cidade
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
    super_poder1 = populacao1 + area1 + (pib1 * 1000000000.0) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Cadastro da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2); 
    printf("Código da Carta: ");
    scanf("%4s", codigo2); 
    printf("Nome da cidade: ");
    scanf("%99s", cidade2); 
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para segunda cidade
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000.0) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Menu interativo
        printf("\n=== ESCOLHA 1 ATRIBUTO PARA COMPARAR ===\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n6. PIB per Capita\n7. Super Poder\n");
        printf("Escolha o atributo (1-7): ");
        scanf("%d", &escolha);
    

    // Comparação com switch
    printf("\n=== RESULTADO ===\n");
    switch(escolha) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu\n%s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            if(populacao1 > populacao2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(populacao2 > populacao1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", cidade1, area1, cidade2, area2);
            if(area1 > area2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(area2 > area1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bi\n%s: %.2f bi\n", cidade1, pib1, cidade2, pib2);
            if(pib1 > pib2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(pib2 > pib1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n%s: %d\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            if(pontos_turisticos1 > pontos_turisticos2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(pontos_turisticos2 > pontos_turisticos1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", cidade1, densidade_populacional1, cidade2, densidade_populacional2);
            if(densidade_populacional1 < densidade_populacional2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(densidade_populacional2 < densidade_populacional1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, pib_per_capita1, cidade2, pib_per_capita2);
            if(pib_per_capita1 > pib_per_capita2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(pib_per_capita2 > pib_per_capita1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 7: // Super Poder
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n%s: %.2f\n", cidade1, super_poder1, cidade2, super_poder2);
            if(super_poder1 > super_poder2) printf("Vencedor: Carta1 %s\n", cidade1);
            else if(super_poder2 > super_poder1) printf("Vencedor: Carta2 %s\n", cidade2);
            else printf("Empate!\n");
            break;
    }

    return 0;
}

