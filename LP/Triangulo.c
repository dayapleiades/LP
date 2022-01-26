#include <stdio.h>
 
int main() { //programa principal
 
    double a, b, c, perimetro, area; //declaração de variaveis double
    scanf("%lf %lf %lf", &a, &b, &c); //leitura de variaveis double
    if (a + b > c && b + c > a && a + c > b) { //condição para ver se forma um triangulo
        perimetro = a + b + c; // calcula o perimetro
        printf("Perimetro = %.1lf\n", perimetro); //imprime o perimetro
    }
    else { // não forma um triangulo, forma trapézio
        area = ((a+b)*c)/2; // calcula a area
        printf("Area = %.1lf\n", area); // imprime area 
    }
    return 0;
}
