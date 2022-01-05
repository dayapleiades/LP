#include <stdio.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    double V; //declaração da variável volume
    int R; //declaração das variáveis inteiras
    scanf("%d", &R); //leitura da variavel interia
    V = (4.0/3)*3.14159*pow(R,3) ; //calculo do volume
    printf("VOLUME = %.3lf\n", V);//imprime o valor do volume
    return 0;
}
