#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao, pontosturisticos;
    float area, pib;
    char codigo [4];
    char nome [10];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Seja bem vindo ao Super Trunfo Países\n\nInsira o nome da primeira cidade:\n");
    scanf ("%10s", &nome);
    
    printf ("Insira o código da carta:\n");
    scanf ("%3s", &codigo);
    
    printf ("Insira a população da cidade:\n");
    scanf ("%d", &populacao);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontosturisticos);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib);

    printf("=======================================================================\n");
    printf ("CIDADE: %s\n", nome);
    printf ("CODIGO: %s\n", codigo);
    printf ("POPULACAO: %d\n", populacao);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos);
    printf ("AREA: %.2f\n", area);
    printf ("PIB: %.2f\n", pib);
    printf("=======================================================================\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
