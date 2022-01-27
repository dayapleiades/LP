#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Inclusão de bibliotecas
 
int main() { // Programa principal
 
    int X, Y, Notas100, Notas50, Notas20,Notas10, Notas5, Notas2, Moedas1; // Declaração da variável 
    scanf("%d", &X); // Leitura da variavel 
    
    Y=X;
    
    Notas100 = Y / 100; // Calcula a quantidade de notas de 100 reais
    Y = Y - (Notas100 *100);
    
    Notas50 = Y / 50; // Calcula a quantidade de notas de 50 reais
    Y = Y - (Notas50 * 50);
    
    Notas20 = Y / 20; // Calcula a quantidade de notas 20 reais
    Y = Y - (Notas20 * 20);
    
    Notas10 = Y /10; // Calcula a quantidade de notas de 10 reais
    Y = Y -(Notas10 * 10);
    
    Notas5 = Y / 5; // Calcula a quantidade de notas de 5 reais
    Y = Y - (Notas5 * 5);
    
    Notas2 = Y / 2; // Calcula a quantidade de notas de 2 reais
    Y = Y - (Notas2 * 2);

    Moedas1 = Y; // Calcula a quantidade de moedas de 1 real
    Y = Y - Moedas1;

    printf("%d\n",X);// Imprime o valor 
    printf("%d nota(s) de R$ 100,00\n",Notas100); // Imprime a quantidade de notas de 100
    printf("%d nota(s) de R$ 50,00\n",Notas50); // Imprime a quantidade de notas de 50
    printf("%d nota(s) de R$ 20,00\n",Notas20); // Imprime a quantidade de notas de 20
    printf("%d nota(s) de R$ 10,00\n",Notas10); // Imprime a quantidade de notas de 10
    printf("%d nota(s) de R$ 5,00\n",Notas5); // Imprime a quantidade de notas de 5
    printf("%d nota(s) de R$ 2,00\n",Notas2); // Imprime a quantidade de notas de 2
    printf("%d nota(s) de R$ 1,00\n",Moedas1); // Imprime a quantidade de notas de 1
    return 0;
}
