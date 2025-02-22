#include <stdio.h>

int main() {

    int pop1, pop2, pontos1, pontos2, atributo;
    float area1, area2, pib1, pib2, dens1, dens2;
    char nome1 [20], nome2 [20];

    //Cadastro das cartas

//Cidade 1

    printf ("Seja bem vindo ao Super Trunfo Países\n\nInsira o nome da primeira cidade:\n");
    scanf ("%20s", nome1);
    
    printf ("Insira a população da cidade:\n");
    scanf ("%d", &pop1);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontos1);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area1);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib1);

//Cidade 2

    printf ("\nInsira o nome da segunda cidade:\n");
    scanf ("%20s", nome2);

    printf ("Insira a população da cidade:\n");
    scanf ("%d", &pop2);

    printf ("Insira o número de pontos turísticos:\n");
    scanf ("%d", &pontos2);

    printf ("Insira a área da cidade em KM²:\n");
    scanf ("%f", &area2);

    printf ("Insira o PIB da cidade:\n");
    scanf ("%f", &pib2);

//Cálculo densidade demográfica

    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

//Exibição dados das cartas

    printf ("\n=======================================================================\n");
    printf ("CIDADE 1\n\n");
    printf ("CIDADE: %s\n", nome1);
    printf ("POPULACAO: %d\n", pop1);
    printf ("PONTOS TURISTICOS: %d\n", pontos1);
    printf ("AREA: %.2f\n", area1);
    printf ("PIB: %.2f\n", pib1);
    printf ("DENSIDADE DEMOGRÁFICA: %.2f\n",dens1);
    printf("=======================================================================\n");

    printf ("\n=======================================================================\n");
    printf ("CIDADE 2\n\n");
    printf ("CIDADE: %s\n", nome2);
    printf ("POPULACAO: %d\n", pop2);
    printf ("PONTOS TURISTICOS: %d\n", pontos2);
    printf ("AREA: %.2f\n", area2);
    printf ("PIB: %.2f\n", pib2);
    printf ("DENSIDADE DEMOGRÁFICA: %.2f\n",dens2);
    printf("=======================================================================\n");

//Escolha de atributos

    printf ("Qual atributo das cartas deseja comparar?\n\n");
    printf ("1. População\n2. Pontos turísticos\n3. Área\n4. PIB\n5. Densidade demográfica.\n\n");
    printf ("Escolha: ");
    scanf ("%d", &atributo);

//Comparação

    switch (atributo) {
        
        //População

        case 1:
        if (pop1 > pop2) {
            printf ("\n\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\nResultado: Carta 1 (%s) venceu!\n\n", &nome1, pop1, &nome2, pop2, &nome1);
        }
        else if (pop1 < pop2) {
            printf ("\n\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\nResultado: Carta 2 (%s) venceu!\n\n", &nome1, pop1, &nome2, pop2, &nome2);
        }
        else {
            printf ("\n\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s:\nCarta 2 - %s:\n\nResultado: Empate!\n\n", pop1, pop2);
        }
        break;

        //Pontos turísticos

        case 2:
        
        if (pontos1 > pontos2) {
            printf ("\n\nComparação de cartas (Atributo: pontos turísticos):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\nResultado: Carta 1 (%s) venceu!\n\n", &nome1, pontos1, &nome2, pontos2, &nome1);
        }
        else if (pop1 < pop2) {
            printf ("\n\nComparação de cartas (Atributo: pontos turísticos):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\nResultado: Carta 2 (%s) venceu!\n\n", &nome1, pontos1, &nome2, pontos2, &nome2);
        }
        else {
            printf ("\n\nComparação de cartas (Atributo: pontos turísticos):\n\nCarta 1 - %s:\nCarta 2 - %s:\n\nResultado: Empate!\n\n", pontos1, pontos2);
        }

        break;

        //Área
        
        case 3:

        if (area1 > area2) {
            printf ("\n\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Carta 1 (%s) venceu!\n\n", &nome1, area1, &nome2, area2, &nome1);
        }
        else if (area1 < area2) {
            printf ("\n\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Carta 2 (%s) venceu!\n\n", &nome1, area1, &nome2, area2, &nome2);
        }
        else {
            printf ("\n\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s:\nCarta 2 - %s:\n\nResultado: Empate!\n\n", area1, area2);
        }

        break;

        //Pib
        
        case 4:

        if (pib1 > pib2) {
            printf ("\n\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Carta 1 (%s) venceu!\n\n", &nome1, pib1, &nome2, pib2, &nome1);
        }
        else if (pib1 < pib2) {
            printf ("\n\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Carta 2 (%s) venceu!\n\n", &nome1, pib1, &nome2, pib2, &nome2);
        }
        else {
            printf ("\n\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s:\nCarta 2 - %s:\n\nResultado: Empate!\n\n", pib1, pib2);
        }

        break;

        //Densidade demográfica

        case 5:

        if (dens1 < dens2) {
            printf ("\n\nComparação de cartas (Atributo: densidade demográfica):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Carta 1 (%s) venceu!\n\n", &nome1, dens1, &nome2, dens2, &nome1);
        }
        else if (dens1 > dens2) {
            printf ("\n\nComparação de cartas (Atributo: densidade demográfica):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Carta 2 (%s) venceu!\n\n", &nome1, dens1, &nome2, dens2, &nome2);
        }
        else {
            printf ("\n\nComparação de cartas (Atributo: densidade demográfica):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\nResultado: Empate!\n\n", dens1, dens2);
        }

        break;

        default:

        printf ("Opção inválida!");
        
        break;

    }

    return 0;
}