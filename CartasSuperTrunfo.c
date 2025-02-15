#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int populacao1, populacao2, populacao3, populacao4, pontosturisticos1, pontosturisticos2, pontosturisticos3, pontosturisticos4, compara1, compara2;
    float area1, area2, area3, area4, pib1, pib2, pib3, pib4, denspop1, denspop2, denspop3, denspop4, ppcap1, ppcap2, ppcap3, ppcap4, poder1, poder2, poder3, poder4;
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

    printf ("\nInsira o nome da segunda cidade:\n");
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

    printf ("\nInsira o nome da terceira cidade:\n");
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

    printf ("\nInsira o nome da quarta cidade:\n");
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

//Cálculo densidade populacional

    denspop1 = populacao1 / area1;
    denspop2 = populacao2 / area2;
    denspop3 = populacao3 / area3;
    denspop4 = populacao4 / area4;

//Cálculo pib per capta

    ppcap1 = pib1 / populacao1;
    ppcap2 = pib2 / populacao2;
    ppcap3 = pib3 / populacao3;
    ppcap4 = pib4 / populacao4;

//Cálculo super poder

    poder1 = populacao1 + pontosturisticos1 + area1 + pib1 + denspop1 + ppcap1;
    poder2 = populacao2 + pontosturisticos2 + area2 + pib2 + denspop2 + ppcap2;
    poder3 = populacao3 + pontosturisticos3 + area3 + pib3 + denspop3 + ppcap3;
    poder4 = populacao4 + pontosturisticos4 + area4 + pib4 + denspop4 + ppcap4;

//Exibição dos dados

    printf ("\n=======================================================================\n");
    printf ("CIDADE 1\n\n");
    printf ("CIDADE: %s\n", nome1);
    printf ("CODIGO: %s\n", codigo1);
    printf ("POPULACAO: %d\n", populacao1);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos1);
    printf ("AREA: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("DENSIDADE POPULACIONAL: %.2f\n",denspop1);
    printf ("PIB PER CAPTA: %.2f\n",ppcap1);
    printf ("*SUPER PODER*: %.0f\n", poder1);
    printf("=======================================================================\n");

    printf ("\n=======================================================================\n");
    printf ("CIDADE 2\n\n");
    printf ("CIDADE: %s\n", nome2);
    printf ("CODIGO: %s\n", codigo2);
    printf ("POPULACAO: %d\n", populacao2);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos2);
    printf ("AREA: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("DENSIDADE POPULACIONAL: %.2f\n",denspop2);
    printf ("PIB PER CAPTA: %.2f\n",ppcap2);
    printf ("*SUPER PODER*: %.0f\n", poder2);
    printf("=======================================================================\n");

    printf("\n=======================================================================\n");
    printf ("CIDADE 3\n\n");
    printf ("CIDADE: %s\n", nome3);
    printf ("CODIGO: %s\n", codigo3);
    printf ("POPULACAO: %d\n", populacao3);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos3);
    printf ("AREA: %.2f\n", area3);
    printf ("PIB: %.2f\n", pib3);
    printf ("DENSIDADE POPULACIONAL: %.2f\n",denspop3);
    printf ("PIB PER CAPTA: %.2f\n",ppcap3);
    printf ("*SUPER PODER*: %.0f\n", poder3);
    printf("=======================================================================\n");

    printf("\n=======================================================================\n");
    printf ("CIDADE 4\n\n");
    printf ("CIDADE: %s\n", nome4);
    printf ("CODIGO: %s\n", codigo4);
    printf ("POPULACAO: %d\n", populacao4);
    printf ("PONTOS TURISTICOS: %d\n", pontosturisticos4);
    printf ("AREA: %.2f\n", area4);
    printf ("PIB: %.2f\n", pib4);
    printf ("DENSIDADE POPULACIONAL: %.2f\n",denspop4);
    printf ("PIB PER CAPTA: %.2f\n",ppcap4);
    printf ("*SUPER PODER*: %.0f\n", poder4);
    printf("=======================================================================\n");

