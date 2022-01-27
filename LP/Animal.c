#include <stdio.h>
#include <string.h> // Inclusão de bibliotecas
int main() { // Programa principal
 
    char a[20], b[20] , c[20]; // Declaração das variaveis caractere
    scanf("%s %s %s", a, b, c); // Leitura das variaveis caractere
    if (strcmp(a,"vertebrado") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
        if (strcmp(b,"ave") == 0) {
            if (strcmp(c,"carnivoro") == 0) {
                printf("aguia\n"); // Imprime aguia
            }
            else if (strcmp(c,"onivoro") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
                printf("pomba\n"); // Imprime pomba
            }
        }
        else if (strcmp(b,"mamifero") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
            if (strcmp(c,"onivoro") == 0) {
                printf("homem\n"); // Imprime homem
            }
            else if (strcmp(c,"herbivoro") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
                printf("vaca\n"); // Imprime vaca
            }
        }
    }
    else if (strcmp(a,"invertebrado") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
        if (strcmp(b,"inseto") == 0) {
            if (strcmp(c,"hematofago") == 0) {
                printf("pulga\n"); // Imprime pulga
            }
            else if (strcmp(c,"herbivoro") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
                printf("lagarta\n"); // Imprime lagarta
            }
        }
        else if (strcmp(b,"anelideo") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
            if (strcmp(c,"hematofago") == 0) {
                printf("sanguessuga\n"); // Imprime sanguessuga
            }
            else if (strcmp(c,"onivoro") == 0) { // utilizando a função strcmp para verificar igualdade entre caracteres
                printf("minhoca\n"); // Imprime minhoca
            }
        }
    }
    return 0;
}
