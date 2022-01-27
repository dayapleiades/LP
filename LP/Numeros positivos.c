#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    double val1, val2, val3, val4, val5, val6; // Declaração das variaveis double
    int veri = 0; // Adicionando valor de zero a variavel
    scanf("%lf %lf %lf %lf %lf %lf", &val1, &val2, &val3, &val4, &val5, &val6); // Leitura das variaveis doubles
    if (val1 > 0 ) { // Se val1 for maior que zero 
        veri = veri + 1; // Adiciona 1
    }
    if (val2 > 0 ) { // Se val2 for maior que zero 
        veri = veri + 1; // Adiciona 1
    }
    if (val3 > 0 ) { // Se val3 for maior que zero 
        veri = veri + 1; // Adiciona 1
    }
    if (val4 > 0 ) { // Se val4 for maior que zero 
        veri = veri + 1; // Adiciona 1
    }
    if (val5 > 0 ) { // Se val5 for maior que zero 
        veri = veri + 1; // Adiciona 1
    }
    if (val6 > 0 ) { // Se val6 for maior que zero 
        veri = veri + 1; // Adiciona 1
    }
    printf("%d valores positivos\n", veri); // Imprime valores positivos
    return 0;
}
