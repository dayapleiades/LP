#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    int diasT, anos, meses, dias; //declaração de variaveis
    scanf("%d", &diasT);//leitura de variavel
    anos = diasT/365; //transforma a entrada em anos, meses e dias
    meses= (diasT%365)/30;
    dias= (diasT%365)%30;
    printf("%d anos(s)\n%d mes(es)\n%d dia(s)\n", anos,meses,dias); //imprime a idade em anos, meses e dias
    return 0;
}
