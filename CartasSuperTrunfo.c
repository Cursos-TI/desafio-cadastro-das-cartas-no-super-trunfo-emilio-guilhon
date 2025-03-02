#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    // Declaração das variáveis(1 para primeira carta, 2 para segunda carta)
    int pontosturisticos1 = 0, pontosturisticos2 = 0, escolhaatributo = 0;
    unsigned long int populacao1 = 0, populacao2 = 0;
    float area1 = 0, area2 = 0, PIB1 = 0, PIB2 = 0, densidadepop1 = 0, densidadepop2 = 0, PIBpercapita1 = 0, PIBpercapita2 = 0, superpoder1 = 0, superpoder2 = 0;
    char estado1, estado2, codigo1[5], codigo2[5], nome1[20], nome2[20];
    
    // Entrada dos dados da carta 1, printf para exibir as mensagens para o usuário, scanf para receber os dados
    printf("Digite o estado da carta 1: \n");
    scanf(" %c",&estado1);

    printf("Digite o código da carta 1: \n");
    scanf(" %s",codigo1);
    
    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s",nome1);
    
    printf("Digite a população da carta 1: \n");
    scanf(" %lu",&populacao1);

    printf("Digite a área da carta 1: \n");
    scanf(" %f",&area1);

    printf("Digite o PIB da carta 1: \n");
    scanf(" %f",&PIB1);
    
    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf(" %d",&pontosturisticos1);

    // Cálculo das variáveis com operadores matemáticos da carta 1
    densidadepop1 = (float) (populacao1)/area1;
    PIBpercapita1 = (float) (PIB1)/populacao1;

    // Cálculo do super poder da carta 1
    superpoder1 = (float) populacao1 + area1 + PIB1 + PIBpercapita1 + (1/densidadepop1) + pontosturisticos1;

    // Exibição de dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigo1 );
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per capita: %.2f reais\n", PIBpercapita1);
    printf("Super Poder: %.2f \n\n", superpoder1);

    // Entrada dos dados da carta 2
    printf("Digite o estado da carta 2: \n");
    scanf(" %c",&estado2);

    printf("Digite o código da carta 2: \n");
    scanf(" %s",codigo2);
    
    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s",nome2);
    
    printf("Digite a população da carta 2: \n");
    scanf(" %lu",&populacao2);

    printf("Digite a área da carta 2: \n");
    scanf(" %f",&area2);

    printf("Digite o PIB da carta 2: \n");
    scanf(" %f",&PIB2);
    
    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf(" %d",&pontosturisticos2);

    // Cálculo das variáveis com operadores matemáticos da carta 2
    densidadepop2 = (float) (populacao2)/area2;
    PIBpercapita2 = (float) (PIB2)/populacao2;

    // Cálculo do super poder da carta 2
    superpoder2 = (float) populacao2 + area2 + PIB2 + PIBpercapita2 + (1/densidadepop2) + pontosturisticos2;
    
    // Exibição de dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigo2 );
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder: %.2f \n\n", superpoder2);

    //Exibição do menu de escolha de comparação
    printf("Escolha uma opção para comparar as cartas: \n");
    printf("1.Nome do país \n");
    printf("2.População \n");
    printf("3.Área \n");
    printf("4.PIB \n");
    printf("5.Pontos Turísticos \n");
    printf("6.Densidade Demográfica \n");
    //Recebendo a variável de escolha de atributo para comparação
    scanf(" %d",&escolhaatributo);

    //Decisão de qual case será escolhido para prosseguir com a comparação das cartas
    switch (escolhaatributo) {
        case 1:
            printf("Atributo escolhido para comparação: Nome do país\n");
            printf("Nome das cartas(Carta 1|Carta 2): %s | %s \n", nome1, nome2);
            printf("Atributo apenas para visualização - sem vencedores\n");
            break;

        case 2:
            printf("Atributo escolhido para comparação entre as cidades %s e %s: População\n", nome1, nome2);
            printf("Valor da população(Carta1|Carta2): %lu | %lu \n", populacao1, populacao2);
            if(populacao1 > populacao2){
                printf("A cidade %s venceu(carta 1)\n",nome1);
            } else if (populacao2 > populacao1){
                printf("A cidade %s venceu(carta 2)\n",nome2);
            } else{
                printf("Empate!!!\n");
            }
            break;
        
        case 3:
            printf("Atributo escolhido para comparação entre as cidades %s e %s: Área\n", nome1, nome2);
            printf("Valor da Área(Carta1|Carta2): %.2f | %.2f \n", area1, area2);
            if(area1 > area2){
                printf("A cidade %s venceu(carta 1)\n",nome1);
            } else if (area2 > area1){
                printf("A cidade %s venceu(carta 2)\n",nome2);
            } else{
                printf("Empate!!!\n");
            }
            break;
        
        case 4:
            printf("Atributo escolhido para comparação entre as cidades %s e %s: PIB\n", nome1, nome2);
            printf("Valor do PIB(Carta1|Carta2): %.2f | %.2f \n", PIB1, PIB2);
            if(PIB1 > PIB2){
                printf("A cidade %s venceu(carta 1)\n",nome1);
            } else if (PIB2 > PIB1){
                printf("A cidade %s venceu(carta 2)\n",nome2);
            } else{
                printf("Empate!!!\n");
            }
            break;
        
        case 5:
            printf("Atributo escolhido para comparação entre as cidades %s e %s: Número de pontos turísticos\n", nome1, nome2);
            printf("Valor dos pontos turísticos(Carta1|Carta2): %d | %d \n", pontosturisticos1, pontosturisticos2);
            if(pontosturisticos1 > pontosturisticos2){
                printf("A cidade %s venceu(carta 1)\n",nome1);
            } else if (pontosturisticos2 > pontosturisticos1){
                printf("A cidade %s venceu(carta 2)\n",nome2);
            } else{
                printf("Empate!!!\n");
            }
            break;
        
        case 6:
            printf("Atributo escolhido para comparação entre as cidades %s e %s: Densidade demográfica\n", nome1, nome2);
            printf("Valor de densidade populacional(Carta1|Carta2): %.2f | %.2f \n", densidadepop1, densidadepop2);
            if(densidadepop2 > densidadepop1){
                printf("A cidade %s venceu(carta 1)\n",nome1);
            } else if (densidadepop1 > densidadepop2){
                printf("A cidade %s venceu(carta 2)\n",nome2);
            } else{
                printf("Empate!!!\n");
            }
            break;
        default: 
            printf("Opção inexistente!\n");
    }

    return 0;

}
