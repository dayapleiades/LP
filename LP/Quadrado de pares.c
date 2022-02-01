#include <stdio.h> // Inclusão de bibliotecas

int main() { // Programa principal
    
    int i, n; // Declaração de variáveis inteiras
    scanf("%d", &n); // Leitura de um número inteiro
    if (n > 5 && n < 2000) { // Se o número lido estiver entre 5 e 2000 faça:
        for (i = 1; i <= n; i++) { // Para i igual a 1 até i menor igual a n, passo 1 faça
            if (i % 2 == 0) { // Verifica se i é par
                printf("%d^2 = %d\n", i, i*i); // Imprime todos os quadrados dos números pares de 1 até n
            }
        }
    } 
    return 0;
}
