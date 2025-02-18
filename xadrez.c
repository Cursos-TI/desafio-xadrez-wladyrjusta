#include <stdio.h>

int main() {
    // Posição inicial do cavalo no tabuleiro de xadrez
    int posicao_inicial_linha = 4;  // Exemplo de linha inicial
    int posicao_inicial_coluna = 4; // Exemplo de coluna inicial

    // Movimentos necessários para o cavalo
    int movimentos_baixo = 2;  // Número de movimentos para baixo
    int movimentos_esquerda = 1; // Número de movimentos para a esquerda

    // Exibindo a posição inicial do cavalo
    printf("Posição inicial do Cavalo: Linha %d, Coluna %d\n\n", posicao_inicial_linha, posicao_inicial_coluna);

    // Movimentação do Cavalo
    // Loop externo para os movimentos para baixo
    for (int i = 0; i < movimentos_baixo; i++) {
        // Movendo uma casa para baixo
        posicao_inicial_linha += 1; // Atualiza a posição da linha
        printf("Movimento: Baixo. Nova posição: Linha %d, Coluna %d\n", posicao_inicial_linha, posicao_inicial_coluna);
    }

    // Loop interno para o movimento à esquerda
    int movimentos_realizados_esquerda = 0;
    while (movimentos_realizados_esquerda < movimentos_esquerda) {
        // Movendo uma casa para a esquerda
        posicao_inicial_coluna -= 1; // Atualiza a posição da coluna
        printf("Movimento: Esquerda. Nova posição: Linha %d, Coluna %d\n", posicao_inicial_linha, posicao_inicial_coluna);
        movimentos_realizados_esquerda++;
    }

    // Exibindo posição final
    printf("\nPosição final do Cavalo: Linha %d, Coluna %d\n", posicao_inicial_linha, posicao_inicial_coluna);

    return 0;
}
