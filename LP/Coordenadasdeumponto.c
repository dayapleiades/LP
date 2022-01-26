#include <stdio.h>
 
int main() { //programa principal
 
   
    double x,y; //declaração de variaveis double
    scanf("%lf %lf", &x, &y); //leitura de variaveis double
    if (x > 0 && y > 0) { // condição se o x for maior que zero e y maior que zero
        printf("Q1\n"); //imprime Q1
    }
    else if (x < 0 && y > 0) { // condição se o x for menor que zero e y maior que zero
        printf("Q2\n"); //imprime Q2
    }
    else if (x > 0 && y < 0) { // condição se o x for maior que zero e y menor que zero
        printf("Q4\n"); //imprime Q4
    }
    else if (x < 0 && y < 0) { // condição se o x for menor que zero e y menor que zero
        printf("Q3\n"); //imprime Q3
    }
    else if (x == 0 && y != 0) { // condição se o x for igual a zero e y diferente de zero
        printf("Eixo Y\n"); //imprime Eixo y
    }
    else if (x != 0 && y == 0) { // condição se o x for diferente de zero e y for igual a zero
        printf("Eixo X\n"); //imprime Eixo x
    }
    else if (x == 0 && y == 0){ // condição se o x for igual a zero e y igual a zero
        printf("Origem\n"); //imprime origem
    }
    return 0;
}
