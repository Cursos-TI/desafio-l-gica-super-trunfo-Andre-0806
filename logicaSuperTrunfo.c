#include <stdio.h>  
#include <string.h>

int main() { 
    unsigned int populacao1, populacao2, num_pontos_turisticos1, num_pontos_turisticos2, ddd1 , ddd2;
    float pib1, pib2, area1, area2, pib_per_capita1, pib_per_capita2, densidade_populacional, densidade_populacional2, super_poder, super_poder2;
    char Estado1[50], Estado2[50], Cidade1[50], Cidade2[50];
    
    // Entrada de Dados
    printf("--- Dados da Cidade 1 ---\n");
    printf("Digite o 1 nome do Estado:\n");
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = '\0';
    printf("Digite o 1 nome da Cidade :\n");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = '\0';
    printf("Digite o DDD:\n");
    scanf("%u", &ddd1);
    printf("Digite os pontos turisticos:\n");
    scanf("%u", &num_pontos_turisticos1);
    printf("Digite a populacao:\n");
    scanf("%u", &populacao1);
    printf("Digite a area:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em reais:\n");
    scanf("%f", &pib1);
    pib_per_capita1 = pib1 / populacao1;
    densidade_populacional = (float) populacao1 / area1;
    printf("PIB per Capita é:  %.2f reais\n", pib_per_capita1);
    printf("Densidade Populacional é: %.2f hab/km² \n", densidade_populacional);
    

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Digite o 2 nome do Estado:\n");
    getchar(); // Limpar o buffer do teclado
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = '\0';
    printf("Digite o 2 nome da Cidade :\n");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0';
    printf("Digite o DDD:\n");
    scanf("%u", &ddd2);
    printf("Digite os pontos turisticos:\n");
    scanf("%u", &num_pontos_turisticos2);
    printf("Digite a populacao:\n");
    scanf("%u", &populacao2);
    printf("Digite a area:\n");
    scanf("%f", &area2);
    printf("Digite o PIB em reais:\n");
    scanf("%f", &pib2);
    pib_per_capita2 = pib2 / populacao2;
    densidade_populacional2 = (float) populacao2 / area2;
    printf("PIB per Capita é:  %.2f reais\n", pib_per_capita2);
    printf("Densidade Populacional é: %.2f hab/km² \n", densidade_populacional2);

    // Resultado Final
    if (populacao1 > populacao2) {
        printf("\nResultado Final: Carta 1 é a vencedora!\n", Cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado Final: Carta 2 é a vencedora!\n", Cidade2);
    } else {
        printf("\nResultado Final: Empate!\n");
    }
    return 0;
}
