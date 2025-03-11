/**
 * @file pecas.h
 * @brief Declaração das funções de movimentação das peças de xadrez
 *
 * Este arquivo contém as declarações das funções que simulam
 * o movimento das peças de xadrez (Torre, Bispo e Rainha).
 */

#ifndef PECAS_H
#define PECAS_H

/**
 * @brief Simula o movimento da Torre
 *
 * Utiliza a estrutura de repetição FOR para simular o movimento
 * da Torre cinco casas para a direita.
 *
 * @param numCasas Número de casas que a Torre irá se mover
 */
void moverTorre(int numCasas);

/**
 * @brief Simula o movimento do Bispo
 *
 * Utiliza a estrutura de repetição FOR para simular o movimento
 * do Bispo duas casas para a direita e duas casas para cima.
 *
 * @param numCasas Número de casas que o Bispo irá se mover
 */
void moverBispo(int numCasas);

/**
 * @brief Simula o movimento da Rainha
 *
 * Utiliza a estrutura de repetição FOR para simular o movimento
 * da Rainha uma casa para a direita e uma casa para cima.
 *
 * @param numCasas Número de casas que a Rainha irá se mover
 */
void moverRainha(int numCasas);

#endif /* PECAS_H */