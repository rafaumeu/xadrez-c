/**
 * @file rainha.c
 * @brief Implementação da função de movimentação da Rainha
 *
 * Este arquivo contém a implementação da função que simula
 * o movimento da Rainha usando a estrutura de repetição DO-WHILE.
 */
#include "include/pecas.h"
#include <stdio.h>

void moverRainha(int numCasas) {
  printf("\n=== Movimento da Rainha (%d casas para a esquerda) ===\n",
         numCasas);
  // Utiliza a estrutura DO-WHILE para simular o movimento da Rainha
  // A Rainha pode se mover em todas as direções
  int casasPercorridas = 0;
  do {
    printf("Esquerda\n");
    casasPercorridas++;
  } while (casasPercorridas < numCasas);

  printf("\n === Fim do movimento da RAINHA ===\n");
}