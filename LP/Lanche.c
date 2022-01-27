#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int cod, quant; // Declaração de variaveis inteiras
    double valorpag; // Declaração de variaveis double
    scanf("%d %d", &cod, &quant); // Leitura de variaveis inteiras
    if (cod == 1){ // Condição se o código for igual a um
        valorpag = quant*4;// Calcula o valor a pagar
    }
    else if (cod==2){ // Condição se o código for igual a dois
        valorpag = quant*4.5; // Calcula o valor a pagar
    }
    else if (cod==3){ // Condição se o código for igual a três
        valorpag = quant*5; // Calcula o valor a pagar
    }
    else if (cod==4){ // Condição se o código for igual a quatro
        valorpag = quant*2; // Calcula o valor a pagar
    }
    else if (cod==5){ // Condição se o código for igual a cinco
        valorpag = quant*1.5; // Calcula o valor a pagar
    }
    printf("Total: R$ %.2lf\n", valorpag); // Imprime o valor a pagar
    return 0;
}
