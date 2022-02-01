#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>

int main() { // Programa principal
    
    int i, n, veri = 0, veri2 = 0; // Declaração de variáveis, valor 0 é atribuído a veri e veri2
    scanf("%d", &n); // Lê a quantidade de números inteiros que serão lidos
    if (n < 10000) { // Se n for menor que 10000 faça
        int x[n]; // Declaração do vetor x, com n linhas
        for (i = 0; i < n; i++) {
            scanf("%d", &x[i]); // Leitura dos n valores de x
        }
        for (i = 0; i < n; i++) { // Para i igual a 0 até i menor que n passo 1 faça
             if (x[i] >= 10 && x[i] <= 20) { // Se o valor de x estiver entre 10 e 20, faça:
                 veri = veri + 1; // Contador Veri aumenta 1
             }
             else { // Senão o valor de x está fora do intervalo [10,20]
                 veri2 = veri2 + 1; // Contador Veri2 aumenta 1
             }
        } 
            printf("%d in\n", veri); // Imprime a quantidade de valores dentro do intervalo [10,20]
            printf("%d out\n", veri2); // Imprime a quantidade de valores fora do intervalo [10,20]
    }
    return 0;
}
