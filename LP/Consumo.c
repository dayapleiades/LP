#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int DT; // Declaração da variável inteira
    double CM, TC; // Declaração da variável double 
    scanf("%d", &DT); // Leitura da variavel inteira
    scanf("%lf", &TC);// Leitura da variavel double
    CM = DT/TC; // Calcula o consumo médio
    printf("%.3lf km/l\n",CM);// Imprime o consumo médio
    return 0;
}
