#include <stdio.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    double V; // Declaração da variável volume
    int R; // Declaração das variáveis inteiras
    scanf("%d", &R); // Leitura da variavel interia
    V = (4.0/3)*3.14159*pow(R,3) ; // Calculo do volume
    printf("VOLUME = %.3lf\n", V);// Imprime o valor do volume
    return 0;
}
