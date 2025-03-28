#include <stdio.h>

int main(){

    
    char estado1[50], estado2[50];
    char codigo1[5], codigo2[5]; //Ex. A01, A02, A03...
    char cidade1[20], cidade2[20]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("Bem vindo ao jogo Super Trunfo! \n\n");

    // Cadastro da Carta 1
    printf("Cadastro Carta 1!\n");
    printf("Digite o estado:\n");
    scanf("%s", estado1);
    printf("Codigo:\n");
    scanf("%s", codigo1);
    printf("Digite a cidade:\n");
    scanf("%s", cidade1);
    printf("Habitantes:\n");
    scanf("%d", &populacao1);
    printf("Area:\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);
    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro Carta 2!\n");
    printf("Digite o estado:\n");
    scanf("%s", estado2);
    printf("Codigo:\n");
    scanf("%s", codigo2);
    printf("Digite a cidade:\n");
    scanf("%s", cidade2);
    printf("Habitantes:\n");
    scanf("%d", &populacao2);
    printf("Area:\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);
    printf("\n");

    // Exibição das Cartas
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n\n", pontosturisticos1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n\n", pontosturisticos2);
    
     // Comparação e Resultado
    printf("\nComparação das cartas!\n");
    
    if (populacao1 > populacao2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }

return 0;
}
    