#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gustavo Odas


    int main(){

        //criando variaveis carta 1 e 2:

        char estado1, estado2;
        char cod_carta1[10], cod_carta2[10];
        char cidade1[20], cidade2[20];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int ponto_turistico1, ponto_turistico2;

        //lendo dados da carta 1:
        printf("Digite o estado da carta 1: \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta 1: \n");
        scanf("%s", cod_carta1);

        printf("Digite o nome da cidade 1: \n");
        scanf("%s", cidade1);

        printf("Digite a população da cidade 1: \n");
        scanf("%d", &populacao1);

        printf("Digite a área da cidade 1: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade 1: \n");
        scanf("%f", &pib1);

        printf("Digite o número de pontos turísticos da cidade 1: \n");
        scanf("%d", &ponto_turistico1);

        //Mostrando os dados da carta 1:
        printf("Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, cod_carta1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", ponto_turistico1);


        //lendo dados da carta 2:

        printf("Digite o estado da carta 2: \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta 2: \n");
        scanf("%s", cod_carta2);

        printf("Digite o nome da cidade 2: \n");
        scanf("%s", cidade2);

        printf("Digite a população da cidade 2: \n");
        scanf("%d", &populacao2);

        printf("Digite a área da cidade 2: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade 2: \n");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos da cidade 2: \n");
        scanf("%d", &ponto_turistico2);

        //Mostrando os dados da carta 2:
        printf("Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, cod_carta2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", ponto_turistico2);

        return 0;
}
