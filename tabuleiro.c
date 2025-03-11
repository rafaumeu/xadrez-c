/**
 * @file tabuleiro.c
 * @brief Implementação das funções relacionadas ao tabuleiro
 * 
 * Este arquivo contém a implementação das funções relacionadas
 * ao tabuleiro de xadrez.
 */
#include <stdio.h>
#include "include/tabuleiro.h"
void exibirInfoTabuleiro(void) {
  printf("=== Simulação de Movimentos de Peças de Xadrez ===\n");
  printf("Este programa simula o movimento de três peças de xadrez:\n");
  printf("- Torre: %d casas para a direita (usando FOR)\n", TORRE_CASAS);
  printf("- Bispo: %d casas na diagonal para cima/direita (usando WHILE)\n", BISPO_CASAS);
  printf("- Rainha: %d casas para a esquerda (usando DO-WHILE)\n", RAINHA_CASAS);
  printf("\nCada movimento é representado por uma saída no console indicando a direção.\n");
}