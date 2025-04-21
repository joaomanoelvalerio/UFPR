/*Faça um programa que leia 10 valores e armazene-os em um vetor. Na sequência, apresente os valores do maior para o menor.*/

#include <stdio.h>

int main() {
    int vetor[10], i, j, temp;

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
