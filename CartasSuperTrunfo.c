#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

//O numeral ao final de cada variavel representa a qual carta ela se define 

    int populacao_1, turismo_1, populacao_2, turismo_2, comparacao_1, comparacao_2;
    float area_1, pib_1, area_2, pib_2, densidade1, densidade2, capta1, capta2, poder1, poder2;
    char estado_1[3], carta_1[5], cidade_1[40], estado_2[3], carta_2[5], cidade_2[40],final;
    float status_1, status_2,status_3, status_4, resultado_1, resultado_2;
    //Variavel de resultados

    int area, pib, populacao, turismo, densidade, capta, poder, resultado;

    //Inicio do jogo

    printf("Bem Vindo ao Super Trunfo \n");
    printf("Comece criando sua primeira carta\n");
  
    //Área de criação da carta 1
  
    printf("Cadastre uma letra de A a H em referencia ao estado: \n");
    scanf(" %2[^\n]", &estado_1);

    printf("Codigo da carta deve conter letra do estado e um numeral de 01 a 04: \n");
    scanf(" %4[^\n]", carta_1);

    printf("Nome da Cidade: \n");
   scanf(" %[^\n]", &cidade_1);

    printf("População total da cidade: \n");
    scanf("%d", &populacao_1);

    printf("Área total em Km² da cidade: \n");
    scanf("%f", &area_1);

    printf("PIB da cidade: \n");
    scanf("%f", &pib_1);

    printf("Numero total de Pontos turisticos da cidade: \n");
    scanf("%d", &turismo_1);

    getchar();

    //Área de criação da carta 2

    printf("Parabens sua primeira carta foi criada \n");
    printf("Vamos para a criação da sua segunda carta \n");

    printf("Cadastre uma letra de A a H em referencia ao estado: \n");
    scanf(" %2[^\n]", &estado_2);

    printf("Codigo da carta deve conter letra do estado e um numeral de 01 a 04: \n");
    scanf(" %4[^\n]", carta_2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", &cidade_2);

    printf("População total da cidade: \n");
    scanf("%d", &populacao_2);

    printf("Área total em Km² da cidade: \n");
    scanf("%f", &area_2);

    printf("PIB da cidade: \n");
    scanf("%f", &pib_2);

    printf("Numero total de Pontos turisticos da cidade: \n");
    scanf("%d", &turismo_2);

    getchar();

    //Área do calculo da densidade populacional população dividos por area
   
    densidade1 = populacao_1 / area_1;

    densidade2 = populacao_2 / area_2;

    //Área do calculo do PIB per capta, PIB divido pela população

    capta1 = pib_1 / populacao_1;

    capta2 = pib_2 / populacao_2;

    //Area do calculo do super poder 

    poder1 = pib_1 + area_1 + populacao_1 + turismo_1 + capta1 + (1 / densidade1);

    poder2 = pib_2 + area_2 + populacao_2 + turismo_2 + capta2 + (1 / densidade2);

    //Área de amostragem das cartas criadas

    printf("Parabens suas duas cartas foram criadas.\n\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Código da carta: %s \n", carta_1);
    printf("Cidade: %s \n", cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f Km² \n", area_1);
    printf("PIB : %.2f \n", pib_1);
    printf("Pontos Turisticos: %d \n", turismo_1);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade1);
    printf("PIB Percapita: %.2f reais\n", capta1);
    printf("Super Poder: %.2f \n\n", poder1);

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Código da carta: %s \n", carta_2);
    printf("Cidade: %s \n", cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f Km²\n", area_2);
    printf("PIB : %.2f \n", pib_2);
    printf("Pontos Turisticos: %d \n", turismo_2);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade2);
    printf("PIB Percapita: %.2f reais\n", capta2);
    printf("Super Poder: %.2f \n\n", poder2);

    //calculo de resultado de vencedores
    
    populacao = populacao_1 > populacao_2;
    area = area_1 > area_2;
    pib = pib_1 > pib_2;
    turismo = turismo_1 > turismo_2;
    densidade = densidade1 > densidade2;
    capta = capta1 > capta2;
    poder = poder1 > poder2;

//menu de seleção de atributo a ser comparado

    printf("Selecione o atributo ao qual será feita a comparação \n");
    printf("1 - Nome do Pais \n");
    printf("2 - População \n");
    printf("3 - Área \n");
    printf("4 - Pib \n");
    printf("5 - Pontos Turisticos \n");
    printf("6 - Densidade Demográfica \n");
    scanf("%d", &comparacao_1);

    switch (comparacao_1)
    {
    case 1 : 
    printf("Selecionado comparação geral");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Código da carta: %s \n", carta_1);
    printf("Cidade: %s \n", cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f Km² \n", area_1);
    printf("PIB : %.2f \n", pib_1);
    printf("Pontos Turisticos: %d \n", turismo_1);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade1);
    printf("PIB Percapita: %.2f reais\n", capta1);
    printf("Super Poder: %.2f \n\n", poder1);
        break;
    case 2 :
        printf("Selecione o segundo atributo ao qual será feita a comparação \n");
    printf("1̶ ̶-̶ ̶N̶o̶m̶e̶ ̶d̶o̶ ̶P̶a̶i̶s̶ ̶ \n");
    printf("2̶ ̶-̶ ̶P̶o̶p̶u̶l̶a̶ç̶ã̶o̶ \n");
    printf("3 - Área \n");
    printf("4 - Pib \n");
    printf("5 - Pontos Turisticos \n");
    printf("6 - Densidade Demográfica \n");
    scanf("%d", &comparacao_2);

        break;
    case 3 :
            printf("Selecione o segundo atributo ao qual será feita a comparação \n");
    printf("1̶ ̶-̶ ̶N̶o̶m̶e̶ ̶d̶o̶ ̶P̶a̶i̶s̶ ̶ \n");
    printf("2 - População \n");
    printf("3̶ ̶-̶ ̶Á̶r̶e̶a̶ ̶ \n");
    printf("4 - Pib \n");
    printf("5 - Pontos Turisticos \n");
    printf("6 - Densidade Demográfica \n");
    scanf("%d", &comparacao_2);

        break;
        case 4 :
                printf("Selecione o segundo atributo ao qual será feita a comparação \n");
    printf("1̶ ̶-̶ ̶N̶o̶m̶e̶ ̶d̶o̶ ̶P̶a̶i̶s̶ ̶ \n");
    printf("2 - População \n");
    printf("3 - Área \n");
    printf("4̶ ̶-̶ ̶P̶i̶b̶\n");
    printf("5 - Pontos Turisticos \n");
    printf("6 - Densidade Demográfica \n");
    scanf("%d", &comparacao_2);

        break;
        case 5 :
                printf("Selecione o segundo atributo ao qual será feita a comparação \n");
    printf("1̶ ̶-̶ ̶N̶o̶m̶e̶ ̶d̶o̶ ̶P̶a̶i̶s̶ ̶ \n");
    printf("2 - População \n");
    printf("3 - Área \n");
    printf("4 - Pib \n");
    printf("5̶ ̶-̶ ̶P̶o̶n̶t̶o̶s̶ ̶T̶u̶r̶i̶s̶t̶i̶c̶o̶s̶ ̶ \n");
    printf("6 - Densidade Demográfica \n");
    scanf("%d", &comparacao_2);

        break;
        case 6 :
        printf("Selecione o segundo atributo ao qual será feita a comparação \n");
    printf("1̶ ̶-̶ ̶N̶o̶m̶e̶ ̶d̶o̶ ̶P̶a̶i̶s̶ ̶ \n");
    printf("2 - População \n");
    printf("3 - Área \n");
    printf("4 - Pib \n");
    printf("5 - Pontos Turisticos \n");
    printf("6̶ ̶-̶ ̶D̶e̶n̶s̶i̶d̶a̶d̶e̶ ̶D̶e̶m̶o̶g̶r̶á̶f̶i̶c̶a̶ ̶ \n");
    scanf("%d", &comparacao_2);

        break;
    default:
        break;
    }

//switch de comparação de cada atributo

    switch (comparacao_1)
    {
    case 1 :
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Código da carta: %s \n", carta_2);
    printf("Cidade: %s \n", cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f Km² \n", area_2);
    printf("PIB : %.2f \n", pib_2);
    printf("Pontos Turisticos: %d \n", turismo_2);
    printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
    printf("PIB Percapita: %.2f reais\n", capta2);
    printf("Super Poder: %.2f \n\n", poder2);
        printf ("Resultado Final da carta vencedora de atributos gerais \n");
    resultado = area + pib + populacao + turismo + densidade + capta + poder;
            if( resultado >= 4){
        printf(" Carta 1 Venceu \n");
    } else{
        printf("Carta 2 Venceu \n");
    }
        break;


    case 2 :
    printf("Atributo População: %s - %d Vs %d - %s \n", cidade_1, populacao_1, populacao_2, cidade_2);
    status_1 = populacao_1;
    status_2 = populacao_2;
    break;

        case 3 :
    printf("Atributo Area: %s - %.2f Vs %.2f - %s \n", cidade_1, area_1, area_2, cidade_2);
    status_1 = area_1;
    status_2 = area_2;
    break;

        case 4 :
    printf("Atributo PIB: %s - %.2f Vs %.2f - %s \n", cidade_1, pib_1, pib_2, cidade_2);
    status_1 = pib_1;
    status_2 = pib_2;
    break;

        case 5 :
    printf("Atributo Pontos Turisticos: %s - %d Vs %d - %s \n", cidade_1, turismo_1, turismo_2, cidade_2);
    status_1 = turismo_1;
    status_2 = turismo_2;
    break;

    case 6 : 
    printf("Atributo Densidade Demografica: %s - %.2f Vs %.2f - %s \n", cidade_1, densidade1, densidade2, cidade_2);
    status_1 = densidade1;
    status_2 = densidade2;

    break;
    
    default:
    printf("Opção Invalida !");
        break;
    }
    switch (comparacao_2)
    {
    case 2 :
    printf("Atributo População: %s - %d Vs %d - %s \n", cidade_1, populacao_1, populacao_2, cidade_2);
    status_3 = populacao_1;
    status_4 = populacao_2;
    break;

        case 3 :
    printf("Atributo Area: %s - %.2f Vs %.2f - %s \n", cidade_1, area_1, area_2, cidade_2);
    status_3 = area_1;
    status_4 = area_2;
    break;

        case 4 :
    printf("Atributo PIB: %s - %.2f Vs %.2f - %s \n", cidade_1, pib_1, pib_2, cidade_2);
    status_3 = pib_1;
    status_4 = pib_2;
    break;

        case 5 :
    printf("Atributo Pontos Turisticos: %s - %d Vs %d - %s \n", cidade_1, turismo_1, turismo_2, cidade_2);
    status_3 = turismo_1;
    status_4 = turismo_2;
    break;

    case 6 : 
    printf("Atributo Densidade Demografica: %s - %.2f Vs %.2f - %s \n", cidade_1, densidade1, densidade2, cidade_2);
    status_3 = densidade1;
    status_4 = densidade2;

    break;
    
    default:
    printf("Opção Invalida !");
        break;
}
//soma dos resultado das comparações

resultado_1 = status_1 + status_3;
resultado_2 = status_2 + status_4;

//resultado da comparação multipla
    printf("Soma dos atributos por carta : %s - %.2f vs %.2f - %s \n", cidade_1, resultado_1, resultado_2, cidade_2);

    if (resultado_1 > resultado_2)
    {
    printf("### A carta 1 Venceu ### \n");
    }
    else if (resultado_1 < resultado_2)
    {
    printf("### A carta e Venceu ### \n");
    }
    else {
        printf("### Empatou ### \n");
    }
    
    getchar();

return 0;


}