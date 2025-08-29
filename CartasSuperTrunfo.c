#include<stdio.h>

    int main(){

        //criando vaaveis carta 1 e 2:

        char estado1, estado2;
        char cod_carta1[10], cod_carta2[10];
        char cidade1[20], cidade2[20];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int ponto_turistico1, ponto_turistico2;
        float densidade1, densidade2;
        float pib_per_capita1, pib_per_capita2;
        
        //lendo dados da carta 1:
        printf("Digite o estado da carta 1: (A / H) \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta 1: (01 / 04) \n"); 
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

        //Calculando a Densidade Populacional e PIB per capita carta 1:
        densidade1 = (float) populacao1 / area1;
        pib_per_capita1 =  pib1 / (float) populacao1;

        //Mostrando os dados da carta 1:
        printf("Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, cod_carta1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", ponto_turistico1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per capita: %.2f\n\n", pib_per_capita1);

        //lendo dados da carta 2:

        printf("Digite o estado da carta 2: (A / H) \n");
        scanf(" %c", &estado1);

        printf("Digite o código da carta 2: (01 / 04) \n");
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

        //Calculando a Densidade Populacional e PIB per capita carta 2:
        densidade2 = (float) populacao2 / area2;
        pib_per_capita2 =  pib2 / (float) populacao2;

        //Mostrando os dados da carta 2:
        printf("Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, cod_carta2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", ponto_turistico2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per capita: %.2f\n\n", pib_per_capita2);

        
        return 0;



    }
