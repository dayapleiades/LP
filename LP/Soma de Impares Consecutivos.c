#include <stdio.h> // Inclusão de biblioteca
 
int main() { // Programa principal
    
    int i, x, y, soma = 0; // Declaração de variáveis, valor 0 é atribuído a variável soma
    scanf("%d %d", &x, &y); // Leitura de dois valores
    if (x >= y) { // Se o primeiro valor for maior ou igual o segundo
        for (i = y+1; i < x; i++) { // De i = y+1 até i < x passo 1 faça
            if(i % 2 != 0) { // Verifica se i é ímpar
                soma = soma + i; // Soma i na soma total
            }
        }
    }
    else { // Senão o segundo maior é maior que o primeiro
        for (i = x+1; i < y; i++) { // De i = x+1 até i < y passo 1 faça
            if(i % 2 != 0) { // Verifica se i é ímpar
                soma = soma + i; // Soma i na soma total
            }
        }
    }
    printf("%d\n", soma); // Imprime a soma dos ímpares consecutivos
    return 0;
}
