#include <stdio.h>
#include <string.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para representar uma carta
typedef struct {
    char codigo[4];
    char nome[50];
} Carta;

void cadastrarCartas(Carta cartas[NUM_ESTADOS][NUM_CIDADES]) {
    char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            // Gerar o código da carta
            sprintf(cartas[i][j].codigo, "%c%02d", estados[i], j + 1);

            // Ler o nome da carta
            printf("Digite o nome para a carta %s: ", cartas[i][j].codigo);
            scanf(" %[^\n]", cartas[i][j].nome);
        }
    }
}

void exibirCartas(Carta cartas[NUM_ESTADOS][NUM_CIDADES]) {
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("Código: %s, Nome: %s\n", cartas[i][j].codigo, cartas[i][j].nome);
        }
    }
}

int main() {
    Carta cartas[NUM_ESTADOS][NUM_CIDADES];

    printf("Cadastro de Cartas do Super Trunfo - Tema: Países\n");
    cadastrarCartas(cartas);
    exibirCartas(cartas);

    return 0;
}
