#include <stdio.h>

int main () {
    char Linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int Tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 3, 3, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // Cabeçalho A até J
    printf("  "); // Espaço para alinhar as letras
    for (int i = 0; i < 10; i++) {
        printf("%c ", Linha[i]);
    }
    printf("\n");

    // Exibir tabuleiro com números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);  // Números da linha (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf("%d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}