/**
 * @file main.c
 * @brief Programa principal para simulação de movimentos de peças de xadrez
 *
 * Este programa simula o movimento de três peças de xadrez:
 * - Torre: 5 casas para a direita (usando FOR)
 * - Bispo: 5 casas na diagonal para cima/direita (usando WHILE)
 * - Rainha: 8 casas para a esquerda (usando DO-WHILE)
 *
 * Cada movimento é representado por uma saída no console indicando a direção.
 */

#include "include/pecas.h"
#include "include/tabuleiro.h"
#include <stdio.h>

int main() {
  // Exibe informações sobre o tabuleiro
  exibirInfoTabuleiro();

  // Simula o movimento da Torre usando FOR
  moverTorre(TORRE_CASAS);

  // Simula o movimento do Bispo usando WHILE
  moverBispo(BISPO_CASAS);

  // Simula o movimento da Rainha usando DO-WHILE
  moverRainha(RAINHA_CASAS);

  printf("\n=== Fim da Simulação ===\n");

  return 0;
}