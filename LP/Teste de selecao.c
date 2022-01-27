#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
  
int main(){ // Programa principal
     
    int A,B,C,D; // Declaração de variaveis inteiras
    scanf("%d %d %d %d", &A, &B, &C, &D); // Leitura de variaveis inteiras
        if(B>C && D>A && C+D > A+B && C >0 && D>0 && A%2==0){ // Verifica as especificações
          printf("Valores aceitos\n"); // Vrdadeiro
        }
        else{
          printf("Valores nao aceitos\n"); // Falso
        }
    return 0;
}
