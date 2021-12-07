#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>

int main() // Programa principal
{
    int A, B, PROD; // Declaração de variável
    scanf ("%d %d %d", &A, &B, &PROD); // Leitura de variável
    PROD = A * B; // Cálculo de produto
    printf("PROD = %d\n",PROD); // Mostra o resultado
    return 0;
}

