#include <stdio.h>
 
int main() { //programa principal
 
    double salario, novosalario, reajuste, percentual; //declaração de variaveis double
    scanf("%lf", &salario); //leitura de variaveis double
    if (salario >= 0 && salario <= 400) { //condição para percentual de 0.15
        percentual = 0.15; //a variavel adiquiri o valor
    }
    else if (salario > 400 && salario <= 800){ //condição para percentual de 0.12
        percentual = 0.12; //a variavel adiquiri o valor
    }
    else if (salario > 800 && salario <= 1200){ //condição para percentual de 0.1
        percentual = 0.1; //a variavel adiquiri o valor
    }
    else if (salario > 1200 && salario <= 2000){ //condição para percentual de 0.07
        percentual = 0.07; //a variavel adiquiri o valor
    }
    else if (salario > 2000){ //condição para percentual de 0.04
        percentual = 0.04; //a variavel adiquiri o valor
    }
    novosalario = salario + salario*percentual; //calculo do novo salario
    reajuste = novosalario - salario; //calculo do reajuste
    printf("Novo salario: %.2lf\n", novosalario); //imprime o novo salario
    printf("Reajuste ganho: %.2lf\n", reajuste); //imprime o rejauste 
    printf("Em percentual: %.0lf %\n", percentual*100); //imprime o percentual
    return 0;
}
