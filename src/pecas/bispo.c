/**
 * @file bispo.c
 * @brief Implementação da função de movimentação do Bispo
 * 
 * Este arquivo contém a implementação da função que simula
 * o movimento do Bispo usando a estrutura de repetição WHILE.
 */
#include <stdio.h>
#include "include/pecas.h"

void moverBispo(int numCasas) {
  printf("\n=== Movimento do Bispo (%d casas na diagonal para cima/direita) ===\n", numCasas);
  // Utiliza a estrutura WHILE para simular o movimento do Bispo
    // O Bispo se move na diagonal
  int casasPercorridas = 0;
  while(casasPercorridas < numCasas) {
    printf("Cima, Direita\n");
    casasPercorridas++;
  }
  printf("=== Fim do movimento do BISPO ===\n");
}