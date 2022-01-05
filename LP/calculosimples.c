#include <stdio.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    double V, V2, VT; //declaração das variáveis double
    int COD, N, COD2, N2; //declaração das variáveis inteiras
    scanf("%d %d %lf", &COD, &N, &V); //leitura das variaveis do produto 1
    scanf("%d %d %lf", &COD2, &N2, &V2 ); //leitura das variaveis do produto 2
    VT = ((V*N) + (V2*N2)); //calculo simples
    printf("VALOR A PAGAR: R$ %.2lf\n", VT);//imprime o valor
    return 0;
}
