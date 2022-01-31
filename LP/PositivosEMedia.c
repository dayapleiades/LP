#include <stdio.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    double val1, val2, val3, val4, val5, val6, med; // Declaraçãod e variaveis double
    int veri = 0; // O valor zero é atribuido a variavel veri inteira
    scanf("%lf %lf %lf %lf %lf %lf", &val1, &val2, &val3, &val4, &val5, &val6); // Leitura das variaveis double 
    if (val1 > 0 ) { // Se val1 for maior que zero
        veri = veri + 1; // Adiciona 1
        med = med + val1; // Adiciona o valor de Val1 para o contador de média
    }
    if (val2 > 0 ) { // Se val2 for maior que zero
        veri = veri + 1; // Adiciona 1
        med = med + val2; // Adiciona o valor de Val2 para o contador de média
    }
    if (val3 > 0 ) { // Se val3 for maior que zero
        veri = veri + 1; // Adiciona 1
        med = med + val3; // Adiciona o valor de Val3 para o contador de média
    }
    if (val4 > 0 ) { // Se val4 for maior que zero
        veri = veri + 1; // Adiciona 1
        med = med + val4; // Adiciona o valor de Val4 para o contador de média
    }
    if (val5 > 0 ) { // Se val5 for maior que zero
        veri = veri + 1; // Adiciona 1
        med = med + val5; // Adiciona o valor de Val5 para o contador de média
    } 
    if (val6 > 0 ) { // Se val6 for maior que zero
        veri = veri + 1; // Adiciona 1
        med = med + val6; // Adiciona o valor de Val6 para o contador de média
    }
    med = med / veri; // Calcula a média 
    printf("%d valores positivos\n", veri); // Imprime os valores positivos
    printf("%.1lf\n", med); // Imprime a média
    return 0;
}
