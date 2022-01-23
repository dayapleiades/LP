#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
  
int main(){
     
    int A,B,C,D; //declaração de variaveis inteiras
    scanf("%d %d %d %d", &A, &B, &C, &D); //leitura de variaveis inteiras
        if(B>C && D>A && C+D > A+B && C >0 && D>0 && A%2==0){ // verifica as especificações
          printf("Valores aceitos\n"); // verdadeiro
        }
        else{
          printf("Valores nao aceitos\n"); //falso
        }
    return 0;
}
