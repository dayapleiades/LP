#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int t,vm; // Declaração da variável
    double l,d; // Declaração da variável
    scanf("%d %d", &t,&vm); // Leitura das variaveis
    d= t*vm; // Calcula a distancia
    l=d/12; // Calcula os litros 
    printf("%.3lf\n",l);// Imprime o valor de litros
    return 0;
}
