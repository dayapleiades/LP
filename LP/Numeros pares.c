#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
    
    int i; // Declaração da varivel inteira 
    for (i = 1; i <= 100; i++) { // Vai de 1 a 100
        if (i % 2 == 0) { // Se o resto for zero, é par
            printf("%d\n", i); // Imprime os numeros pares de 1 a 100
        }
    }
 
    return 0;
}
