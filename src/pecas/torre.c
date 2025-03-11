/**
 * @file torre.c
 * @brief Implementação da função de movimentação da Torre
 *
 * Este arquivo contém a implementação da função que simula
 * o movimento da Torre usando a estrutura de repetição FOR.
 */
#include "include/pecas.h"
#include <stdio.h>

void moverTorre(int numCasas) {
  printf("\n=== Movimento da Torre (%d casas para a direita) ===\n", numCasas);
  // Utiliza a estrutura FOR para simular o movimento da Torre
  // A Torre se move em linha reta horizontalmente ou verticalmente
  for (int i = 0; i < numCasas; i++) {
    printf("Direita\n");
  }
  printf("\n=== Fim do movimento da TORRES ===\n");
}