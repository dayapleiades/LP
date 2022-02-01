#include <stdio.h> // Inclusão de bibliotecas
 
int main() {
    
    int i, x; // Declaração de variáveis
    scanf("%d", &x); // Leitura de um número
    if (x % 2 != 0) { // Verifica se o número inserido é ímpar
        printf("%d\n", x); // Imprime o primeiro número ímpar 
        for (i = 1; i <= 5; i++) {
            printf("%d\n", x+2*i); // Imprime os 5 próximos números ímpares
        }
    }
    else { // Se não o número inserido é par
        x = x + 1; // Encontra o próximo número ímpar
        printf("%d\n", x); // Imprime o primeiro número ímpar
        for (i = 1; i <= 5; i++) { 
            printf("%d\n", x+2*i); // Imprime os 5 próximos números ímpares
        }
    }
    return 0;
}
