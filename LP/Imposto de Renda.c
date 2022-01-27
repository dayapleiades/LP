#include <stdio.h>
#include <math.h> //inclusão de bibliotecas

int main() //programa principal
{
    double Sal, Imp, Exce, Exce2; //declaração das variaveis double
    scanf ("%lf", &Sal); //leitura da variavel double Sal
        if(Sal >= 0.00 && Sal<=2000.00){ //Se salario for maior ou igual a 0 e menor ou igual a 2000
                printf("Isento\n"); //imprima Isento
        }
        else if(Sal >=2000.01 && Sal<=3000.00){ //Se salario for maior ou igual a 2000 e menor ou igual a 3000
            Imp=((Sal-2000.00)*0.08); //Calculo do imposto
            printf("R$ %.2lf\n",Imp); //imprime salario com imposto
        }
        else if(Sal >=3000.01 && Sal<=4500.00){ //Se salario for maior ou igual a 3000 e menor ou igual a 4500
            Exce = 1000.00*0.08; //Calculo do excedente
            Imp=((Sal-3000.00))*0.18 + Exce; //Calculo do imposto
            printf("R$ %.2lf\n",Imp); //imprime salario com imposto
        }
        else if (Sal > 4500.00){ //Se salario for maior a 4500
            Exce = 1000.00*0.08; //Calculo do excedente
            Exce2 = 1500.00*0.18; //Calculo do excedente 2
            Imp=((Sal-4500.00)*0.28)+ Exce + Exce2; //Calculo do imposto
            printf("R$ %.2lf\n",Imp); //imprime salario com imposto
        }
    return 0;
}
