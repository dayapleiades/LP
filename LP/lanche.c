#include <stdio.h>
 
int main() { //programa principal
 
    int cod, quant; //declaração de variaveis inteiras
    double valorpag; //declaração de variaveis double
    scanf("%d %d", &cod, &quant); //leitura de variaveis inteiras
    if (cod == 1){ //condição se o código for igual a um
        valorpag = quant*4;//calcula o valor a pagar
    }
    else if (cod==2){ //condição se o código for igual a dois
        valorpag = quant*4.5; //calcula o valor a pagar
    }
    else if (cod==3){ //condição se o código for igual a três
        valorpag = quant*5; //calcula o valor a pagar
    }
    else if (cod==4){ //condição se o código for igual a quatro
        valorpag = quant*2; //calcula o valor a pagar
    }
    else if (cod==5){ //condição se o código for igual a cinco
        valorpag = quant*1.5; //calcula o valor a pagar
    }
    printf("Total: R$ %.2lf\n", valorpag); //imprime o valor a pagar
    return 0;;
}
