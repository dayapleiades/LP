#include <stdio.h>
#include <stdlib.h>
#include <math.h> //inclusão de bibliotecas
 
int main() { //programa principal
 
    int X, Y, Notas100, Notas50, Notas20,Notas10, Notas5, Notas2, Moedas1; //declaração da variável 
    scanf("%d", &X); //leitura da variavel 
    
    Y=X;
    
    Notas100 = Y / 100; // calcula a quantidade de notas de 100 reais
    Y = Y - (Notas100 *100);
    
    Notas50 = Y / 50; // calcula a quantidade de notas de 50 reais
    Y = Y - (Notas50 * 50);
    
    Notas20 = Y / 20; // calcula a quantidade de notas 20 reais
    Y = Y - (Notas20 * 20);
    
    Notas10 = Y /10; // calcula a quantidade de notas de 10 reais
    Y = Y -(Notas10 * 10);
    
    Notas5 = Y / 5; // calcula a quantidade de notas de 5 reais
    Y = Y - (Notas5 * 5);
    
    Notas2 = Y / 2; // calcula a quantidade de notas de 2 reais
    Y = Y - (Notas2 * 2);

    Moedas1 = Y; // calcula a quantidade de moedas de 1 real
    Y = Y - Moedas1;

    printf("%d\n",X);// imprime o valor 
    printf("%d nota(s) de R$ 100,00\n",Notas100); // imprime a quantidade de notas de 100
    printf("%d nota(s) de R$ 50,00\n",Notas50);// imprime a quantidade de notas de 50
    printf("%d nota(s) de R$ 20,00\n",Notas20);// imprime a quantidade de notas de 20
    printf("%d nota(s) de R$ 10,00\n",Notas10);// imprime a quantidade de notas de 10
    printf("%d nota(s) de R$ 5,00\n",Notas5);// imprime a quantidade de notas de 5
    printf("%d nota(s) de R$ 2,00\n",Notas2);// imprime a quantidade de notas de 2
    printf("%d nota(s) de R$ 1,00\n",Moedas1);// imprime a quantidade de notas de 1
    return 0;
}
