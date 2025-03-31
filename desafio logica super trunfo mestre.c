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
    int escolha1, escolha2;
    int resultado1, resultado2;
    int continuar;

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

    // Cálculos para a primeira cidade
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

    // Cálculos para a segunda cidade
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000.0) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Menu para escolher o primeiro atributo
    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAR ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n6. PIB per Capita\n7. Super Poder\n");
    printf("Escolha o primeiro atributo (1-7): ");
    scanf("%d", &escolha1);

    // Menu para escolher o segundo atributo, garantindo que seja diferente do primeiro
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAR ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n6. PIB per Capita\n7. Super Poder\n");
    printf("Escolha o segundo atributo (1-7): ");
    scanf("%d", &escolha2);

    // Verificando se o segundo atributo é igual ao primeiro
    if (escolha2 == escolha1) {
        printf("Erro! O segundo atributo não pode ser igual ao primeiro. Tente novamente.\n");
        printf("Escolha um segundo atributo diferente do primeiro (1-7): ");
        scanf("%d", &escolha2);
    }

    // Comparação de cada atributo
    // Atributo 1
    switch (escolha1) {
        case 1: // População
            printf("\nComparando a População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2: // Área
            printf("\nComparando a Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3: // PIB
            printf("\nComparando o PIB:\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4: // Pontos Turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontos_turisticos2);
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        case 5: // Densidade Demográfica
            printf("\nComparando a Densidade Demográfica:\n");
            printf("%s: %.2f habitantes/km²\n", cidade1, densidade_populacional1);
            printf("%s: %.2f habitantes/km²\n", cidade2, densidade_populacional2);
            resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            break;
        case 6: // PIB per Capita
            printf("\nComparando o PIB per Capita:\n");
            printf("%s: %.2f reais\n", cidade1, pib_per_capita1);
            printf("%s: %.2f reais\n", cidade2, pib_per_capita2);
            resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
            break;
        case 7: // Super Poder
            printf("\nComparando o Super Poder:\n");
            printf("%s: %.2f\n", cidade1, super_poder1);
            printf("%s: %.2f\n", cidade2, super_poder2);
            resultado1 = super_poder1 > super_poder2 ? 1 : 0;
            break;
        default:
            printf("Atributo inválido.\n");
    }

    // Atributo 2
    switch (escolha2) {
        case 1: // População
            printf("\nComparando a População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            resultado2 = populacao2 > populacao1 ? 1 : 0;
            break;
        case 2: // Área
            printf("\nComparando a Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            resultado2 = area2 > area1 ? 1 : 0;
            break;
        case 3: // PIB
            printf("\nComparando o PIB:\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            resultado2 = pib2 > pib1 ? 1 : 0;
            break;
        case 4: // Pontos Turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d pontos turísticos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontos_turisticos2);
            resultado2 = pontos_turisticos2 > pontos_turisticos1 ? 1 : 0;
            break;
        case 5: // Densidade Demográfica
            printf("\nComparando a Densidade Demográfica:\n");
            printf("%s: %.2f habitantes/km²\n", cidade1, densidade_populacional1);
            printf("%s: %.2f habitantes/km²\n", cidade2, densidade_populacional2);
            resultado2 = densidade_populacional2 < densidade_populacional1 ? 1 : 0;
            break;
        case 6: // PIB per Capita
            printf("\nComparando o PIB per Capita:\n");
            printf("%s: %.2f reais\n", cidade1, pib_per_capita1);
            printf("%s: %.2f reais\n", cidade2, pib_per_capita2);
            resultado2 = pib_per_capita2 > pib_per_capita1 ? 1 : 0;
            break;
        case 7: // Super Poder
            printf("\nComparando o Super Poder:\n");
            printf("%s: %.2f\n", cidade1, super_poder1);
            printf("%s: %.2f\n", cidade2, super_poder2);
            resultado2 = super_poder2 > super_poder1 ? 1 : 0;
            break;
        default:
            printf("Atributo inválido.\n");
    }

    // Comparação dos resultados
    printf("\nResultado da comparação por Atributo:\n");
    if (resultado1 == 1) {
        printf("\nCarta 1 venceu no atributo 1!\n");
    } else {
        printf("\nCarta 2 venceu no atributo 1!\n");
    }

    if (resultado2 == 1) {
        printf("\nCarta 2 venceu no atributo 2!\n");
    } else {
        printf("\nCarta 1 venceu no atributo 2!\n");
    }
    printf("\n=== IR PARA COMPARAÇÃO COM SOMA TOTAL ===\n");
    printf("Selecione o número 1 para continuar: ");
    scanf("%d", &continuar);

// Verificando se o usuário escolheu continuar
if (continuar != 1) {
    printf("Você escolheu não continuar. Encerrando o programa...\n");
    return 0; 
}
     printf("\n--- COMPARAÇÃO COM SOMA TOTAL ---\n");

     // Menu para escolher o primeiro atributo
    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAR ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n6. PIB per Capita\n7. Super Poder\n");
    printf("Escolha o primeiro atributo (1-7): ");
    scanf("%d", &escolha1);

    // Menu para escolher o segundo atributo
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAR ===\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n6. PIB per Capita\n7. Super Poder\n");
    printf("Escolha o segundo atributo (1-7): ");
    scanf("%d", &escolha2);

    // Verificando se o segundo atributo é igual ao primeiro
    if (escolha2 == escolha1) {
        printf("Erro! O segundo atributo não pode ser igual ao primeiro. Tente novamente.\n");
        printf("Escolha um segundo atributo diferente do primeiro (1-7): ");
        scanf("%d", &escolha2);
    }
    float atributo1_cidade1, atributo2_cidade1, atributo1_cidade2, atributo2_cidade2;
    
    // Atributo 1
    switch (escolha1) {
        case 1: // População
            atributo1_cidade1 = populacao1;
            atributo1_cidade2 = populacao2;
            break;
        case 2: // Área
            atributo1_cidade1 = area1;
            atributo1_cidade2 = area2;
            break;
        case 3: // PIB
            atributo1_cidade1 = pib1;
            atributo1_cidade2 = pib2;
            break;
        case 4: // Pontos Turísticos
            atributo1_cidade1 = pontos_turisticos1;
            atributo1_cidade2 = pontos_turisticos2;
            break;
        case 5: // Densidade Demográfica
            atributo1_cidade1 = densidade_populacional1;
            atributo1_cidade2 = densidade_populacional2;
            break;
        case 6: // PIB per Capita
            atributo1_cidade1 = pib_per_capita1;
            atributo1_cidade2 = pib_per_capita2;
            break;
        case 7: // Super Poder
            atributo1_cidade1 = super_poder1;
            atributo1_cidade2 = super_poder2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }
    
    // Atributo 2
    switch (escolha2) {
        case 1: // População
            atributo2_cidade1 = populacao1;
            atributo2_cidade2 = populacao2;
            break;
        case 2: // Área
            atributo2_cidade1 = area1;
            atributo2_cidade2 = area2;
            break;
        case 3: // PIB
            atributo2_cidade1 = pib1;
            atributo2_cidade2 = pib2;
            break;
        case 4: // Pontos Turísticos
            atributo2_cidade1 = pontos_turisticos1;
            atributo2_cidade2 = pontos_turisticos2;
            break;
        case 5: // Densidade Demográfica
            atributo2_cidade1 = densidade_populacional1;
            atributo2_cidade2 = densidade_populacional2;
            break;
        case 6: // PIB per Capita
            atributo2_cidade1 = pib_per_capita1;
            atributo2_cidade2 = pib_per_capita2;
            break;
        case 7: // Super Poder
            atributo2_cidade1 = super_poder1;
            atributo2_cidade2 = super_poder2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Comparação dos atributos
float soma1 = atributo1_cidade1 + atributo2_cidade1;
float soma2 = atributo1_cidade2 + atributo2_cidade2;

// Exibição do resultado
printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
printf("Cidades Comparadas: %s vs %s\n", cidade1, cidade2);

// Exibição dos atributos escolhidos
printf("\nAtributos Escolhidos:\n");
printf("1º Atributo: ");
switch (escolha1) {
    case 1: printf("População\n"); 
        break;
    case 2: printf("Área\n"); 
        break;
    case 3: printf("PIB\n"); 
        break;
    case 4: printf("Pontos Turísticos\n"); 
        break;
    case 5: printf("Densidade Demográfica\n"); 
        break;
    case 6: printf("PIB per Capita\n"); 
        break;
    case 7: printf("Super Poder\n"); 
        break;
}

printf("2º Atributo: ");
switch (escolha2) {
    case 1: printf("População\n"); 
        break;
    case 2: printf("Área\n"); 
        break;
    case 3: printf("PIB\n"); 
        break;
    case 4: printf("Pontos Turísticos\n"); 
        break;
    case 5: printf("Densidade Demográfica\n"); 
        break;
    case 6: printf("PIB per Capita\n"); 
        break;
    case 7: printf("Super Poder\n"); 
        break;
}

// Exibição dos valores dos atributos
printf("\nValores dos Atributos:\n");
printf("%s:\n", cidade1);
printf("- Atributo 1 (%.2f)\n", atributo1_cidade1);
printf("- Atributo 2 (%.2f)\n", atributo2_cidade1);

printf("%s:\n", cidade2);
printf("- Atributo 1 (%.2f)\n", atributo1_cidade2);
printf("- Atributo 2 (%.2f)\n", atributo2_cidade2);

// Exibição das somas dos atributos
printf("\nSoma dos Atributos:\n");
printf("%s: %.2f\n", cidade1, soma1);
printf("%s: %.2f\n", cidade2, soma2);

// Determinação do vencedor
if (soma1 > soma2) {
    printf("\nVencedor: Carta 1 (%s)\n", cidade1);
} else if (soma2 > soma1) {
    printf("\nVencedor: Carta 2 (%s)\n", cidade2);
} else {
    printf("\nResultado: Empate!\n");
}

   return 0;
}

    

