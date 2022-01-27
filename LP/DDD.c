#include <stdio.h>
#include <math.h> //inclusão de bibliotecas

int main() //programa principal
{
    int DDD; //declaração da variavel inteira
    scanf ("%d", &DDD); //leitura da variavel
        if(DDD == 61){ //Se DDD for igual a 61
                printf("Brasilia\n");} //imprima Brasilia
            if(DDD == 71){ //Se DDD for igual a 71
                    printf("Salvador\n");} //imprima Salvador
                if(DDD == 11){ //Se DDD for igual a 11
                        printf("Sao Paulo\n");} //imprima Sao Paulo
                    if(DDD == 21){ //Se DDD for igual a 21
                            printf("Rio de Janeiro\n");} //imprima Rio de Janeiro
                        if(DDD == 32){ //Se DDD for igual a 32
                                printf("Juiz de Fora\n");} //imprima Juiz de Fora
                            if(DDD == 19) { //Se DDD for igual a 19
                                    printf("Campinas\n");} //imprima Campinas
                                if(DDD == 27) { //Se DDD for igual a 27
                                        printf("Vitoria\n");} //imprima Vitoria
                                    if(DDD == 31){ //Se DDD for igual a 31
                                            printf("Belo Horizonte\n");} //imprima Belo Horizonte
                                        else if (DDD != 11 && DDD != 61 && DDD != 71 && DDD != 21 && DDD != 32 && DDD != 19 && DDD != 27 && DDD != 31){ // Se DDD inserido não for 11, 61, 71, 21, 32, 19, 27, 31
                                                printf("DDD nao cadastrado\n");} //imprima DDD não cadastrado
                        
    return 0;
}
