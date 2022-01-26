#include <stdio.h>
 
int main() { //programa principal
 
    int n1, n2, n3; //declaração de variaveis inteiras 
    scanf("%d %d %d", &n1, &n2, &n3); // leitura de variaveis inteiras
    if(n1 <= n2 && n1 <= n3){ // condições se n1 for o menor numero
        printf("%d\n", n1); // imprime n1
        if (n2 <= n3) {  // condições se n2 for menor ou igual a n3
            printf("%d\n", n2);
            printf("%d\n", n3);
        }
        else {
            printf("%d\n", n3);
            printf("%d\n", n2);
        }
    }
    else if (n2 <= n1 && n2 <= n3){ // condições se n2 for o menor numero
        printf("%d\n", n2); // imprime n2
        if (n1 <= n3) { // condições se n1 for menor ou igual a n3
            printf("%d\n", n1); 
            printf("%d\n", n3);
        }
        else {
            printf("%d\n", n3);
            printf("%d\n", n1);
        }
    }
    else {    // condições se n3 for o menor numero
        printf("%d\n", n3); // imprime n3
        if (n1 <= n2) { // condições se n1 for menor ou igual a n2
            printf("%d\n", n1);
            printf("%d\n", n2);
        }
        else {
            printf("%d\n", n2);
            printf("%d\n", n1);
        }
    }
    printf("\n"); 
    printf("%d\n", n1);  // imprime n1
    printf("%d\n", n2);  // imprime n2
    printf("%d\n", n3);  // imprime n3
    return 0;
}
