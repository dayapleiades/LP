#include <stdio.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    double A,B,C,TRi,CI,TRa,QU,RE; // Declaração da variável de dupla precisão
    scanf("%lf %lf %lf", &A, &B, &C); // Leitura da variavel de dupla precisão
    TRi = A*C/2 ; // Calculo da area do triangulo
    CI = 3.14159*pow(C,2); // Calculo da area do circulo
    TRa = (A+B)*C/2; // Calculo da area do trapezio
    QU = B*B; // Calculo da area do quadrdo
    RE = A*B; // Calculo da area do retangulo
    printf("TRIANGULO: %.3lf\n", TRi);// Imprime o valor do volume do triagulo
    printf("CIRCULO: %.3lf\n", CI);// Imprime o valor do volume do circulo
    printf("TRAPEZIO: %.3lf\n", TRa);// Imprime o valor do volume do trapezio
    printf("QUADRADO: %.3lf\n", QU);// Imprime o valor do volume do quadrado
    printf("RETANGULO: %.3lf\n", RE);// Imprime o valor do volume do retangulo
    return 0;
}
