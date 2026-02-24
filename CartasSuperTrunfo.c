#include <stdio.h>

int main(){

    //----- VARIÁVEIS CARTA 1 e 2 -----
    char estado1[20], estado2[20];
    char codigo1[3], codigo2[3];
    char nome1[20], nome2[20];
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int pt1,pt2;

    // ----- Coleta de dados  CARTA 1 -----

    printf("[Carta 1] Digite o Estado:\n");
    scanf(" %c", &estado1);
    printf("Seu estado é: %c\n", estado1);

    printf("[Carta 1] Digite o código:\n");
    scanf("%s", &codigo1);
    printf("Seu código é: %s\n", codigo1);

    printf("[Carta 1] Digite o nome da cidade:\n");
    scanf("%s", &nome1);
    printf("O nome da cidade é: %s.\n", nome1);

    printf("[Carta 1] Digite a população:\n");
    scanf("%d", &populaçao1);
    printf("A população é de: %d.\n", populaçao1);

    printf("[Carta 1] Digite a área da cidade:\n");
    scanf("%f", &area1);
    printf("A área da cidade é: %.2fKm².\n", area1);

    printf("[Carta 1] Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("O PIB é de: %.1f\n", pib1);

    printf("[Carta 1] Digite o número de pontos turísticos:\n");
    scanf("%d", &pt1);
    printf("O número de pontos turísticos é: %d.\n\n\n", pt1);



        // ----- Coleta de dados  CARTA 2 -----

    printf("[Carta 2] Digite o Estado:\n");
    scanf(" %c", &estado2);
    printf("Seu estado é: %c\n", estado2);

    printf("[Carta 2] Digite o código:\n");
    scanf("%s", &codigo2);
    printf("Seu código é: %s\n", codigo2);

    printf("[Carta 2] Digite o nome da cidade:\n");
    scanf("%s", &nome2);
    printf("O nome da cidade é: %s.\n", nome2);

    printf("[Carta 2] Digite a população:\n");
    scanf("%d", &populaçao2);
    printf("A população é de: %d.\n", populaçao2);

    printf("[Carta 2] Digite a área da cidade:\n");
    scanf("%f", &area2);
    printf("A área da cidade é: %.2fKm².\n", area2);

    printf("[Carta 2] Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("O PIB é de: %.1f\n", pib2);

    printf("[Carta 2] Digite o número de pontos turísticos:\n");
    scanf("%d", &pt2);
    printf("O número de pontos turísticos é: %d.\n\n\n", pt2);



    // ----- Exibição CARTA 1 -----
    printf(" Carta 1:\n Estado:%c.\n Código: %s.\n Nome da cidade: %s.\n População: %d Habitantes.\n", estado1, codigo1, nome1, populaçao1);
    printf(" Área: %.2fKm².\n PIB: %.1f trilhões de reais.\n Número de pontos turísticos: %d.\n\n\n", area1, pib1, pt1);

    // ----- Exibição CARTA 2 -----
    printf(" Carta 2:\n Estado:%c.\n Código: %s.\n Nome da cidade: %s.\n População: %d Habitantes.\n", estado2, codigo2, nome2, populaçao2);
    printf(" Área: %.2fKm².\n PIB: %.1ftrilhões de reais.\n Número de pontos turísticos: %d.\n\n\n", area2, pib2, pt2);

    

return 0;

}