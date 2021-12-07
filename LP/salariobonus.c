#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>
 
int main() { // Programa principal
 
    double TOTALV, SALFIXO, SALTOTAL; // Declaração de variaveis duplas
    char NOMEF; // Declaração de caractere
    scanf("%s", &NOMEF); // Leitura de varíáveis caractere
    scanf("%lf", &SALFIXO); // Leitura de variáveis duplas
    scanf("%lf", &TOTALV); // Leitura de variáveis duplas
    SALTOTAL = ((TOTALV*0.15)+SALFIXO); // Cálculo do salario
    printf("TOTAL = R$ %.2lf\n", SALTOTAL); // Imprime o salario total
    return 0;
}
