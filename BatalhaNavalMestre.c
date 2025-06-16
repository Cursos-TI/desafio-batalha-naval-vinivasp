#include <stdio.h>
#include <stdlib.h>

int main () {
    char Linha[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Variáveis para o triangulo
    int TopoTriangulo = 1;
    int CentroTriangulo = 4;
    int AlturaTriangulo = 3;
    // Variáveis para cruz
    int centroLinha = 7;
    int centroColuna = 2;
    // Variáveis para losango
    int LinhaLosango = 6;
    int ColunaLosango = 7;
    int tamanho = 2;



    int Tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {3, 3, 3, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // Cabeçalho A até J
    printf("  "); // Espaço para alinhar as letras
    for (int i = 0; i < 10; i++) {
        printf("%c ", Linha[i]);
    }
    printf("\n");
    
    // Navio na diagonal principal
    for (int i = 0; i < 3; i++) {
        Tabuleiro[i][i] = 3;
    }
    
    // Navio na diagonal secundária
    for (int i = 0; i < 3; i++) {
        Tabuleiro[i][9 - i] = 3;
    }

    // Triângulo
    for (int i = 0; i < AlturaTriangulo; i++) {
        int linha = TopoTriangulo + i;
        for (int j = -i; j <= i; j++) {
            int coluna = CentroTriangulo + j;
            // Verificação de limites da matriz
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
            Tabuleiro[linha][coluna] = 5;
            }
        }
    }

    //  Cruz
    for (int i = -2; i <= 2; i++) {             // Desenhar braço vertical
        int linha = centroLinha + i;
        if (linha >= 0 && linha < 10) {
            Tabuleiro[linha][centroColuna] = 5;
        }
    }

    for (int j = -2; j <= 2; j++) {             // Desenhar braço horizontal
        int coluna = centroColuna + j;
        if (coluna >= 0 && coluna < 10) {
            Tabuleiro[centroLinha][coluna] = 5;
        }
    }

    // Losango
    for (int i = -tamanho; i <= tamanho; i++) {
        int linha = LinhaLosango + i;
        int deslocamento = tamanho - abs(i); // controla o "afunilamento" do losango

        for (int j = -deslocamento; j <= deslocamento; j++) {
            int coluna = ColunaLosango + j;

        // evita acessar fora dos limites da matriz
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                Tabuleiro[linha][coluna] = 5;
            }
        }
    }

   
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