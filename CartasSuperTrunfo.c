#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gustavo

int main() {
    
    //cadastrando carta 1
    char Carta1;
    char Estado1[20]; 
    char Código1[10];
    char Cidade1[50];
    int População1;
    float area1;
    float pib1;
    int Número;

    //cadastrando carta 2
    char Carta2;
    char Estado2[20]; 
    char Código2[10];
    char Cidade2[50];
    int População2;
    float area2;
    float pib2;
    int Número2;
    
    //Cadastro de Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = 0;
    printf("Código: ");
    scanf("%s", Código1);
    printf("Nome da cidade: ");
    getchar();
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = 0;
    printf("População: ");
    scanf("%d", &População1);
    printf("Àrea em km²: ");
    scanf("%f" , &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número De Pontos Turisticos: ");
    scanf("%d" , &Número);

    printf(" \n");

    //Cadastro de Carta 2
    printf("Carta 2:\n");
    printf("Estado: ");
    getchar();
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = 0;
    printf("Código: ");
    scanf("%s", Código2);
    printf("Nome da cidade: ");
    getchar();
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = 0;
    printf("População: ");
    scanf("%d", &População2);
    printf("Àrea em km²: ");
    scanf("%f" , &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número De Pontos Turisticos: ");
    scanf("%d" , &Número2);
    
    //Resultado Das Cartas
    printf("\n==== Carta 1 resultado =====\n");
    printf("Estado: %s\n" , Estado1);
    printf("Código: %s\n" , Código1);
    printf("Nome da cidade: %s\n" , Cidade1);
    printf("População: %d\n" , População1);
    printf("àrea: %.2fkm²\n" , area1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Número De Pontos Turisticos: %d\n" , Número);

    printf("\n==== Carta 2 resultado ====\n");
    printf("Estado: %s\n" , Estado2);
    printf("Código: %s\n" , Código2);
    printf("Nome da cidade: %s\n" , Cidade2);
    printf("População: %d\n" , População2);
    printf("àrea: %.2fkm²\n" , area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número De Pontos Turisticos: %d\n" , Número2);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
}