#include <stdio.h> //Inclusão de biblioteca

int main() { // Programa principal
  int ni, i, j, x, y, count = 1, aux = 1, c1, count2; // Declarando variáveis
  char v[9][9]; // Declarando matriz 9x9
  scanf("%d", &ni); // Lendo número de instâncias
  while (count <= ni) { // Enquanto contador for menor ou igual o número de instâncias faça
    for (i = 0; i < 9; i++) { // Número da linha
      for (j = 0; j < 9; j++) { // Número da coluna
        scanf("%s", &v[i][j]); // Lê um valor para a posição i linhas e j colunas da matriz
      }
    }
    for (i = 0; i < 9; i++) { // Número da linha
      for (j = 0; j < 9; j++) { // Número da coluna
        for (x = 0; x < 9; x++) { // Número da coluna auxiliar
          if (i*i + j*j == i*i + x*x) { // Se i² + j² igual a i² + x², a mesma posição está sendo lida
            continue; // Passa o laço
          }
          else if (v[i][j] == v[i][x]) { // Se o valor na posição i, j for igual ao valor na posição i, x
            aux = 0; // Variável auxiliar troca de 1 para 0
          }
        }
      }
    }
    for (i = 0; i < 9; i++) { // Número da linha
      for (j = 0; j < 9; j++) { // Número da coluna
        for (x = 0; x < 9; x++) { // Número da coluna auxiliar
          for (y = 0; y < 9; y++) { // Número da linha auxiliar            
            if (i*i + j*j == j*j + y*y) { // Se i² + j² igual a j² + y², a mesma posição está sendo lida
              continue; // Passa o laço
            }
            else if (v[i][j] == v[y][j]) { // Se o valor na posição i, j for igual ao valor na posição y, j
              aux = 0; // Variável auxiliar troca de 1 para 0
            }
          }
        }
      }
    }
    c1 = 3; // Resetando c1
    count2 = 0; // Resetando count2
    while (count2 < 3) { // Enquanto count2 menor que 3 faça
      // Linhas 1 a 9 - Colunas 1 a 3
      for (i = c1-3; i < c1; i++) { // Número da linha, aumenta 3 do inicial e 3 do limite a cada laço do while
        for (j = 0; j < 3; j++) { // Número da coluna
          for (x = c1-3; x < c1; x++) { // Número da linha auxiliar, aumenta 3 do inicial e 3 do limite a cada laço do while
            for (y = 0; y < 3; y++) { // Número da coluna auxiliar
              if (i*i + j*j == y*y + x*x) { // Se i² + j² igual a y² + x², a mesma posição está sendo lida
                continue; // Passa o laço
              }
              else if (v[i][j] == v[x][y]) { // Se o valor na posição i, j for igual ao valor na posição x, y
                aux = 0; // Variável auxiliar troca de 1 para 0
              }
            }
          }
        }
      }
      // Linhas 1 a 9 - Colunas 4 a 6
      for (i = c1-3; i < c1; i++) { // Número da linha, aumenta 3 do inicial e 3 do limite a cada laço do while
        for (j = 3; j < 6; j++) { // Número da coluna
          for (x = c1-3; x < c1; x++) { // Número da linha auxiliar, aumenta 3 do inicial e 3 do limite a cada laço do while
            for (y = 3; y < 6; y++) { // Número da coluna auxiliar
              if (i*i + j*j == y*y + x*x) { // Se i² + j² igual a y² + x², a mesma posição está sendo lida
                continue; // Passa o laço
              }
              else if (v[i][j] == v[x][y]) { // Se o valor na posição i, j for igual ao valor na posição x, y
                aux = 0; // Variável auxiliar troca de 1 para 0
              }
            }
          }
        }
      }
      // Linhas 1 a 9 - Colunas 7 a 9
      for (i = c1-3; i < c1; i++) { // Número da linha, aumenta 3 do inicial e 3 do limite a cada laço do while
        for (j = 6; j < 9; j++) { // Número da coluna
          for (x = c1-3; x < c1; x++) { // Número da linha auxiliar, aumenta 3 do inicial e 3 do limite a cada laço do while
            for (y = 6; y < 9; y++) { // Número da coluna auxiliar
              if (i*i + j*j == y*y + x*x) { // Se i² + j² igual a y² + x², a mesma posição está sendo lida
                continue; // Passa o laço
              }
              else if (v[i][j] == v[x][y]) { // Se o valor na posição i, j for igual ao valor na posição x, y
                aux = 0; // Variável auxiliar troca de 1 para 0
              }
            }
          }
        }
      }
      c1 += 3; // C1 aumenta 3
      count2++; // Count2 aumenta 1
    }
    printf("Instancia %d\n", count); // Imprime a instância atual
    if (aux == 1) { // Se a variáel auxiliar for igual a 1
         printf("SIM\n"); // Imprime a palavra sim
    }
    else { // Se não
         printf("NAO\n"); // Imprime a palavra não
    }
    printf("\n"); // Pula uma linha
    count++; // Contador aumenta 1
    aux = 1; // Reseta a variável auxiliar
  }
  return 0;
}
