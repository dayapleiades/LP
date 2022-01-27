#include <stdio.h> // Inclusão de biblioteca
 
int main() { // Função principal
 
    int N, num, i, j; // Declaração de todas as variáveis inteiras
    
    while (scanf("%d", &N) != EOF) { // Enquanto não for fim de arquivo, faça:
        if (N >= 3 && N < 70) { // N precisa estar entre 3 e 69
            for (j = 0; j < N; j++) { // Contador de colunas
                for (i = 0; i < N; i++) { // Contador de linhas
                    if (1 == (N - i - j)) { // Verifica a diagonal inversa
                        printf("2"); // Imprime 2
                    }
                    else if (i == j) { // Verifica a diagonal
                        printf("1"); // Imprime 1
                    }
                    else { // Todo o resto terá 3
                        printf("3"); // Imprime 3
                    }
                }
                printf("\n"); // Quebra de linha após fim de linha
            }
        }
    }
    return 0;
}
