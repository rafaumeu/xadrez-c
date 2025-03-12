/**
 * @file tabuleiro.h
 * @brief Declaração das constantes e funções relacionadas ao tabuleiro
 *
 * Este arquivo contém as declarações das constantes e funções
 * relacionadas ao tabuleiro de xadrez.
 */
#ifndef TABULEIRO_H
#define TABULEIRO_H

#define TORRE_CASAS 5
#define BISPO_CASAS 5
#define RAINHA_CASAS 8
#define CAVALO_CASAS_VERTICAL 2
#define CAVALO_CASAS_HORIZONTAL 1
#define CAVALO_MOVIMENTOS 3

/**
 * @brief Exibe informações sobre o tabuleiro
 *
 * Exibe uma mensagem de boas-vindas e informações sobre o tabuleiro.
 */
void exibirInfoTabuleiro(void);

/**
 * @brief Exibe informações sobre o tabuleiro para o nível mestre
 *
 * Exibe informações sobre o tabuleiro para o desafio de nível mestre.
 */
void exibirInfoTabuleiroMestre(void);

#endif /* TABULEIRO_H */