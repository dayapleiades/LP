#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int t, hrs, min, seg; // Declaração de variaveis
    scanf("%d", &t);// Leitura de variavel
    hrs = t/3600; // Transforma a entrada em horas, segundos e minutos
    t-= hrs*3600;
    min = t/60;
    t -= min*60;
    printf("%d:%d:%d\n", hrs, min, t); // Imprime as horas
 
    return 0;
}
