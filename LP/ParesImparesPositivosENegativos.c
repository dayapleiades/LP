#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int val[5], impar = 0, par = 0, positivo = 0, negativo = 0, i; // Declaração de variaveis inteiros e as variaveis impar, par, positivo e negativo com valores zero
    for (i = 1; i <= 5; i++) { // Lê valores de um a cinco 
        scanf("%d", &val[i]); // Lê valor da linha i
    }
    for (i = 1; i <= 5; i++) { // Lê valores de um a cinco 
        if (val[i] % 2 == 0) { // Verifica se é par
            par = par + 1; // Adiciona 1 ao par
        }
        else { // Senão o valor é impar
            impar = impar + 1; // Adiciona 1 ao impar
        }
        if (val[i] > 0) { // Verifica se é positivo
            positivo = positivo + 1; // Adiciona 1 ao positivo
        }
        else if (val[i] < 0){ // Verifica se é negativo
            negativo = negativo + 1; // Adiciona 1 ao negativo
        }
    }
    printf("%d valor(es) par(es)\n", par); // Imprime os valores pares 
    printf("%d valor(es) impar(es)\n", impar); // Imprime os valores impares 
    printf("%d valor(es) positivo(s)\n", positivo); // Imprime os valores positivos  
    printf("%d valor(es) negativo(s)\n", negativo); // Imprime os valores negativos 
    return 0;
}
