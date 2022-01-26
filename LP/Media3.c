#include <stdio.h>

int main() { //programa principal

    double n1, n2, n3, n4, ne, m; //declaração de variaveis double
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4); //leitura das variaveis double
    m = ((n1*2)+(n2*3)+(n3*4)+n4)/10; //calcula a média
    printf("Media: %.1lf\n", m); //imprime a média
    if (m >= 7) { //se a média for igual ou maior que sete
        printf("Aluno aprovado.\n"); //imprime aluno aprovado
    }
    else if (m>= 5 && m < 7){ //se a média for maior ou igual a cinco e menor que sete 
        printf("Aluno em exame.\n"); //imprime aluno em exame
        scanf("%lf", &ne); //leitura de variavel 
        printf("Nota do exame: %.1lf\n", ne); //imprime a nota do exame
        m = (m+ne)/2; //calcula a média depois do exame 
        if (m>= 5) { // se a média for maior ou igual a cinco
            printf("Aluno aprovado.\n"); //imprime aluno aprovado no exame
        }
        else {
            printf("Aluno reprovado.\n"); // se for contrário imprime aluno reprovado no exame 
        }
        printf("Media final: %.1lf\n", m); // imprime a média final
    }
    else {
        printf("Aluno reprovado.\n"); // imprime aluno reprovado na media final se a media for menor que sete
    }
    return 0;
}
