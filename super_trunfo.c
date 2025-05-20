#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Carta 1
    printf("Cadastro da carta 1:\n");
printf("Digite o estado: (A a H): ");
scanf(" %c", &estado1); // Espaço antes de %c para consumir '\n'

printf("Digite o código da carta: ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
getchar(); // Limpa o '\n' deixado pelo scanf anterior
fgets(cidade1, 50, stdin);

printf("Digite a população: ");
scanf("%d", &populacao1);

printf("Digite a área (em km²): ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);

    // Carta 2
    printf("\nCadastro da carta 2:\n");
printf("Digite o estado: (A a H): ");
scanf(" %c", &estado2); // Espaço antes de %c para consumir '\n'

printf("Digite o código da carta: ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
getchar(); // Limpa o '\n' deixado pelo scanf anterior
fgets(cidade2, 50, stdin);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área (em km²): ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);


    //Exibir carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibir carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n");

    return 0;
}
