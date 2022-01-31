#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int val1, val2, val3, val4, val5, veri = 0; // Declaração de variaveis inteiras e adiciona o valor de zero a veri
    scanf("%d %d %d %d %d", &val1, &val2, &val3, &val4, &val5); // Leitura de variaveis inteiras
    if (val1 % 2 == 0 ) { // Verifica se val1 é par
        veri = veri + 1; // Adiciona 1 a variavel a veri 
    }
    if (val2 % 2 == 0 ) { // Verifica se val2 é par
        veri = veri + 1; // Adiciona 1 a variavel a veri 
    }
    if (val3 % 2 == 0 ) { // Verifica se val3 é par
        veri = veri + 1; // Adiciona 1 a variavel a veri 
    }
    if (val4 % 2 == 0 ) { // Verifica se val4 é par
        veri = veri + 1; // Adiciona 1 a variavel a veri 
    }
    if (val5 % 2 == 0 ) { // Verifica se val5 é par
        veri = veri + 1; // Adiciona 1 a variavel a veri 
    }
    printf("%d valores pares\n", veri); // Imprime os valores pares 
    return 0;
}
