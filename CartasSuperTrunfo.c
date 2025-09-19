#include <stdio.h>

int main(){

//O numeral ao final de cada variavel representa a qual carta ela se define 

    int populacao_1, turismo_1, populacao_2, turismo_2;
    float area_1, pib_1, area_2, pib_2, densidade1, densidade2, capta1, capta2, poder1, poder2;
    char estado_1[3], carta_1[5], cidade_1[40], estado_2[3], carta_2[5], cidade_2[40],final;
  
    //Variavel de resultados

    int area, pib, populacao, turismo, densidade, capta, poder, resultado;

    //Inicio

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

    printf("Para exibir o resultado pressione uma tecla e de enter \n");
    scanf("%c", &final);

    printf("Resultado do vencedor por atributos\n");

        if( populacao_1 > populacao_2){
        printf("População: Carta 1 Venceu \n");
    } else{
        printf("População: Carta 2 Venceu \n");
    }
        if( area_1 > area_2){
        printf("Area: Carta 1 Venceu \n");
    } else{
        printf("Area: Carta 2 Venceu \n");
    }
        if( pib_1 > pib_2){
        printf("Pib: Carta 1 Venceu \n");
    } else{
        printf("Pib: Carta 2 Venceu \n");
    }
        if( turismo_1 > turismo_2){
        printf("Turismo: Carta 1 Venceu \n");
    } else{
        printf("Turismo: Carta 2 Venceu \n");
    }
            if( densidade1 > densidade2){
        printf("Densidade: Carta 1 Venceu \n");
    } else{
        printf("Densidade: Carta 2 Venceu \n");
    }
            if( capta1 > capta2){
        printf("PIB Percapta: Carta 1 Venceu \n");
    } else{
        printf("PIB Percapta: Carta 2 Venceu \n");
    }
            if( poder1 > poder2){
        printf("Super Poder: Carta 1 Venceu \n");
    } else{
        printf("Super Poder: Carta 2 Venceu \n\n");
    }

    //Resultado Final
    printf ("Resultado Final da carta vencedora de atributos gerais \n");
    resultado = area + pib + populacao + turismo + densidade + capta + poder;
        if( resultado >= 4){
        printf(" Carta 1 Venceu \n");
    } else{
        printf("Carta 2 Venceu \n");
    }
    getchar();

return 0;


}