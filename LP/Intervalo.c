#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
    
    double X; // Declaração de variavel double
    scanf("%lf", &X); // Leitura das variaveis
    if (X<0 || X>100.0) {  // Se X for menor que zero ou maior que cem
      printf("Fora de intervalo\n"); // Imprime a condição de erro
    }
    else if (X<=25.0) { // Se X for menor ou igual a vinte e cinco
      printf("Intervalo [0,25]\n"); // Imprime a condição entre 0 e 25
    }
    else if (X<=50.0) { // Se X for menor ou igual a cinquenta
      printf("Intervalo (25,50]\n"); // Imprime a condição entre 26 e 50
    }
    else if (X<=75.0) { // Se X for menor ou igual a setenta e cinco
      printf("Intervalo (50,75]\n"); // Imprime a condição entre 51 e 75
    }
    else if (X<=100.0) { // Se X for menor ou igual a cem
      printf("Intervalo (75,100]\n"); // Imprime a condição entre 76 e 100
    }
    return 0;
}
