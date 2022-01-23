#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
  
int main(){
     
    double X; //declaração de variaveis double
    int Y, Notas100, Notas50, Notas20, Notas10, Notas5, Notas2, Moedas1, Moedas50, Moedas25, Moedas10, Moedas05, Moedas01; //declaração de variaveis inteiras
    scanf("%lf", &X); //leitura de variaveis double
    Y = X * 100;  // atribuindo o valor a variavel auxiliar
    Notas100 = Y / 10000; // calculando a quantidade de notas
    Y = Y % 10000;
    Notas50 = Y / 5000;
    Y = Y % 5000;
    Notas20 = Y / 2000;
    Y = Y % 2000;
    Notas10 = Y / 1000;
    Y = Y % 1000;
    Notas5 = Y / 500;
    Y = Y % 500;
    Notas2 = Y / 200;
    Y = Y % 200;
    //Moedas
    Moedas1 = Y / 100; // calculando a quantidade de moedas
    Y = Y % 100;
    Moedas50 = Y / 50;
    Y = Y % 50;
    Moedas25 = Y / 25;
    Y = Y % 25;
    Moedas10 = Y / 10;
    Y = Y % 10;
    Moedas05 = Y / 5;
    Y = Y % 5;
    Moedas01 = Y / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",Notas100); // imprime a quantidade de notas de 100
    printf("%d nota(s) de R$ 50.00\n",Notas50);// imprime a quantidade de notas de 50
    printf("%d nota(s) de R$ 20.00\n",Notas20);// imprime a quantidade de notas de 20
    printf("%d nota(s) de R$ 10.00\n",Notas10);// imprime a quantidade de notas de 10
    printf("%d nota(s) de R$ 5.00\n",Notas5);// imprime a quantidade de notas de 5
    printf("%d nota(s) de R$ 2.00\n",Notas2);// imprime a quantidade de notas de 2
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",Moedas1); // imprime a quantidade de moedas de 1
    printf("%d moeda(s) de R$ 0.50\n",Moedas50);// imprime a quantidade de moedas de 50
    printf("%d moeda(s) de R$ 0.25\n",Moedas25);// imprime a quantidade de moedas de 20
    printf("%d moeda(s) de R$ 0.10\n",Moedas10);// imprime a quantidade de moedas de 10
    printf("%d moeda(s) de R$ 0.05\n",Moedas05);// imprime a quantidade de moedas de 5
    printf("%d moeda(s) de R$ 0.01\n",Moedas01);// imprime a quantidade de moedas de 01

    return 0;
}
