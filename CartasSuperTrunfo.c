#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    // Declaração das variáveis(1 para primeira carta, 2 para segunda carta)
   int populacao1 = 0, populacao2 = 0, pontosturisticos1 = 0, pontosturisticos2 = 0;
   float area1 = 0, area2 = 0, PIB1 = 0, PIB2 = 0, DensidadePop1 = 0, DensidadePop2 = 0, PIBpercapita1 = 0, PIBpercapita2 = 0;
   char estado1, estado2, codigo1[5], codigo2[5], nome1[20], nome2[20];
    
    // Entrada dos dados da carta 1, printf para exibir as mensagens para o usuário, scanf para receber os dados
    printf("Digite o estado da carta 1: \n");
    scanf(" %c",&estado1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s",codigo1);
    
    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s",nome1);
    
    printf("Digite a população da carta 1: \n");
    scanf(" %d",&populacao1);

    printf("Digite a área da carta 1: \n");
    scanf(" %f",&area1);

    printf("Digite o PIB da carta 1: \n");
    scanf(" %f",&PIB1);
    
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf(" %d",&pontosturisticos1);

    //Cálculo das variáveis com operadores matemáticos da carta 1
    DensidadePop1 = (float) (populacao1)/area1;
    PIBpercapita1 = (float) (PIB1)/populacao1;
    
    // Exibição de dados da carta 1
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigo1 );
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f \n", DensidadePop1);
    printf("PIB per capita: %.2f \n", PIBpercapita1);

    // Entrada dos dados da carta 2
    printf("Digite o estado da carta 2: \n");
    scanf(" %c",&estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s",codigo2);
    
    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s",nome2);
    
    printf("Digite a população da carta 2: \n");
    scanf(" %d",&populacao2);

    printf("Digite a área da carta 2: \n");
    scanf(" %f",&area2);

    printf("Digite o PIB da carta 2: \n");
    scanf(" %f",&PIB2);
    
    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf(" %d",&pontosturisticos2);

    //Cálculo das variáveis com operadores matemáticos da carta 2
    DensidadePop2 = (float) (populacao2)/area2;
    PIBpercapita2 = (float) (PIB2)/populacao2;
    
    // Exibição de dados da carta 2
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigo2 );
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f \n", DensidadePop2);
    printf("PIB per capita: %.2f \n", PIBpercapita2);

    return 0;
}
