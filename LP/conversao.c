#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    int t, hrs, min, seg; //declaração de variaveis
    scanf("%d", &t);//leitura de variavel
    hrs = t/3600; //transforma a entrada em horas, segundos e minutos
    t-= hrs*3600;
    min = t/60;
    t -= min*60;
    printf("%d:%d:%d\n", hrs, min, t); //imprime as horas
 
    return 0;
}
