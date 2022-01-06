#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    double x1, x2, y1, y2, d; //declaração das variáveis
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2); //leitura das variaveis 
    d = sqrt((pow(x2 - x1,2)+pow(y2 - y1,2))); //calcula a distancia
    printf("%.4lf\n",d);//imprime o resultado do calculo
    return 0;
}
