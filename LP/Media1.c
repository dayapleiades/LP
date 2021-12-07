#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>

int main() // Programa principal
{
    double A, B, MEDIA; // Declaração de variáveis
    scanf ("%lf %lf %lf", &A, &B, &MEDIA); // Leitura de variáveis
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11; // Calculo de média
            printf("MEDIA = %.5lf\n",MEDIA); // Mostra o Resultado
    return 0;
}
