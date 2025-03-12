/**
 * @file bispo_loops_aninhados.c
 * @brief Implementação da função de movimentação do Bispo usando loops
 * aninhados
 *
 * Este arquivo contém a implementação da função que simula o movimento
 * do Bispo usando loops aninhados, com o loop externo controlando o movimento
 * vertical e o interno o movimento horizontal.
 */
#include "pecas.h"
#include <stdio.h>

void moverBispoLoopsAninhados(int numCasas) {
  printf(
      "\n=== Movimento do Bispo (Loops Aninhados - %d casas na diagonal) ===\n",
      numCasas);

  // Loop externo para o movimento vertical
  for (int vertical = 0; vertical < numCasas; vertical++) {
    // Loop interno para o movimento horizontal
    for (int horizontal = 0; horizontal < 1; horizontal++) {
      // Cada iteração representa um movimento diagonal (vertical + horizontal)
      printf("Cima e Direita\n");
    }
  }

  printf("\n=== Fim do movimento do BISPO (Loops Aninhados) ===\n");
}