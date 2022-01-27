#include <stdio.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    double V, V2, VT; // Declaração das variáveis double
    int COD, N, COD2, N2; // Declaração das variáveis inteiras
    scanf("%d %d %lf", &COD, &N, &V); // Leitura das variaveis do produto 1
    scanf("%d %d %lf", &COD2, &N2, &V2 ); // Leitura das variaveis do produto 2
    VT = ((V*N) + (V2*N2)); // Calculo simples
    printf("VALOR A PAGAR: R$ %.2lf\n", VT);// Imprime o valor
    return 0;
}
