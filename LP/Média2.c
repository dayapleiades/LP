#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>

int main() // Programa principal
{
    double A, B, C, MEDIA; // Declaração de variáveis
    scanf ("%lf %lf %lf", &A, &B, &C); // Leitura de variáveis
    MEDIA = (((A * 2) + (B * 3) + (C * 5)) / 10); // Calculo da média
            printf("MEDIA = %.1lf\n",MEDIA); // Mostra o resultado
    return 0;
}

