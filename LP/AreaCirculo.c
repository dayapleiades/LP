#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>
 
int main() { // Programa principal
 
    double raio, A; // Declaração de variáveis 
    scanf("%lf", &raio); // Leitura de variáveis 
    A = 3.14159 * pow(raio,2); // Calculo de Area
    printf("A=%.4lf\n", A); // Mostra o resultado
    return 0;
}
