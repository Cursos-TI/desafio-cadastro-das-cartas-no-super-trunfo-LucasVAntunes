#include <stdio.h>

int main() {

    int pop1, pop2, pontos1, pontos2, atributo1, atributo2, soma1, soma2, resultado1, resultado2, resultado3;
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

    printf ("Qual o primeiro atributo das cartas que deseja comparar?\n\n");
    printf ("1. População\n2. Pontos turísticos\n3. Área\n4. PIB\n5. Densidade demográfica.\n\n");
    printf ("Escolha: ");
    scanf ("%d", &atributo1);
    printf ("\n\nQual o segundo atributo das cartas que deseja comparar?\n\n");
    printf ("1. População\n2. Pontos turísticos\n3. Área\n4. PIB\n5. Densidade demográfica.\n\n");
    printf ("Escolha: ");
    scanf ("%d", &atributo2);
    if (atributo1 == atributo2)
    {
        printf ("Você selecionou o mesmo atributo!\n\n");
    }
    else {
    
//Comparação

    switch (atributo1) {
        
        //População

        case 1:
       
        printf ("\n\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\n", nome1, pop1, nome2, pop2);
        if (pop1==pop2){

            resultado1= 0;
        }
        else{
            resultado1 = pop1 > pop2 ? 1 : 2;
        }
        
        soma1 = pop1;
        soma2 = pop2;

        break;

        //Pontos turísticos

        case 2:
        
        printf ("\n\nComparação de cartas (Atributo: pontos turísticos):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\n", nome1, pontos1, nome2, pontos2);
        if (pontos1==pontos2){

            resultado1= 0;
        }
        else{
        resultado1 = pontos1 > pontos2 ? 1 : 2;
        }
        soma1 = pontos1;
        soma2 = pontos2;

        break;

        //Área
        
        case 3:

        printf ("\n\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\n", nome1, area1, nome2, area2);
        if (area1==area2){

            resultado1= 0;
        }
        else{
        resultado1 = area1 > area2 ? 1 : 2;
        }
        soma1 = area1;
        soma2 = area2;

        break;

        //Pib
        
        case 4:

        printf ("\n\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\n", nome1, pib1, nome2, pib2);
        if (pib1==pib2){

            resultado1= 0;
        }
        else{
        resultado1 = pib1 > pib2 ? 1 : 2;
        }
        soma1 = pib1;
        soma2 = pib2;

        break;

        //Densidade demográfica

        case 5:

        printf ("\n\nComparação de cartas (Atributo: densidade demográfica):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\n", nome1, dens1, nome2, dens2);
        if (dens1==dens2){

            resultado1= 0;
        }
        else{
        resultado1 = dens1 < dens2 ? 1 : 2;
        }
        soma1 = dens1;
        soma2 = dens2;

        break;

        default:

        printf ("Opção inválida!");
        
        break;

    }

    if (resultado1 == 1)
    {
        printf ("Carta 1 (%s) venceu!\n\n", nome1);
    }
    else if (resultado1 == 2){
        printf ("Carta 2 (%s) venceu!\n\n", nome2);
    }
    else{
        printf("Empate!");
    }
    
    
    switch (atributo2) {
        
        //População

        case 1:
        
        printf ("\n\nComparação de cartas (Atributo: População):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\n",nome1, pop1, nome2, pop2);  
        if (pop1==pop2){

            resultado1= 0;
        }
        else{
        resultado2 = pop1 > pop2 ? 1 : 2;
        }
        if ((soma1 + pop1) == (soma2 + pop2)){
            resultado3= 0;
        }
        else{
        resultado3 = (soma1 + pop1) > (soma2 + pop2) ? 1 : 2;
        }

        break;

        //Pontos turísticos

        case 2:
        
        printf ("\n\nComparação de cartas (Atributo: pontos turísticos):\n\nCarta 1 - %s: %d\nCarta 2 - %s: %d\n\n", nome1, pontos1, nome2, pontos2);
        if (pontos1==pontos2){

            resultado1= 0;
        }
        else{
        resultado2 = pontos1 > pontos2 ? 1 : 2;
        }
        if ((soma1 + pontos1) == (soma2 + pontos2)){
            resultado3= 0;
        }else{
        resultado3 = (soma1 + pontos1) > (soma2 + pontos2) ? 1 : 2;
        }

        break;

        //Área
        
        case 3:

        printf ("\n\nComparação de cartas (Atributo: Área):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\n", nome1, area1, nome2, area2);
        if (area1==area2){

            resultado1= 0;
        }
        else{
        resultado2 = area1 > area2 ? 1 : 2;
        }
        if ((soma1 + area1) == (soma2 + area2)){
            resultado3= 0;
        }
        else{
        resultado3 = (soma1 + area1) > (soma2 + area2) ? 1 : 2;
        }

        break;

        //Pib
        
        case 4:

        printf ("\n\nComparação de cartas (Atributo: PIB):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\n", nome1, pib1, nome2, pib2);
        if (pib1==pib2){

            resultado1= 0;
        }
        else{
        resultado2 = pib1 > pib2 ? 1 : 2;
        }
        if ((soma1 + pib1) == (soma2 + pib2)){
            resultado3= 0;
        }else{
        resultado3 = (soma1 + pib1) > (soma2 + pib2) ? 1 : 2;
        }
        break;

        //Densidade demográfica

        case 5:

        printf ("\n\nComparação de cartas (Atributo: densidade demográfica):\n\nCarta 1 - %s: %.2f\nCarta 2 - %s: %.2f\n\n", nome1, dens1, nome2, dens2);
        if (dens1==dens2){

            resultado1= 0;
        }
        else{
        resultado2 = dens1 < dens2 ? 1 : 2;
        }
        if ((soma1 + dens1) == (soma2 + dens2)){
            resultado3= 0;
        }else{
        resultado3 = (soma1 + dens1) > (soma2 + dens2) ? 1 : 2;
        }

        break;

        default:

        printf ("Opção inválida!");
        
        break;
    }
    if (resultado2 == 1)
    {
        printf ("Carta 1 (%s) venceu!\n\n", nome1);
    }
    else if (resultado2 == 2){
        printf ("Carta 2 (%s) venceu!\n\n", nome2);
    }
    else{
        printf("Empate!\n\n");
    }
    
    printf ("\n***SOMA DOS ATRIBUTOS***\n\n");
    
    if (resultado3 == 1)
    {
        printf ("Carta 1 (%s) venceu!\n\n", nome1);
    }
    else if (resultado3 == 2){
        printf ("Carta 2 (%s) venceu!\n\n", nome2);
    }
    else{
        printf("Empate!\n\n");
    }

    }
    return 0;
}