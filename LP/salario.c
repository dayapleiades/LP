#include <stdio.h> // Inclusão de bibliotecas
#include <math.h>
 
int main() { // Programa principal
 
    double VH, SAL; // Declaração de variáveis duplas
    int NF, HT; // Declaração de variáveis inteiras
    scanf("%d", &NF); // Leitura de variáveis inteiras
    scanf("%d", &HT); // Leitura de variáveis inteiras
    scanf("%lf", &VH); // Leitura de variáveis duplas
    SAL = HT * VH; // Cálculo do salario
    printf("NUMBER = %d\n", NF); // Imprime o número do funcionario
    printf("SALARY = U$ %.2lf\n", SAL); // Imprime o salario 
    return 0;
}
