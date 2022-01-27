#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int A,B,C,MAB,MABC; // Declaração da variável 
    scanf("%d %d %d", &A, &B, &C); // Leitura da variavel 
    MAB = (A+B+abs(A-B))/2; // Calcula o maior entre a e b
    MABC = (MAB+C+abs(MAB-C))/2; // Calcula o maior entre a, b e c
    printf("%d eh o maior\n",MABC);// Imprime o maior valor
    return 0;
}
