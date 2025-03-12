/**
 * @file torre_recursivo.c
 * @brief Implementação da função recursiva de movimentação da Torre
 *
 * Este arquivo contém a implementação da função recursiva que simula
 * o movimento da Torre.
 */
#include "pecas.h"
#include "tabuleiro.h" // Add this include to access TORRE_CASAS
#include <stdio.h>

void moverTorreRecursivo(int casasRestantes) {
  // Caso base: quando não há mais casas para mover
  if (casasRestantes <= 0) {
    printf("\n=== Fim do movimento da TORRE (Recursivo) ===\n");
    return;
  }

  // Caso inicial: imprime o cabeçalho apenas na primeira chamada
  if (casasRestantes == TORRE_CASAS) {
    printf(
        "\n=== Movimento da Torre (Recursivo - %d casas para a direita) ===\n",
        TORRE_CASAS);
  }

  // Imprime a direção do movimento
  printf("Direita\n");

  // Chamada recursiva para mover a próxima casa
  moverTorreRecursivo(casasRestantes - 1);
}
