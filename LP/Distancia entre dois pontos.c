#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    double x1, x2, y1, y2, d; // Declaração das variáveis
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2); // Leitura das variaveis 
    d = sqrt((pow(x2 - x1,2)+pow(y2 - y1,2))); // Calcula a distancia
    printf("%.4lf\n",d);// Imprime o resultado do calculo
    return 0;
}
