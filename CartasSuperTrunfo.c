#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Gustavo

int main() {
    
    char Carta;
    char Estado = 'A'; 
    char Estados = 'B'; 
    char Código[10] = "A01";
    char NomeDaCidade[50] = "Pernambuco";
    int População = 9058931;
    float Àrea = 983.12;
    float pib = 288.67;
    int Número = 13;

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Código);
    printf("Nome da cidade: %s\n" , NomeDaCidade);
    printf("População %d\n", População);
    printf("Àrea: %.2fkm²\n", Àrea);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos Turisticos: %d\n", Número);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}



