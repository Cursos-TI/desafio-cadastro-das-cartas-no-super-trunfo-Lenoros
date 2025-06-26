#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Declaração das variáveis para armazenar os dados da carta 1:
    char estado_0;
    char codigo_0[2];
    char cidade_0[30];
    int populacao_0;
    float area_0;
    float pib_0;
    int pontosTuristicos_0;

    // Declaração das variáveis para armazenar os dados da carta 1:
    char estado_1;
    char codigo_1[2];
    char cidade_1[30];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontosTuristicos_1;

    //Início da solicitação de dados:

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Apresentação do Sistema para o usuário e solicitação de dados da primeira carta:
    printf("Cadastro de Cartas - Cidades\n");
    printf("Seja bem-vindo ao sistema de cadastro de cartas do Super Trunfo - Países!\n");
    printf("Por favor, insira as informações da carta 1 conforme as orientações abaixo:\n");

    printf("Insira o código de estado da carta 1 [A-H]:\n");
    scanf(" %c", &estado_0);

    printf("Insira o código da cidade da carta 1 (2 caracteres):\n");
    scanf("%2s", codigo_0);

    printf("Insira o nome da cidade da carta 1 (até 30 caracteres):\n");
    scanf(" %[^\n]", cidade_0);

    printf("Insira a população da cidade da carta 1:\n");
    scanf("%d", &populacao_0);

    printf("Insira a área da cidade da carta 1 (em km²):\n");
    scanf("%f", &area_0);

    printf("Insira o PIB da cidade da carta 1 (em milhões):\n");
    scanf("%f", &pib_0);

    printf("Insira o número de pontos turísticos da cidade da carta 1:\n");
    scanf("%d", &pontosTuristicos_0);

    // Confirmação da Inserção de dados da primeira carta e solicitação de dados da segunda carta:

    printf("\nCarta 1 cadastrada com sucesso!\n");
    printf("Agora, por favor, insira as informações da carta 2:\n");

    printf("Insira o código de estado da carta 2 [A-H]:\n");
    scanf(" %c", &estado_1);

    printf("Insira o código da cidade da carta 2 (2 caracteres):\n");
    scanf("%2s", codigo_1);

    printf("Insira o nome da cidade da carta 2 (até 30 caracteres):\n");
    scanf(" %[^\n]", cidade_1);

    printf("Insira a população da cidade da carta 2:\n");
    scanf("%d", &populacao_1);

    printf("Insira a área da cidade da carta 2 (em km²):\n");
    scanf("%f", &area_1);

    printf("Insira o PIB da cidade da carta 2 (em milhões):\n");
    scanf("%f", &pib_1);

    printf("Insira o número de pontos turísticos da cidade da carta 2:\n");
    scanf("%d", &pontosTuristicos_1);
  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Finalização do cadastro e exibição dos dados da carta 1:
    printf("\nCarta 2 cadastrada com sucesso!\n");
    printf("\nCadastro das cartas concluído.\n");
    printf("\nCartas cadastradas:\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_0);
    printf("Código: %s\n", codigo_0);
    printf("Cidade: %s\n", cidade_0);
    printf("População: %d\n", populacao_0);
    printf("Área: %.2f km²\n", area_0);
    printf("PIB: %.2f milhões\n", pib_0);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_0);

    // Exibição dos dados da carta 2:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f milhões\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos_1);

    printf("\nObrigado por utilizar o sistema de cadastro de cartas do Super Trunfo - Países!\n");

    return 0;
}
