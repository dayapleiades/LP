#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    int DT; //declaração da variável inteira
    double CM, TC; //declaração da variável double 
    scanf("%d", &DT); //leitura da variavel inteira
    scanf("%lf", &TC);// leitura da variavel double
    CM = DT/TC; // calcula o consumo médio
    printf("%.3lf km/l\n",CM);//imprime o consumo médio
    return 0;
}
