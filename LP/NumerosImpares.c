#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
    
    int i, x; // Declaração de variaveis inteiras 
    scanf("%d", &x); // Leitura da variavel inteira x
    if (x >= 1 && x <= 1000) { // Se x estiver entre 1 e 1000
        for (i = 1; i <= x; i++) { // Para de 1 ate x passo 1 passo
            if (i % 2 != 0) { // Se o resto for diferente de zero é impar
                printf("%d\n", i); // Imprime os impares 
            }
        }
    }
    return 0;
}
