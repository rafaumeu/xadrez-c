/**
 * @file cavalo.c
 * @brief Implementação da função de movimentação do Cavalo
 *
 * Este arquivo contém a implementação da função que simula
 * o movimento do Cavalo usando estruturas de repetição aninhadas (FOR e WHILE).
 */
#include "pecas.h"
#include <stdio.h>

void moverCavalo(int numCasasVertical, int numCasasHorizontal) {
  printf("\n=== Movimento do Cavalo (%d casas para baixo, %d casa para a "
         "esquerda) ===\n",
         numCasasVertical, numCasasHorizontal);

  // Utiliza estruturas aninhadas para simular o movimento do Cavalo em "L"
  // Loop externo (FOR) - controla o movimento vertical (para baixo)
  for (int vertical = 0; vertical < numCasasVertical; vertical++) {
    printf("Baixo\n");

    // Loop interno (WHILE) - controla o movimento horizontal (para esquerda)
    // Só executa o movimento horizontal após o último movimento vertical
    if (vertical == numCasasVertical - 1) {
      int horizontal = 0;
      while (horizontal < numCasasHorizontal) {
        printf("Esquerda\n");
        horizontal++;
      }
    }
  }

  printf("\n=== Fim do movimento do Cavalo ===\n");
}