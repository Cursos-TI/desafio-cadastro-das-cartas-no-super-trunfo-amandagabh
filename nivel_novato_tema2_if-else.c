#include <stdio.h>



int main() {
    
    int PIB1, PIB2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, populacao1, populacao2;
    char estado1 [2], estado2 [2], nome1 [20], nome2 [20];
    float densidade_populacional1, densidade_populacional2, PIB_per_capita1, PIB_per_capita2; 
    
    printf ("Preencha os dados da CARTA 1\n");
    printf ("Entre com o nome da cidade:\n");
    scanf("%s", &nome1);

    printf ("Entre com o estado:\n");
    scanf("%s", &estado1);

    printf("Entre com a população:\n");
    scanf(" %f", &populacao1);

    printf("Entre com a área:\n");
    scanf(" %f", &area1);

    printf("Entre com o PIB:\n");
    scanf(" %d", &PIB1);

    printf("Entre com os pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = PIB1 / populacao1;

    printf ("Preencha os dados da CARTA 2\n");
    printf ("Entre com o nome da cidade:\n");
    scanf("%s", &nome2);

    printf ("Entre com o estado:\n");
    scanf("%s", &estado2);

    printf("Entre com a população:\n");
    scanf(" %f", &populacao2);

    printf("Entre com a área:\n");
    scanf(" %f", &area2);

    printf("Entre com o PIB:\n");
    scanf(" %d", &PIB2);

    printf("Entre com os pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;

    printf("CARTA 1\n");
    printf("Nome da Cidade: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %d\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB per Capita: %.2f\n", PIB_per_capita1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);

    printf("CARTA 2\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %d\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB per Capita: %.2f\n", PIB_per_capita2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);

    printf ("Comparação de cartas (Atributo: PIB):\n");
    if (PIB1 > PIB2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
        
    } else {
        printf("Resultado: Carta 2: %s venceu!\n", nome2);
    }
    
    printf ("Comparação de cartas (Atributo: Densidade populcional):\n");
    if (densidade_populacional1 < densidade_populacional2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
        
    } else {
        printf("Resultado: Carta 2: %s venceu!\n", nome2);
    }

    printf ("Comparação de cartas (Atributo: População):\n");
    if (populacao1 > populacao2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
        
    } else {
        printf("Resultado: Carta 2: %s venceu!\n", nome2);
    }

    return 0;
}