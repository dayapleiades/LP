#include <stdio.h> // Inclusão de biblioteca
 
int main() {
    int n[3][3];  // Declaração de matriz
    int i, j; // Declaração de contadores
      for(i=0; i<3; i++) { // Colunas da matriz
        for(j=0; j<3;) { // Linhas da Matriz
           printf ("Digite um número:"); // Mensagem
           scanf("%d", &n[i][j]); // Leitura da matriz
              if (n[i][j] >= 1 && n[i][j] <= 9) { // Se o valor inserido estiver entre 1 e 9 então   
                  j++; 
              }
                  else
                      printf ("ERRO"); // Mensagem
                      printf("\n"); // Quebra de linha
        }
      }
        for(i=0; i<3; i++) { // Colunas da matriz
          for(j=0; j<3; j++ ) { // Linhas da Matriz
              printf("%d ", n[i][j]); // Imprime a matriz
           }
            printf("\n"); // Quebra de Linha
         }
    return 0;
}
