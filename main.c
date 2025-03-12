/**
 * @file main.c
 * @brief Programa principal para simulação de movimentos de peças de xadrez
 *
 * Este programa simula o movimento de quatro peças de xadrez:
 * - Torre: 5 casas para a direita (usando FOR)
 * - Bispo: 5 casas na diagonal para cima/direita (usando WHILE)
 * - Rainha: 8 casas para a esquerda (usando DO-WHILE)
 * - Cavalo: movimento em "L" - 2 casas para baixo e 1 para esquerda (usando
 * loops aninhados)
 *
 * Cada movimento é representado por uma saída no console indicando a direção.
 */

#include "pecas.h"
#include "tabuleiro.h"
#include <stdio.h>

int main() {
  int opcao;
  
  printf("Escolha o nível de desafio:\n");
  printf("1 - Nível Básico (Estruturas de repetição simples)\n");
  printf("2 - Nível Mestre (Recursividade e loops complexos)\n");
  printf("Opção: ");
  scanf("%d", &opcao);
  
  if (opcao == 1) {
    // Exibe informações sobre o tabuleiro
    exibirInfoTabuleiro();
    
    // Simula o movimento da Torre
    moverTorre(TORRE_CASAS);
    
    // Simula o movimento do Bispo
    moverBispo(BISPO_CASAS);
    
    // Simula o movimento da Rainha
    moverRainha(RAINHA_CASAS);
    
    // Simula o movimento do Cavalo
    moverCavalo(CAVALO_CASAS_VERTICAL, CAVALO_CASAS_HORIZONTAL);
  } 
  else if (opcao == 2) {
    // Exibe informações sobre o tabuleiro para o nível mestre
    exibirInfoTabuleiroMestre();
    
    // Simula o movimento da Torre usando recursividade
    moverTorreRecursivo(TORRE_CASAS);
    
    // Simula o movimento do Bispo usando recursividade
    moverBispoRecursivo(BISPO_CASAS);
    
    // Simula o movimento do Bispo usando loops aninhados
    moverBispoLoopsAninhados(BISPO_CASAS);
    
    // Simula o movimento da Rainha usando recursividade
    moverRainhaRecursivo(RAINHA_CASAS);
    
    // Simula o movimento do Cavalo usando loops complexos
    moverCavaloComplexo(CAVALO_MOVIMENTOS);
  }
  else {
    printf("Opção inválida!\n");
    return 1;
  }
  
  return 0;
}