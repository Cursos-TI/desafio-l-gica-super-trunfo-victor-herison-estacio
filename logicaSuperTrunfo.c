#include <stdio.h>



int main() {
    // Variáveis para a primeira carta
    int populacao1, pontos_turisticos1;
    float area1, PIB1;
    char cidade1[20], codigo1[3], estado1;
   
    // Variáveis para a segunda carta
    int populacao2, pontos_turisticos2;
    float area2, PIB2;
    char cidade2[20], codigo2[3], estado2;

    // calculos de atributos das cartas
    float pib_per_capita1, densidade_populacional1, pib_per_capita2, densidade_populacional2;
    float poder_cidade1, poder_cidade2;

    //escolha para o menu
    int escolha1, escolha2;



    // Cadastro da primeira carta
    printf("------ Cartas Super Trunfo ------\n");
    printf("------! Cadastrar primeira carta !------\n");

    printf("\nInsira o nome do estado (A-H): ");
    scanf(" %c", &estado1); // Lê o estado (um caractere)

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1); // Lê o nome da cidade

    printf("Insira o codigo da cidade (2 dígitos): ");
    scanf("%s", codigo1); // Lê o código da cidade

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1); // Lê a população

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area1); // Lê a área

    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB1); // Lê o PIB

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos1); // Lê os pontos turísticos

    // calculo de densidade e pib per capita da carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (PIB1 * 1000000000) / (float) populacao1;

    // calculo do poder da carta 1 --> desafio mestre
    poder_cidade1 = PIB1 + (float)populacao1 + area1 + 1/densidade_populacional1 + pontos_turisticos1 + pib_per_capita1;


    // Cadastro da segunda carta
    printf("\n------! Cadastrar segunda carta !------\n");

    printf("Insira o nome do estado (A-H): ");
    scanf(" %c", &estado2); // Lê o estado (um caractere)

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2); // Lê o nome da cidade

    printf("Insira o codigo da cidade (2 dígitos): ");
    scanf("%s", codigo2); // Lê o código da cidade

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2); // Lê a população

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area2); // Lê a área

    printf("Insira o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB2); // Lê o PIB

    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos2); // Lê os pontos turísticos

    // calculo de densidade e pib per capita da carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (PIB2 * 1000000000) / (float) populacao2;



    // calculo do poder da carta 2 --> desafio mestre
    poder_cidade2 = PIB2 + (float)populacao2 + area2 + 1/densidade_populacional2 + pontos_turisticos2 + pib_per_capita2;



    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %c-%s\n", estado1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    //Parte do desafio nivel aventureiro
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);

    // desafio mestre
    printf("Poder carta 1: %.2f \n\n", poder_cidade1);




    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %c-%s\n", estado2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    //Parte do desafio nivel aventureiro
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);

    // nivel mestre
    printf("Poder carta 2: %.2f \n\n", poder_cidade2);

    // tema 2 desafio aventureiro: switch case para menu interativo
    //menu
    printf("Qual o primeiro atributo deve ser usado para fins de comparação entre as cartas?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha um numero conforme a lista mostrada acima (1 - 5): ");
    scanf("%d", &escolha1);


    // menu dinamico => so aparecera o atributo para escolher caso ele não o tenha escolhido antes
    printf("\n\n\nQual o segundo atributo deve ser usado para fins de comparação entre as cartas?\n");
    if(escolha1 != 1){
        printf("1. População\n");
    }if(escolha1 != 2){
        printf("2. Área\n");
    }if(escolha1 != 3){
        printf("3. PIB\n");
    }if( escolha1 != 4){
        printf("4. Número de pontos turísticos\n");
    }if (escolha1 != 5){
        printf("5. Densidade demográfica\n");
    }

    // lendo segunda escolha
    scanf("%d", &escolha2);


    float soma_dos_atributos1, soma_dos_atributos2 = 0;
    // vendo se o usuario escolheu a mesmo atributo para a comparação
    if (escolha1 == escolha2)
    {
        printf("Você não pode repetir os atributos de comparação\n");
        printf("Exemplo: 1. população e 1. população nas duas escolhas\n");
    }
    else
    {
        printf("\n\n <===== RESULTADO =====> \n\n");
        printf("Carta 1 estado: %c.\n", estado1);
        printf("Carta 2 estado: %c.\n", estado2);
        printf("O primeiro atributo escolhido foi ");

        //comparando primeiro atributo escolhido
        switch (escolha1)
        {
        case 1:
    
            printf("população: \n");
            printf("Carta 1 população: %d \n", populacao1);
            printf("Carta 2 população: %d \n", populacao2);
            //comparação tenaria
            populacao1 > populacao2 ? printf("Carta 1 venceu.\n") : populacao1 > populacao2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            

            //salvando os atributos para somar
            soma_dos_atributos1 = populacao1;
            soma_dos_atributos2 = populacao2;
            
            break;

        case 2:

            printf("área: \n");
            printf("Carta 1 área: %.2f \n", area1);
            printf("Carta 2 área: %.2f \n", area2);
            area1 > area2 ? printf("Carta 1 venceu.\n") : area1 < area2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //salvando os atributos para somar
            soma_dos_atributos1 = area1;
            soma_dos_atributos2 = area2;
            break;

        case 3:

            printf("PIB: \n");
            printf("Carta 1 PIB: %.2f \n", PIB1);
            printf("Carta 2 PIB: %.2f \n", PIB2);
            PIB1 > PIB2 ? printf("Carta 1 venceu.\n") : PIB1 < PIB2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //salvando os atributos para somar
            soma_dos_atributos1 = PIB1;
            soma_dos_atributos2 = PIB2;
            
            break;

        case 4:

            printf("número de pontos turísticos: \n");
            printf("Carta 1 número de pontos turísticos: %d \n", pontos_turisticos1);
            printf("Carta 2 número de pontos turísticos: %d \n", pontos_turisticos2);
            pontos_turisticos1 > pontos_turisticos2 ? printf("Carta 1 venceu.\n") : pontos_turisticos1 < pontos_turisticos2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //salvando os atributos para somar
            soma_dos_atributos1 = pontos_turisticos1;
            soma_dos_atributos2 = pontos_turisticos2;
            
            break;

        case 5:

            printf("densidade demografica.\n");
            printf("Carta 1 densidade demografica: %.2f hab/km²\n", densidade_populacional1);
            printf("Carta 2 densidade demografica: %.2f hab/km²\n", densidade_populacional2);
            densidade_populacional1 > densidade_populacional2 ? printf("Carta 2 venceu.\n") : densidade_populacional1 < densidade_populacional2 ? printf("Carta 1 venceu. \n") :  printf("As cartas empataram\n");
            //salvando os atributos para somar
            soma_dos_atributos1 -= densidade_populacional1;
            soma_dos_atributos2 -= densidade_populacional2;

            // -= por quer a densidade populacional é algo que quanto maior pior nesse jogo.
            
            break;
        
        default:
            printf("Essa opção não é valida! escolha um numero entre 1 e 5.");
            break;
        }



        printf("\n\nO segundo atibuto escolhido foi ");
        // comparando segundo atributo escolhido
        switch (escolha2)
        {
        case 1:
    
            printf("população: \n");
            printf("Carta 1 população: %d \n", populacao1);
            printf("Carta 2 população: %d \n", populacao2);
            //comparação tenaria
            populacao1 > populacao2 ? printf("A população da carta 1 é maior do que a população da carta 2. Carta 1 venceu.\n") : populacao1 > populacao2 ? printf("A população da carta 2 é maior do que a população da carta 1. Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //iterando sobre o valor ja salvo o valor do segundo atributo
            soma_dos_atributos1 += populacao1;
            soma_dos_atributos2 += populacao2;
            break;

        case 2:

            printf("área: \n");
            printf("Carta 1 área: %.2f \n", area1);
            printf("Carta 2 área: %.2f \n", area2);
            area1 > area2 ? printf("Carta 1 venceu.\n") : area1 < area2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //iterando sobre o valor ja salvo o valor do segundo atributo
            soma_dos_atributos1 += area1;
            soma_dos_atributos2 += area2;
            break;

        case 3:

            printf("PIB: \n");
            printf("Carta 1 PIB: %.2f \n", PIB1);
            printf("Carta 2 PIB: %.2f \n", PIB2);
            PIB1 > PIB2 ? printf("Carta 1 venceu.\n") : PIB1 < PIB2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //iterando sobre o valor ja salvo o valor do segundo atributo
            soma_dos_atributos1 += PIB1;
            soma_dos_atributos2 += PIB2;
            break;

        case 4:

            printf("número de pontos turísticos: \n");
            printf("Carta 1 número de pontos turísticos: %d \n", pontos_turisticos1);
            printf("Carta 2 número de pontos turísticos: %d \n", pontos_turisticos2);
            pontos_turisticos1 > pontos_turisticos2 ? printf("Carta 1 venceu.\n") : pontos_turisticos1 < pontos_turisticos2 ? printf("Carta 2 venceu. \n") :  printf("As cartas empataram\n");
            
            //iterando sobre o valor ja salvo o valor do segundo atributo
            soma_dos_atributos1 += pontos_turisticos1;
            soma_dos_atributos2 += pontos_turisticos2;
            break;

        case 5:

            printf("densidade demografica.\n");
            printf("Carta 1 densidade demografica: %.2f hab/km²\n", densidade_populacional1);
            printf("Carta 2 densidade demografica: %.2f hab/km²\n", densidade_populacional2);
            densidade_populacional1 > densidade_populacional2 ? printf("Carta 2 venceu.\n") : densidade_populacional1 < densidade_populacional2 ? printf("Carta 1 venceu. \n") :  printf("As cartas empataram\n");
            
            //iterando sobre o valor ja salvo o valor do segundo atributo
            soma_dos_atributos1 -= densidade_populacional1;
            soma_dos_atributos2 -= densidade_populacional2;
            break;
        
        default:
            printf("Essa opção não é valida! escolha um numero entre 1 e 5.");
            break;
        }
        //print do resultado dinamicamente
        soma_dos_atributos1 > soma_dos_atributos2 ? printf("\n\nCarta 1 venceu com a soma de %.2f sobre a soma de %.2f", soma_dos_atributos1, soma_dos_atributos2) : soma_dos_atributos1 < soma_dos_atributos2 ? printf("\n\nCarta 2 venceu com a soma de %.2f sobre a soma de %.2f", soma_dos_atributos2, soma_dos_atributos1) :  printf("\n\nAs cartas emparam! A soma foi igual a: %.2f", soma_dos_atributos1);

    }


   

    



    // comparando as cartas: tema 1
   
    // printf("População: Carta 1 venceu (%d) \n", populacao1 > populacao2);
    // printf("Área: Carta 1 venceu (%d) \n", area1 > area2);
    // printf("PIB: Carta 2 venceu (%d) \n", PIB2 > PIB1);
    // printf("Pontos turisticos: Carta 2 venceu (%d) \n", pontos_turisticos2 > pontos_turisticos1);
    // printf("Densidade poulacional: Carta 1 venceu (%d) \n", densidade_populacional1 < densidade_populacional2); // aqui eu estou considerando que quanto menor a quantidade populacional melhor
    // printf("PIB per capita: Carta 1 venceu (%d) \n", pib_per_capita1 > pib_per_capita2);
    // printf("Poder: Carta 2 venceu (%d) \n\n\n", poder_cidade2 > poder_cidade2);


    //comparando as cartas: tema 2
    //parte que vai ser mostrada de qualquer forma
    // printf("\n\nA medida de comparação foi o pib e ");


    // //condicionais if else para verificar se pib1 é maior q pib2
    // if (PIB1 > PIB2)
    // {
    //    printf("a carta 1 ganhou. \n");
    // }else
    // {
    //     printf("a carta 2 ganhou. \n");
    // }
    
    // //parte q vai ser mostrada de qualquer forma
    // printf("PIB carta 1: %.2f \n", PIB1);
    // printf("PIB carta 2: %.2f \n", PIB2);

    return 0;
}