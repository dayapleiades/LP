#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    int A,B,C,MAB,MABC; //declaração da variável 
    scanf("%d %d %d", &A, &B, &C); //leitura da variavel 
    MAB = (A+B+abs(A-B))/2; // calcula o maior entre a e b
    MABC = (MAB+C+abs(MAB-C))/2; // calcula o maior entre a, b e c
    printf("%d eh o maior\n",MABC);//imprime o maior valor
    return 0;
}
