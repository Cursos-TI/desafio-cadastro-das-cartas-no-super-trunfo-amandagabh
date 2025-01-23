#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
  
    int PIB, pontos_turisticos;
    float area, populacao;
    char estado [2];
    char nome[20];
 
    printf ("Entre com o nome da cidade\n");
    scanf("%s", &nome);

    printf ("Entre com o estado\n");
    scanf("%s", &estado);

    printf("Entre com a população\n");
    scanf(" %f", &populacao);

    printf("Entre com a área\n");
    scanf(" %f", &area);

    printf("Entre com o PIB\n");
    scanf(" %d", &PIB);

    printf("Entre com os pontos turísticos\n");
    scanf(" %d", &pontos_turisticos);

    printf("Nome da Cidade: %s \n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %d\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);


    return 0;
}
