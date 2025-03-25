#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
    int PIB1, PIB2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, populacao1, populacao2;
    char estado1 [2], estado2 [2], nome1 [20], nome2 [20];
    float densidade_populacional1, densidade_populacional2, PIB_per_capita1, PIB_per_capita2; 
    int carta1 = 1, carta2 = 2, opcao;

    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = PIB1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;

    printf("***Jogo SUPR TRUNFO***\n");
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
    printf("***Dados preenchidos com sucesso!***\n");

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

    printf("Escolha uma opção: \n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar PIB per Capita\n");
    printf("6. Comparar Densidade Populacional\n");
    printf("Escolha: ");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1: 
    printf ("Comparação de cartas Atributo População:\n");
    if (populacao1 > populacao2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
    } else if (populacao1 < populacao2)
    { printf("Resultado: Carta 2: %s venceu!\n", nome2);
    } else { printf("Houve um empate\n");}
    break;

    case 2:
    printf ("Comparação de cartas Atributo Área:\n");
    if (area1 > area2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
    } else if (area1 < area2) 
    { printf("Resultado: Carta 2: %s venceu!\n", nome2);
    } else { printf("Houve um empate\n");}
    break;

    case 3:
    printf ("Comparação de cartas Atributo PIB:\n");
    if (PIB1 > PIB2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
    } else if (PIB1 < PIB2) 
    { printf("Resultado: Carta 2: %s venceu!\n", nome2);
    } else { printf("Houve um empate\n");}
    break;

    case 4:
    printf ("Comparação de cartas Atributo Pontos Turísticos:\n");
    if (pontos_turisticos1 > pontos_turisticos2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
    } else if (pontos_turisticos1 < pontos_turisticos2) 
    { printf("Resultado: Carta 2: %s venceu!\n", nome2);
    } else { printf("Houve um empate\n");}
    break;
    case 5:
    printf ("Comparação de cartas Atributo PIB per Capita:\n");
    if (PIB_per_capita1 > PIB_per_capita2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 );
    } else if (PIB_per_capita1 < PIB_per_capita2) 
    { printf("Resultado: Carta 2: %s venceu!\n", nome2);
    } else { printf("Houve um empate\n");}
    break;
    case 6:
    printf ("Comparação de cartas Atributo Densidade populcional:\n");
    if (densidade_populacional1 < densidade_populacional2)
    { printf("Resultado: Carta 1: %s venceu!\n", nome1 ); 
    } else if (densidade_populacional1 > densidade_populacional2)
    { printf("Resultado: Carta 2: %s venceu!\n", nome2);
    } else {printf("Houve um empate\n");}
    break;

    default:
       printf ("Opção inválida!\n");
       break;   
    }

    return 0;
}

