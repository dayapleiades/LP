#include <stdio.h>
 
int main() { //programa principal
 
    int a, b, veri; //declaração de variaveis inteiras
    scanf("%d %d", &a, &b); //leitura de variaveis inteiras
    if (a % b == 0 || b % a == 0){ //verifica se os numeros são multiplos
        printf("Sao Multiplos\n"); // imprime são multiplos em caso verdadeiro
    }
    else {
        printf("Nao sao Multiplos\n"); // imprime não são multiplos em caso falso
    }
    return 0;
}
