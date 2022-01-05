#include <stdio.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    double A,B,C,TRi,CI,TRa,QU,RE; //declaração da variável de dupla precisão
    scanf("%lf %lf %lf", &A, &B, &C); //leitura da variavel de dupla precisão
    TRi = A*C/2 ; //calculo da area do triangulo
    CI = 3.14159*pow(C,2); //calculo da area do circulo
    TRa = (A+B)*C/2; //calculo da area do trapezio
    QU = B*B; //calculo da area do quadrdo
    RE = A*B; //calculo da area do retangulo
    printf("TRIANGULO: %.3lf\n", TRi);//imprime o valor do volume do triagulo
    printf("CIRCULO: %.3lf\n", CI);//imprime o valor do volume do circulo
    printf("TRAPEZIO: %.3lf\n", TRa);//imprime o valor do volume do trapezio
    printf("QUADRADO: %.3lf\n", QU);//imprime o valor do volume do quadrado
    printf("RETANGULO: %.3lf\n", RE);//imprime o valor do volume do retangulo
    return 0;
}
