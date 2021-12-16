#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor; // Declaração do vetor
    int i; // Declaração de contador
    vetor = (int*)malloc(5000*sizeof(int)); // Alocando espaço para contador de 5000 posições
    for (i = 0; i < 5000; i++) {  // Contador
        vetor[i]=i;
    }
    for (i = 0; i < 5000; i++) { // Contador
        printf("%d ", vetor[i]); // Exibe os valores de 0 até 4999
    }
    free(vetor); // Libera a memória alocada
    return 0;
}
