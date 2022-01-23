#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() {
    
    double X;
    scanf("%lf", &X); //leitura das variaveis
    if (X<0 || X>100.0) {
      printf("Fora de intervalo\n"); // imprime a condição de erro
    }
    else if (X<=25.0) {
      printf("Intervalo [0,25]\n"); // imprime a condição entre 0 e 25
    }
    else if (X<=50.0) {
      printf("Intervalo (25,50]\n"); // imprime a condição entre 26 e 50
    }
    else if (X<=75.0) {
      printf("Intervalo (50,75]\n"); // imprime a condição entre 51 e 75
    }
    else if (X<=100.0) {
      printf("Intervalo (75,100]\n"); // imprime a condição entre 76 e 100
    }
    return 0;
}
