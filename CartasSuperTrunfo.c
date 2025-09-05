#include <stdio.h>

int main(){

//O numeral ao final de cada variavel representa a qual carta ela se define 

    int populacao_1, turismo_1, populacao_2, turismo_2;
    float area_1, pib_1, area_2, pib_2;
    char estado_1[3], carta_1[5], cidade_1[40], estado_2[3], carta_2[5], cidade_2[40];


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

    //Área de amostragem das cartas criadas

    printf("Parabens suas duas cartas foram criadas.\n\n");
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Código da carta: %s \n", carta_1);
    printf("Cidade: %s \n", cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f \n", area_1);
    printf("PIB : %.2f \n", pib_1);
    printf("Pontos Turisticos: %d \n\n", turismo_1);
    
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Código da carta: %s \n", carta_2);
    printf("Cidade: %s \n", cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f \n", area_2);
    printf("PIB : %.2f \n", pib_2);
    printf("Pontos Turisticos: %d \n", turismo_2);
    

return 0;


}