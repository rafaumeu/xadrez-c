/**
 * @file rainha_recursivo.c
 * @brief Implementação da função recursiva de movimentação da Rainha
 *
 * Este arquivo contém a implementação da função recursiva que simula
 * o movimento da Rainha.
 */
#include "pecas.h"
#include "tabuleiro.h"
#include <stdio.h>

void moverRainhaRecursivo(int casasRestantes) {
  // Caso base: quando não há mais casas para mover
  if (casasRestantes <= 0) {
    printf("\n=== Fim do movimento da RAINHA (Recursivo) ===\n");
    return;
  }

  // Caso inicial: imprime o cabeçalho apenas na primeira chamada
  if (casasRestantes == RAINHA_CASAS) {
    printf("\n=== Movimento da Rainha (Recursivo - %d casas para a esquerda) "
           "===\n",
           RAINHA_CASAS);
  }

  // Imprime a direção do movimento
  printf("Esquerda\n");

  // Chamada recursiva para mover a próxima casa
  moverRainhaRecursivo(casasRestantes - 1);
}