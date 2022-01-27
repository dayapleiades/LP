#include <stdio.h>
#include <stdlib.h> 
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int diasT, anos, meses, dias; // Declaração de variaveis
    scanf("%d", &diasT);// Leitura de variavel
    anos = diasT/365; // Transforma a entrada em anos, meses e dias
    meses= (diasT%365)/30; 
    dias= (diasT%365)%30;
    printf("%d anos(s)\n%d mes(es)\n%d dia(s)\n", anos,meses,dias); // Imprime a idade em anos, meses e dias
    return 0;
}
