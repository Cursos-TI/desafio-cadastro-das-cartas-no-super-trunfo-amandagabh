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
    char estado [2], nome [20];
    float densidade_populacional, PIB_per_capita; 
    
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

    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;
 
    printf("Nome da Cidade: %s\n", nome);
    printf("Estado: %s\n", estado);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %d\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("PIB per Capita: %.2f\n", PIB_per_capita);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);



    /*### 🆕 Diferença em relação ao Nível Novato:
- **Novas Propriedades Calculadas:**
  - **Densidade Populacional:** População dividida pela área da cidade.
  - **PIB per Capita:** PIB total dividido pela população.

### ⚙️ Funcionalidades do Sistema:
- O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
- Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário continua inserindo os dados de cada carta interativamente.
- O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.
*/


    return 0;
}
