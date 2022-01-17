#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    int t,vm; //declaração da variável
    double l,d; //declaração da variável
    scanf("%d %d", &t,&vm); //leitura das variaveis
    d= t*vm; // calcula a distancia
    l=d/12; // calcula os litros 
    printf("%.3lf\n",l);//imprime o valor de litros
    return 0;
}
