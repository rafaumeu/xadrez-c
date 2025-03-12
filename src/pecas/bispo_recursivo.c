/**
 * @file bispo_recursivo.c
 * @brief Implementação da função recursiva de movimentação do Bispo
 *
 * Este arquivo contém a implementação da função recursiva que simula
 * o movimento do Bispo na diagonal.
 */
#include "pecas.h"
#include "tabuleiro.h" // Add this include to access BISPO_CASAS
#include <stdio.h>

void moverBispoRecursivo(int casasRestantes) {
  // Caso base: quando não há mais casas para mover
  if (casasRestantes <= 0) {
    printf("\n=== Fim do movimento do BISPO (Recursivo) ===\n");
    return;
  }

  // Caso inicial: imprime o cabeçalho apenas na primeira chamada
  if (casasRestantes == BISPO_CASAS) {
    printf("\n=== Movimento do Bispo (Recursivo - %d casas na diagonal para "
           "cima/direita) ===\n",
           BISPO_CASAS);
  }

  // Imprime a direção do movimento (diagonal = cima + direita)
  printf("Cima e Direita\n");

  // Chamada recursiva para mover a próxima casa
  moverBispoRecursivo(casasRestantes - 1);
}