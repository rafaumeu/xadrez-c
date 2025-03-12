/**
 * @file pecas.h
 * @brief Declaração das funções de movimentação das peças de xadrez
 *
 * Este arquivo contém as declarações das funções que simulam
 * o movimento das peças de xadrez (Torre, Bispo, Rainha e Cavalo).
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
 * Utiliza a estrutura de repetição WHILE para simular o movimento
 * do Bispo cinco casas na diagonal para cima/direita.
 *
 * @param numCasas Número de casas que o Bispo irá se mover
 */
void moverBispo(int numCasas);

/**
 * @brief Simula o movimento da Rainha
 *
 * Utiliza a estrutura de repetição DO-WHILE para simular o movimento
 * da Rainha oito casas para a esquerda.
 *
 * @param numCasas Número de casas que a Rainha irá se mover
 */
void moverRainha(int numCasas);

/**
 * @brief Simula o movimento do Cavalo
 *
 * Utiliza estruturas de repetição aninhadas (FOR e WHILE) para simular
 * o movimento do Cavalo em "L" (duas casas para baixo e uma para a esquerda).
 *
 * @param numCasasVertical Número de casas que o Cavalo irá se mover verticalmente
 * @param numCasasHorizontal Número de casas que o Cavalo irá se mover horizontalmente
 */
void moverCavalo(int numCasasVertical, int numCasasHorizontal);

/**
 * @brief Simula o movimento da Torre usando recursividade
 *
 * Utiliza recursividade para simular o movimento da Torre.
 *
 * @param casasRestantes Número de casas restantes para a Torre se mover
 */
void moverTorreRecursivo(int casasRestantes);

/**
 * @brief Simula o movimento do Bispo usando recursividade
 *
 * Utiliza recursividade para simular o movimento do Bispo na diagonal.
 *
 * @param casasRestantes Número de casas restantes para o Bispo se mover
 */
void moverBispoRecursivo(int casasRestantes);

/**
 * @brief Simula o movimento da Rainha usando recursividade
 *
 * Utiliza recursividade para simular o movimento da Rainha.
 *
 * @param casasRestantes Número de casas restantes para a Rainha se mover
 */
void moverRainhaRecursivo(int casasRestantes);

/**
 * @brief Simula o movimento do Bispo usando loops aninhados
 *
 * Utiliza loops aninhados para simular o movimento do Bispo na diagonal,
 * com o loop externo controlando o movimento vertical e o interno o horizontal.
 *
 * @param numCasas Número de casas que o Bispo irá se mover
 */
void moverBispoLoopsAninhados(int numCasas);

/**
 * @brief Simula o movimento do Cavalo usando loops complexos
 *
 * Utiliza loops aninhados com múltiplas variáveis e condições para simular
 * o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
 *
 * @param numMovimentos Número de movimentos em "L" que o Cavalo irá realizar
 */
void moverCavaloComplexo(int numMovimentos);

#endif /* PECAS_H */