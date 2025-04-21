/*Faça um programa que leia 10 valores e armazene-os em um vetor. 
Na sequência, apresente os valores contidos no vetor, onde a diferença entre os valores contidos em dois elementos sucessivos não seja maior do que um.*/

#include <stdio.h>

int main () {
    int vetor[10], i = 0, j = 1, temp;

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++, j++) {
        temp = 0;
        if (vetor[i] - vetor[j] < 0) {
            temp = (vetor[i] - vetor[j]) * -1;
        } else {
            temp = vetor[i] - vetor[j]
        }

        if (temp <= 1) {
            printf("%d %d\n", vetor[i], vetor[j]);
        }
    }

    return 0;
}