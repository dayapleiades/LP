#include <stdio.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    double A,B,C,D,R1,R2; //declaração de variaveis double
    scanf("%lf", &A); // leitura da variavel A
    scanf("%lf", &B); // leitura da variavel B
    scanf("%lf", &C); // leitura da variavel C
    D = B*B - 4*A*C; // Calculo do Delta
    R1 = (-B + sqrt(D)) / (2*A); // Restante do calculo de bhaskara (+)
    R2 = (-B - sqrt(D)) / (2*A); // Restante do calculo de bhaskara (-)
    if (D<0 || A==0) { // Se Delta for menor que zero e se A for igual a zero
        printf ("Impossivel calcular\n");} //imprime impossivel calcular 
        else{ // Caso contrario 
        printf("R1 = %.5lf\n", R1); //imprime o resultado do primeiro calculo (+)
        printf("R2 = %.5lf\n", R2); //imprime o resultado do segundo calculo (-)
     }
    return 0;
}