//Comparação de cartas

    printf("\nDigite o número referente a primeira cidade a ser comparada.\n");
    printf("1. %s.\n",nome1);
    printf("2. %s.\n",nome2);
    printf("3. %s.\n",nome3);
    printf("4. %s.\n",nome4);
    scanf ("%d", &compara1);

    switch (compara1)
    {
                                   //COMPARAÇÕES CIDADE 1
    case 1:

    printf("\nQual cidade deseja comparar a %s?\n", nome1);
    scanf ("%d", &compara2);
    
        switch (compara2)
        {
    
            //CIDADE 1 vs CIDADE 2
        
        case 2:
        
        //População
        
        if (populacao1>populacao2)
        {
            printf ("\nA população de %s (%d) é maior que a população de %s (%d).\n",nome1,populacao1,nome2,populacao2);
        }
        else if (populacao1<populacao2)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome2,populacao2,nome1,populacao1);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome1,nome2,populacao1);
        }
        
        //pontos turísticos
        
        if (pontosturisticos1>pontosturisticos2)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome1,pontosturisticos1,nome2,pontosturisticos2);
        }
        else if (pontosturisticos1<pontosturisticos2) 
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome2,pontosturisticos2,nome1,pontosturisticos1);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome1,nome2,pontosturisticos1);
        }
        
        //Área

        if (area1>area2)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome1,area1,nome2,area2);
        }
        else if (area1<area2)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome2,area2,nome1,area1);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome1,nome2,area1);
        }

        //PIB

        if (pib1>pib2)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome1,pib1,nome2,pib2);
        }
        else if (pib1<pib2)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome2,pib2,nome1,pib1);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome1,nome2,pib1);
        }

        //Densidade populacional

        if (denspop1<denspop2)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome1,denspop1,nome2,denspop2);
        }
        else if (denspop1>denspop2)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome2,denspop2,nome1,denspop1);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome1,nome2,denspop1);
        }

        //PIB per capta

        if (ppcap1>ppcap2)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome1,ppcap1,nome2,ppcap2);
        }
        else if (ppcap1<ppcap2)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome2,ppcap2,nome1,ppcap1);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome1,nome2,ppcap2);
        }

        //Super poder

        if (poder1>poder2)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome1,poder1,nome2,poder2);
        }
        else if (poder1<poder2)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome2,poder2,nome1,poder1);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome1,nome2,poder1);
        }

            break;

            //CIDADE 1 vs CIDADE 3
        
        case 3:

        //População
        
        if (populacao1>populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome1,populacao1,nome3,populacao3);
        }
        else if (populacao1<populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome3,populacao3,nome1,populacao1);
        }
        else 
        {
            printf("A população de %s e %s são iguais (%d)\n",nome1,nome3,populacao1);
        }
        
        //pontos turísticos
        
        if (pontosturisticos1>pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome1,pontosturisticos1,nome3,pontosturisticos3);
        }
        else if (pontosturisticos1<pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome3,pontosturisticos3,nome1,pontosturisticos1);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome1,nome3,pontosturisticos1);
        }

        //Área

        if (area1>area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome1,area1,nome3,area3);
        }
        else if (area1<area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome3,area3,nome1,area1);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome1,nome3,area1);
        }

        //PIB

        if (pib1>pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome1,pib1,nome3,pib3);
        }
        else if (pib1<pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome3,pib3,nome1,pib1);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome1,nome3,pib1);
        }

        //Densidade populacional

        if (denspop1<denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome1,denspop1,nome3,denspop3);
        }
        else if (denspop1>denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome3,denspop3,nome1,denspop1);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome1,nome3,denspop1);
        }

        //PIB per capta

        if (ppcap1>ppcap3)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome1,ppcap1,nome3,ppcap3);
        }
        else if (ppcap1<ppcap3)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome3,ppcap3,nome1,ppcap1);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome1,nome3,ppcap2);
        }

        //Super poder

        if (poder1>poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome1,poder1,nome3,poder3);
        }
        else if (poder1<poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome3,poder3,nome1,poder1);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome1,nome3,poder1);
        }

            break;

            //CIDADE 1 vs CIDADE 4
        case 4:

        //População
        
        if (populacao1>populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome1,populacao1,nome4,populacao4);
        }
        else if (populacao1<populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome4,populacao4,nome1,populacao1);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome1,nome4,populacao1);
        }
        
        //pontos turísticos
        
        if (pontosturisticos1>pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome1,pontosturisticos1,nome4,pontosturisticos4);
        }
        else if (pontosturisticos1<pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome4,pontosturisticos4,nome1,pontosturisticos1);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome1,nome4,pontosturisticos1);
        }
        
        //Área

        if (area1>area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome1,area1,nome4,area4);
        }
        else if (area1<area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome4,area4,nome1,area1);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome1,nome4,area1);
        }

        //PIB

        if (pib1>pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome1,pib1,nome4,pib4);
        }
        else if (pib1<pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome4,pib4,nome1,pib1);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome1,nome4,pib1);
        }

        //Densidade populacional

        if (denspop1<denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome1,denspop1,nome4,denspop4);
        }
        else if (denspop1>denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome4,denspop4,nome1,denspop1);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome1,nome4,denspop1);
        }

        //PIB per capta

        if (ppcap1>ppcap4)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome1,ppcap1,nome4,ppcap4);
        }
        else if (ppcap1<ppcap4)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome4,ppcap4,nome1,ppcap1);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome1,nome4,ppcap1);
        }

        //Super poder

        if (poder1>poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome1,poder1,nome4,poder4);
        }
        else if (poder1<poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n\n",nome4,poder4,nome1,poder1);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome1,nome4,poder1);
        }

            break;

        default:
        
        printf("Opção inválida!\n");

            break;
        }
        break;
    
                                    //COMPARAÇÕES CIDADE 2
    case 2:

    printf("\nQual cidade deseja comparar a %s?\n", nome2);
    scanf ("%d", &compara2);
    
        switch (compara2)
        {
    
            //CIDADE 2 vs CIDADE 1
        
        case 2:

        //População
        
        if (populacao1>populacao2)
        {
            printf ("\nA população de %s (%d) é maior que a população de %s (%d).\n",nome1,populacao1,nome2,populacao2);
        }
        else if (populacao1<populacao2)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome2,populacao2,nome1,populacao1);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome1,nome2,populacao1);
        }
        
        //pontos turísticos
        
        if (pontosturisticos1>pontosturisticos2)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome1,pontosturisticos1,nome2,pontosturisticos2);
        }
        else if (pontosturisticos1<pontosturisticos2)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome2,pontosturisticos2,nome1,pontosturisticos1);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome1,nome2,pontosturisticos1);
        }
        
        //Área

        if (area1>area2)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome1,area1,nome2,area2);
        }
        else if (area1<area2)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome2,area2,nome1,area1);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome1,nome2,area1);
        }

        //PIB

        if (pib1>pib2)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome1,pib1,nome2,pib2);
        }
        else if (pib1<pib2)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome2,pib2,nome1,pib1);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome1,nome2,pib1);
        }

        //Densidade populacional

        if (denspop1<denspop2)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome1,denspop1,nome2,denspop2);
        }
        else if (denspop1>denspop2)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome2,denspop2,nome1,denspop1);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome1,nome2,denspop1);
        }

        //PIB per capta

        if (ppcap1>ppcap2)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome1,ppcap1,nome2,ppcap2);
        }
        else if (ppcap1<ppcap2)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome2,ppcap2,nome1,ppcap1);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome1,nome2,ppcap2);
        }

        //Super poder

        if (poder1>poder2)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome1,poder1,nome2,poder2);
        }
        else if (poder1<poder2)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome2,poder2,nome1,poder1);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome1,nome2,poder1);
        }

            break;

            //CIDADE 2 vs CIDADE 3
        
        case 3:

        //População
        
        if (populacao2>populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome2,populacao2,nome3,populacao3);
        }
        else if (populacao2<populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome3,populacao3,nome2,populacao2);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome2,nome4,populacao2);
        }
        
        //pontos turísticos
        
        if (pontosturisticos2>pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome2,pontosturisticos2,nome3,pontosturisticos3);
        }
        else if (pontosturisticos2<pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome3,pontosturisticos3,nome2,pontosturisticos2);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome2,nome3,pontosturisticos2);
        }
        
        //Área

        if (area2>area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome2,area2,nome3,area3);
        }
        else if (area2<area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome3,area3,nome2,area2);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome2,nome3,area2);
        }

        //PIB

        if (pib2>pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome2,pib2,nome3,pib3);
        }
        else if (pib2<pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome3,pib3,nome2,pib2);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome2,nome3,pib2);
        }

        //Densidade populacional

        if (denspop2<denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome2,denspop2,nome3,denspop3);
        }
        else if (denspop2>denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome3,denspop3,nome2,denspop2);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome2,nome3,denspop2);
        }

        //PIB per capta

        if (ppcap2>ppcap3)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome2,ppcap2,nome3,ppcap3);
        }
        else if (ppcap2<ppcap3)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome3,ppcap3,nome2,ppcap2);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome2,nome3,ppcap2);
        }

        //Super poder

        if (poder2>poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome2,poder2,nome3,poder3);
        }
        else if (poder2<poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome3,poder3,nome2,poder2);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome2,nome3,poder2);
        }

            break;

            //CIDADE 2 vs CIDADE 4
        case 4:

        //População
        
        if (populacao2>populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome2,populacao2,nome4,populacao4);
        }
        else if (populacao2<populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome4,populacao4,nome2,populacao2);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome2,nome4,populacao2);
        }
        
        //pontos turísticos
        
        if (pontosturisticos2>pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome2,pontosturisticos2,nome4,pontosturisticos4);
        }
        else if (pontosturisticos2<pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome4,pontosturisticos4,nome2,pontosturisticos2);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome2,nome4,pontosturisticos2);
        }
        
        //Área

        if (area2>area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome2,area2,nome4,area4);
        }
        else if (area2<area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome4,area4,nome2,area2);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome2,nome4,area2);
        }

        //PIB

        if (pib2>pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome2,pib2,nome4,pib4);
        }
        else if (pib2<pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome4,pib4,nome2,pib2);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome2,nome4,pib2);
        }

        //Densidade populacional

        if (denspop2<denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome2,denspop2,nome4,denspop4);
        }
        else if (denspop2>denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome4,denspop4,nome2,denspop2);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome2,nome4,denspop2);
        }

        //PIB per capta

        if (ppcap2>ppcap4)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome2,ppcap2,nome4,ppcap4);
        }
        else if (ppcap2<ppcap4)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome4,ppcap4,nome2,ppcap2);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome2,nome4,ppcap2);
        }

        //Super poder

        if (poder2>poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome2,poder2,nome4,poder4);
        }
        else if (poder2<poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n\n",nome4,poder4,nome2,poder2);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome2,nome4,poder2);
        }

            break;

        default:

        printf("Opção inválida!\n");

            break;
        }
        break;

                                    //COMPARAÇÕES CIDADE 3

    case 3:

    printf("\nQual cidade deseja comparar a %s?\n", nome3);
    scanf ("%d", &compara2);
    
        switch (compara2)
        {
    
            //CIDADE 3 vs CIDADE 1
        
        case 1:

        //População
        
        if (populacao1>populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome1,populacao1,nome3,populacao3);
        }
        else if (populacao1<populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome3,populacao3,nome1,populacao1);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome1,nome3,populacao1);
        }
        
        //pontos turísticos
        
        if (pontosturisticos1>pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome1,pontosturisticos1,nome3,pontosturisticos3);
        }
        else if (pontosturisticos1<pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome3,pontosturisticos3,nome1,pontosturisticos1);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome1,nome3,pontosturisticos1);
        }
        
        //Área

        if (area1>area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome1,area1,nome3,area3);
        }
        else if (area1<area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome3,area3,nome1,area1);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome1,nome3,area1);
        }

        //PIB

        if (pib1>pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome1,pib1,nome3,pib3);
        }
        else if (pib1<pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome3,pib3,nome1,pib1);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome1,nome3,pib1);
        }

        //Densidade populacional

        if (denspop1<denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome1,denspop1,nome3,denspop3);
        }
        else if (denspop1>denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome3,denspop3,nome1,denspop1);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome1,nome3,denspop1);
        }

        //PIB per capta

        if (ppcap1>ppcap3)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome1,ppcap1,nome3,ppcap3);
        }
        else if (ppcap1<ppcap3)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome3,ppcap3,nome1,ppcap1);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome1,nome3,ppcap1);
        }

        //Super poder

        if (poder1>poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome1,poder1,nome3,poder3);
        }
        else if (poder1<poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome3,poder3,nome1,poder1);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome1,nome3,poder1);
        }

            break;

            //CIDADE 3 vs CIDADE 2
        
        case 2:

        //População
        
        if (populacao2>populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome2,populacao2,nome3,populacao3);
        }
        else if (populacao2<populacao3)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome3,populacao3,nome2,populacao2);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome2,nome3,populacao2);
        }
        
        //pontos turísticos
        
        if (pontosturisticos2>pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome2,pontosturisticos2,nome3,pontosturisticos3);
        }
        else if (pontosturisticos2<pontosturisticos3)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome3,pontosturisticos3,nome2,pontosturisticos2);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome2,nome3,pontosturisticos2);
        }

        //Área

        if (area2>area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome2,area2,nome3,area3);
        }
        else if (area2<area3)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome3,area3,nome2,area2);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome2,nome3,area2);
        }

        //PIB

        if (pib2>pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome2,pib2,nome3,pib3);
        }
        else if (pib2<pib3)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome3,pib3,nome2,pib2);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome2,nome3,pib2);
        }

        //Densidade populacional

        if (denspop2<denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome2,denspop2,nome3,denspop3);
        }
        else if (denspop2>denspop3)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome3,denspop3,nome2,denspop2);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome2,nome3,denspop2);
        }

        //PIB per capta

        if (ppcap2>ppcap3)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome2,ppcap2,nome3,ppcap3);
        }
        else if (ppcap2<ppcap3)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome3,ppcap3,nome2,ppcap2);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome2,nome3,ppcap2);
        }

        //Super poder

        if (poder2>poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome2,poder2,nome3,poder3);
        }
        else if (poder2<poder3)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome3,poder3,nome2,poder2);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome2,nome3,poder1);
        }

            break;

            //CIDADE 3 vs CIDADE 4

        case 4:

        //População
        
        if (populacao3>populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome3,populacao3,nome4,populacao4);
        }
        else if (populacao3<populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome4,populacao4,nome3,populacao3);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome3,nome3,populacao4);
        }
        
        //pontos turísticos
        
        if (pontosturisticos3>pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome3,pontosturisticos3,nome4,pontosturisticos4);
        }
        else if (pontosturisticos3<pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome4,pontosturisticos4,nome3,pontosturisticos3);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome3,nome4,pontosturisticos3);
        }
        
        //Área

        if (area3>area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome3,area3,nome4,area4);
        }
        else if (area3<area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome4,area4,nome3,area3);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome3,nome4,area3);
        }

        //PIB

        if (pib3>pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome3,pib3,nome4,pib4);
        }
        else if (pib3<pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome4,pib4,nome3,pib3);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome3,nome2,pib4);
        }

        //Densidade populacional

        if (denspop3<denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome3,denspop3,nome4,denspop4);
        }
        else if (denspop3>denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome4,denspop4,nome3,denspop3);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome3,nome2,denspop4);
        }

        //PIB per capta

        if (ppcap3>ppcap4)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome3,ppcap3,nome4,ppcap4);
        }
        else if (ppcap3<ppcap4)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome4,ppcap4,nome3,ppcap3);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome3,nome4,ppcap3);
        }

        //Super poder

        if (poder3>poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome3,poder3,nome4,poder4);
        }
        else if (poder3<poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n\n",nome4,poder4,nome3,poder3);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome3,nome4,poder3);
        }

            break;

        default:

        printf("Opção inválida!\n");

            break;
        }
        break;    

                                    //COMPARAÇÕES CIDADE 4

    case 4:

    printf("\nQual cidade deseja comparar a %s?\n", nome4);
    scanf ("%d", &compara2);
    
        switch (compara2)
        {
    
            //CIDADE 4 vs CIDADE 1
        
        case 1:

        //População
        
        if (populacao1>populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome1,populacao1,nome4,populacao4);
        }
        else if (populacao1<populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome4,populacao4,nome1,populacao1);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome1,nome4,populacao1);
        }
        
        //pontos turísticos
        
        if (pontosturisticos1>pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome1,pontosturisticos1,nome4,pontosturisticos4);
        }
        else if (pontosturisticos1<pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome4,pontosturisticos4,nome1,pontosturisticos1);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome1,nome4,pontosturisticos1);
        }
        
        //Área

        if (area1>area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome1,area1,nome4,area4);
        }
        else if (area1<area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome4,area4,nome1,area1);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome1,nome4,area1);
        }

        //PIB

        if (pib1>pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome1,pib1,nome4,pib4);
        }
        else if (pib1<pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome4,pib4,nome1,pib1);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome1,nome4,pib1);
        }

        //Densidade populacional

        if (denspop1<denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome1,denspop1,nome4,denspop4);
        }
        else if (denspop1>denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome4,denspop4,nome1,denspop1);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome1,nome4,denspop1);
        }

        //PIB per capta

        if (ppcap1>ppcap4)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome1,ppcap1,nome4,ppcap4);
        }
        else if (ppcap1<ppcap4)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome4,ppcap4,nome1,ppcap1);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome1,nome4,ppcap1);
        }

        //Super poder

        if (poder1>poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome1,poder1,nome4,poder4);
        }
        else if (poder1<poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n\n",nome4,poder4,nome1,poder1);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome1,nome4,poder1);
        }

            break;

            //CIDADE 4 vs CIDADE 2
        
        case 2:

        //População
        
        if (populacao2>populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome2,populacao2,nome4,populacao4);
        }
        else if (populacao2<populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome4,populacao4,nome2,populacao2);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome2,nome4,populacao2);
        }
        
        //pontos turísticos
        
        if (pontosturisticos2>pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome2,pontosturisticos2,nome4,pontosturisticos4);
        }
        else if (pontosturisticos2<pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome4,pontosturisticos4,nome2,pontosturisticos2);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome2,nome4,pontosturisticos2);
        }

        //Área

        if (area2>area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome2,area2,nome4,area4);
        }
        else if (area2<area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome4,area4,nome2,area2);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome2,nome4,area2);
        }

        //PIB

        if (pib2>pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome2,pib2,nome4,pib4);
        }
        else if (pib2<pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome4,pib4,nome2,pib2);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome2,nome4,pib2);
        }

        //Densidade populacional

        if (denspop2<denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome2,denspop2,nome4,denspop4);
        }
        else if (denspop2>denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome4,denspop4,nome2,denspop2);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome2,nome4,denspop2);
        }

        //PIB per capta

        if (ppcap2>ppcap4)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome2,ppcap2,nome4,ppcap4);
        }
        else if (ppcap2<ppcap4)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome4,ppcap4,nome2,ppcap2);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome2,nome4,ppcap2);
        }

        //Super poder

        if (poder2>poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome2,poder2,nome4,poder4);
        }
        else if (poder2<poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n\n",nome4,poder4,nome2,poder2);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome2,nome4,poder2);
        }

            break;

            //CIDADE 4 vs CIDADE 3

        case 3:

        //População
        
        if (populacao3>populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome3,populacao3,nome4,populacao4);
        }
        else if (populacao3<populacao4)
        {
            printf ("A população de %s (%d) é maior que a população de %s (%d).\n",nome4,populacao4,nome3,populacao3);
        }
        else 
        {
            printf("A população de %s e de %s são iguais (%d)\n",nome3,nome4,populacao3);
        }
        
        //pontos turísticos
        
        if (pontosturisticos3>pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome3,pontosturisticos3,nome4,pontosturisticos4);
        }
        else if (pontosturisticos3<pontosturisticos4)
        {
            printf ("%s tem mais pontos turísticos (%d) que %s (%d).\n",nome4,pontosturisticos4,nome3,pontosturisticos3);
        }
        else 
        {
            printf("O número de pontos turísticos de %s e de %s são iguais (%d)\n",nome3,nome4,pontosturisticos3);
        }
        
        //Área

        if (area3>area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome3,area3,nome4,area4);
        }
        else if (area3<area4)
        {
            printf ("A area de %s (%.2f) é maior que a area de %s (%.2f).\n",nome4,area4,nome3,area3);
        }
        else 
        {
            printf("A área de %s e %s são iguais (%.2f)\n",nome3,nome4,area3);
        }

        //PIB

        if (pib3>pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome3,pib3,nome4,pib4);
        }
        else if (pib3<pib4)
        {
            printf ("O PIB de %s (%.2f) é maior que o PIB de %s (%.2f).\n",nome4,pib4,nome3,pib3);
        }
        else 
        {
            printf("O PIB de %s e %s são iguais (%.2f)\n",nome3,nome4,pib3);
        }

        //Densidade populacional

        if (denspop3<denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome3,denspop3,nome4,denspop4);
        }
        else if (denspop3>denspop4)
        {
            printf ("A densidade populacional de %s (%.2f) é menor que a densidade populacional de %s (%.2f).\n",nome4,denspop4,nome3,denspop3);
        }
        else 
        {
            printf("A densidade populacional de %s e %s são iguais (%.2f)\n",nome3,nome4,denspop3);
        }

        //PIB per capta

        if (pib3>pib4)
        {
            printf ("O PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome3,ppcap3,nome4,ppcap4);
        }
        else if (ppcap3<ppcap4)
        {
            printf ("A PIB per capta de %s (%.2f) é maior que o PIB per capta de %s (%.2f).\n",nome4,ppcap4,nome3,ppcap3);
        }
        else 
        {
            printf("O PIB per capta de %s e %s são iguais (%.2f)\n",nome3,nome4,ppcap3);
        }

        //Super poder

        if (poder3>poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n",nome3,poder3,nome4,poder4);
        }
        else if (poder3<poder4)
        {
            printf ("O super poder de %s (%.0f) é maior que o super poder de %s (%.0f).\n\n",nome4,poder4,nome3,poder3);
        }
        else 
        {
            printf("O super poder de %s e %s são iguais (%.2f)\n",nome3,nome4,poder3);
        }

            break;

        default:

        printf("Opção inválida!\n");

            break;
        }
        break;

    default:

    printf("Opção inválida!\n");

        break;
    }

    return 0;
}
