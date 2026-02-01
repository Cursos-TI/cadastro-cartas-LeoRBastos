#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Variáveis para a Carta 1
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis para a Carta 2
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código (ex: A01): "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    // Cálculos Nível Aventureiro/Mestre
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // PIB convertido para reais
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);

    // --- REPETIR O PROCESSO PARA CARTA 2 (Omitido para brevidade) ---
    // ... (Cole o bloco acima alterando os índices para 2) ...

    // --- COMPARAÇÃO (Nível Mestre) ---
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    
    // Na Densidade Populacional, o MENOR valor vence
    printf("População: Carta %d venceu\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Área: Carta %d venceu\n", (area1 > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib1 > pib2) ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", (pontos1 > pontos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
    printf("SUPER PODER: Carta %d venceu\n", (superPoder1 > superPoder2) ? 1 : 2);



return 0;
} 
