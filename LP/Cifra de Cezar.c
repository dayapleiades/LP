#include <stdio.h> // Inclusão de bibliotecas
#include <string.h>
 
int main() { // Programa principal
    int n, skip, i, j = 0, tam; // Declaração de variáveis inteiras 
    char codigo[50], aux[50]; // Declaração de variáveis caracter
    scanf("%d", &n); // Leitura do número de testes
    for (i = 0; i < n; i++) { // Realiza todos os testes
        scanf("%s", codigo); // Leitura da palavra a ser codificada
        scanf("%d", &skip); // Leitura das posições puladas
        if (skip >= 0 && skip <= 25) { // Se o número de posições estiver entre 0 e 25 então
            tam = strlen(codigo); // Tam recebe o número de caracteres no código
            for (j = 0; j < tam; j++) { // Verifica todos os caracteres
              aux[j] = codigo[j] - skip; // Retorna posições
              if ((codigo[j] - skip) > 90) { // Caso a subtração ultrapasse Z
                aux[j] -= 26; // Retorna 26 posições
              }
              else if ((codigo[j] - skip) < 65) { // Caso a subtração seja menor que A
                aux[j] += 26; // Avança 26 posições
              }
            }
            aux[j] = '\0'; // Reseta a variável auxiliar
            printf("%s", aux); // Printa a palavra codificada
        }
        else {
            printf("Valor inválido \n");
            break; // Em caso de erro finalizar programa
        }
      printf("\n"); // Quebra de linha
    }
    return 0;
}
