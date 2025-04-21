/* Faça um programa que leia duas strings (A e B) e indique a posição que ocorre A em B, 
caso contrário, quando A não ocorrer em B, o programa deverá apresentar o valor -1. Não use as funções da string.h.*/

#include <stdio.h>

int calcula_tamanho(char B[]) {
    int cont = 0;
    while (B[cont] != '\0') {  
        cont++;
    }
    return cont;
}

int main () {
    char A[30], B[30];
    int i, j;

    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    for (i = 0; A[i] != '\0'; i++) {
        if (A[i] == '\n') {
            A[i] = '\0';
            break;
        }
    }

    for (i = 0; B[i] != '\0'; i++) {
        if (B[i] == '\n') {
            B[i] = '\0';
            break;
        }
    }

    int tamanhoA = calcula_tamanho(A), tamanhoB = calcula_tamanho(B);

    for (i = 0; i <= tamanhoB - tamanhoA; i++) {  
        for (j = 0; j < tamanhoA && A[j] == B[i + j]; j++) {
            if (j == tamanhoA) {
                printf("%d\n", i);  
                return 0;
            }
        }
    }

    printf("-1");

    return 0;
}
