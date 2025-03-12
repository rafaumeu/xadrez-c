/**
 * @file cavalo_complexo.c
 * @brief Implementação da função de movimentação do Cavalo usando loops complexos
 *
 * Este arquivo contém a implementação da função que simula o movimento
 * do Cavalo em "L" (duas casas para cima e uma para a direita) usando
 * loops aninhados com múltiplas variáveis e condições.
 */
#include "pecas.h"
#include <stdio.h>

void moverCavaloComplexo(int numMovimentos) {
  printf("\n=== Movimento do Cavalo (Loops Complexos - %d movimentos em \"L\") ===\n", 
         numMovimentos);
  
  int movimentosCompletos = 0;
  
  // Loop externo para controlar o número total de movimentos em "L"
  for (int i = 0; i < numMovimentos; i++) {
    // Loop aninhado para simular o movimento em "L" (2 para cima, 1 para direita)
    for (int j = 0; j < 3; j++) {
      // Verifica se estamos nos primeiros dois passos (movimento para cima)
      if (j < 2) {
        printf("Cima\n");
      } 
      // Último passo (movimento para direita)
      else if (j == 2) {
        printf("Direita\n");
        
        // Incrementa o contador de movimentos completos
        movimentosCompletos++;
        
        // Se já completamos todos os movimentos, saímos do loop
        if (movimentosCompletos >= numMovimentos) {
          break;
        }
      }
      
      // Se for o último passo do movimento em "L", reiniciamos o loop interno
      if (j == 2) {
        // Usamos continue para pular para a próxima iteração do loop externo
        continue;
      }
    }
  }
  
  printf("\n=== Fim do movimento do CAVALO (Loops Complexos) ===\n");
}