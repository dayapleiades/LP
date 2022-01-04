#include <stdio.h>
#include <stdlib.h>

int NumAleatorio (int **matriz) { // Função para atribuir números aleatórios
  int i, j; // Contadores de linha e coluna
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      matriz[i][j] = rand() % 81; // Atríbui um valor aleatório a atual posição
    }
  }
  return **matriz; // Retorna a matriz
}

int main() {
  int **matriz; // Declaração da matriz
  int i, j; // Declaração de contadores de linhas e colunas
  matriz = (int*)malloc(9*sizeof(int)); // Alocando espaço para um vetor de 9 ponteirospara as linhas
  matriz[0] = (int*)malloc(81*sizeof(int)); // Alocando um vetor para toda a matriz
  for (i = 1; i < 9; i++) { // Ajustando as posições dos ponteiros restantes
    matriz[i] = matriz[0] + i*9;
  }
  NumAleatorio(matriz); // Chamada da função que aleatoriza os valores da matriz
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", matriz[i][j]); // Exibe os valores de toda a matriz 9x9
    }
  }
  free(matriz); // Libera a memória alocada do primeiro vetor
  free(matriz[0]); // Libera a memória alocada do segundo vetor
  return 0;
}
