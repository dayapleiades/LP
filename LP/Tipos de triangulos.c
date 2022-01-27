#include <stdio.h>
#include <math.h> //inclusão de bibliotecas

int main() //programa principal
{
    double A, B, C, D; //declaração de variaveis
    scanf ("%lf", &A); //leitura da variavel A
    scanf ("%lf", &B); //leitura da variavel B
    scanf ("%lf", &C); //leitura da variavel C
            if(A < B){ //Se A for menor que B
              D = A; // D igual a A
              A = B; // A igual a B
              B = D;} // B igual a D
              if(B < C){ //Se B for menor que C
                D = B; //D igual a B
                B = C; //B igual a C
                C = D;} //C igual a D
                if(A < B){ //Se A menor que B
                    D = A; //D igual a A
                    A = B; //A igual a B
                    B = D; //B igual a D
                }
                    if(A>=B+C){ //Se A for maior ou igual a B + C
                        printf("NAO FORMA TRIANGULO\n");} //imprima Não forma triangulo
                    else { if((A*A) == (B*B + C*C)){ //Se A multiplicado por A for igual a B vezes B somado a C vezes C
                            printf("TRIANGULO RETANGULO\n");} //imprima Triangulo retangulo
                        if((A*A) > (B*B + C*C)) { //Se A multiplicado por A for maior a B vezes B somado a C vezes C
                                printf("TRIANGULO OBTUSANGULO\n");} //imprima Triangulo obtusangulo
                            if(A*A < B*B + C*C) { //Se A multiplicado por A for menor a B vezes B somado a C vezes C
                                    printf("TRIANGULO ACUTANGULO\n");} //imprima Triangulo acutangulo
                                if(A==B && A==C && B==C){ //Se A for igual a B e A igual a C e B igual C
                                        printf("TRIANGULO EQUILATERO\n");} //imprima Triangulo equilatero 
                                    if(A==B && C!=B || C==A && B!=A || B==C && A!=C) { //Se A for igual B e C diferente de B ou C igual a A e B diferente de A ou B igual a C e A diferente de C
                                            printf("TRIANGULO ISOSCELES\n");} //imprima Triangulo isosceles
                    }
                        
    return 0;
}
