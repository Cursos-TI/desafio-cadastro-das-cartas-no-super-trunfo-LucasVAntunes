#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao1, populacao2, populacao3, populacao4, pontosturisticos1, pontosturisticos2, pontosturisticos3, pontosturisticos4;
    float area1, area2, area3, area4, pib1, pib2, pib3, pib4;
    char codigo1 [4], codigo2 [4], codigo3 [4], codigo4 [4], nome1 [20], nome2 [20], nome3 [20], nome4 [20];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

//Cidade 1

    printf ("Seja bem vindo ao Super Trunfo Países\n\nInsira o nome da primeira cidade:\n");
    scanf ("%20s", nome1);
    
    printf ("Insira o código da carta:\n");
    scanf ("%3s", codigo1);
    
    printf ("Insira a população da cidade:\n");
    scanf ("%d", &populacao1);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontosturisticos1);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area1);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib1);

//Cidade 2

    printf ("Seja bem vindo ao Super Trunfo Países\n\nInsira o nome da segunda cidade:\n");
    scanf ("%20s", nome2);

    printf ("Insira o código da carta:\n");
    scanf ("%3s", codigo2);

    printf ("Insira a população da cidade:\n");
    scanf ("%d", &populacao2);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontosturisticos2);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area2);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib2);



//Cidade 3

    printf ("Insira o nome da terceira cidade:\n");
    scanf ("%20s", nome3);

    printf ("Insira o código da carta:\n");
    scanf ("%3s", codigo3);

    printf ("Insira a população da cidade:\n");
    scanf ("%d", &populacao3);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontosturisticos3);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area3);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib3);

//Cidade 4

    printf ("Seja bem vindo ao Super Trunfo Países\n\nInsira o nome da quarta cidade:\n");
    scanf ("%20s", nome4);

    printf ("Insira o código da carta:\n");
    scanf ("%3s", codigo4);

    printf ("Insira a população da cidade:\n");
    scanf ("%d", &populacao4);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontosturisticos4);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area4);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib4);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("\n=======================================================================\n");
    printf ("\nCIDADE 1\n\n");
    printf ("CIDADE: %s\n", nome1);
    printf ("CODIGO: %s\n", codigo1);
    printf ("POPULACAO: %d\n", populacao1);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos1);
    printf ("AREA: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf("=======================================================================\n");

    printf ("\n=======================================================================\n");
    printf ("\nCIDADE 2\n\n");
    printf ("CIDADE: %s\n", nome2);
    printf ("CODIGO: %s\n", codigo2);
    printf ("POPULACAO: %d\n", populacao2);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos2);
    printf ("AREA: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf("=======================================================================\n");

    printf("\n=======================================================================\n");
    printf ("\nCIDADE 3\n\n");
    printf ("CIDADE: %s\n", nome3);
    printf ("CODIGO: %s\n", codigo3);
    printf ("POPULACAO: %d\n", populacao3);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos3);
    printf ("AREA: %.2f\n", area3);
    printf ("PIB: %.2f\n", pib3);
    printf("=======================================================================\n");

    printf("\n=======================================================================\n");
    printf ("\nCIDADE 4\n\n");
    printf ("CIDADE: %s\n", nome4);
    printf ("CODIGO: %s\n", codigo4);
    printf ("POPULACAO: %d\n", populacao4);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos4);
    printf ("AREA: %.2f\n", area4);
    printf ("PIB: %.2f\n", pib4);
    printf("=======================================================================\n");

    return 0;
}
