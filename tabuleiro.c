/**
 * @file tabuleiro.c
 * @brief Implementação das funções relacionadas ao tabuleiro
 *
 * Este arquivo contém a implementação das funções relacionadas
 * ao tabuleiro de xadrez.
 */
#include "tabuleiro.h"
#include <stdio.h>

void exibirInfoTabuleiro(void) {
  printf("=== Simulação de Movimentos de Peças de Xadrez ===\n");
  printf("Este programa simula o movimento de quatro peças de xadrez:\n");
  printf("- Torre: %d casas para a direita (usando FOR)\n", TORRE_CASAS);
  printf("- Bispo: %d casas na diagonal para cima/direita (usando WHILE)\n",
         BISPO_CASAS);
  printf("- Rainha: %d casas para a esquerda (usando DO-WHILE)\n",
         RAINHA_CASAS);
  printf("- Cavalo: movimento em \"L\" - %d casas para baixo e %d para "
         "esquerda (usando loops aninhados)\n",
         CAVALO_CASAS_VERTICAL, CAVALO_CASAS_HORIZONTAL);
  printf("\nCada movimento é representado por uma saída no console indicando a "
         "direção.\n");
}

void exibirInfoTabuleiroMestre(void) {
  printf("=== Simulação de Movimentos de Peças de Xadrez - Nível Mestre ===\n");
  printf("Este programa simula o movimento de peças de xadrez usando técnicas "
         "avançadas:\n");
  printf("- Torre: %d casas para a direita (usando Recursividade)\n",
         TORRE_CASAS);
  printf("- Bispo: %d casas na diagonal para cima/direita (usando "
         "Recursividade e Loops Aninhados)\n",
         BISPO_CASAS);
  printf("- Rainha: %d casas para a esquerda (usando Recursividade)\n",
         RAINHA_CASAS);
  printf("- Cavalo: %d movimentos em \"L\" - 2 casas para cima e 1 para "
         "direita (usando Loops Complexos)\n",
         CAVALO_MOVIMENTOS);
  printf("\nCada movimento é representado por uma saída no console indicando a "
         "direção.\n");
  printf("Este desafio demonstra o uso de recursividade e loops complexos para "
         "simular movimentos.\n");
}