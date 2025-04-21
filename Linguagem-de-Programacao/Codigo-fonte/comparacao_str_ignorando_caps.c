/*Faça um programa que leia DUAS string (A e B) com até 100 símbolos cada e compare a String A com a String B ignorando a variação de caixa 
(considere as letras minúsculas e maiúsculas de forma equivalente). 
O programa deverá informar 0 se as duas tiverem o mesmo conteúdo, -1 se o conteúdo de A for menor que o conteúdo de B e caso contrário informe 1. 
Os conteúdos deverão ser comparados símbolo a símbolo e a igualdade ou diferença será dada pela análise do código ASCII de cada símbolo. 
A solução não poderá fazer uso da função strcmp,strcmpi, strupper, strlower, strcasecmp etc.*/

#include <stdio.h>

int main () {
    char A[100], B[100];
    int i;

    fgets(A, sizeof(A), stdin);

    for ( i = 0; A[i] != '\0'; i++) {
        if (A[i] == '\n') {
            A[i] = '\0';
            break;
        }
    }

    fgets(B, sizeof(B), stdin);

    for (i = 0; B[i] != '\0'; i++) {
        if (B[i] == '\n') {
            B[i] = '\0';
            break;
        }
    }

/*agora vou tornar tornar todas as maiúsculas em minúsculas*/

    for (i = 0; A[i] != '\0'; i++) {
        if (A[i] > 64 && A[i] < 91) {
            A[i] = A[i] + 32;
        }
    }

    for (i = 0; B[i] != '\0'; i++) {
        if (B[i] > 64 && B[i] < 91) {
            B[i] = B[i] + 32;
        }
    }

/*comparando..*/

    for (i = 0; i < 100; i++) {
        if (A[i] > B[i]) {
            printf("1");
            return 0;
        } else if (A[i] < B[i]) {
            printf("-1");
            return 0;
        } else if(B[i] != '\0' && A[i] == '\0') {
            printf("-1");
            return 0; 
        } else if (B[i] == '\0' && A[i] != '\0') {
            printf("1");
            return 0;
        } else if (A[i] == '\0' && B[i] == '\0') {
            printf("0");
            return 0;
        }
    }

    return 0;
}