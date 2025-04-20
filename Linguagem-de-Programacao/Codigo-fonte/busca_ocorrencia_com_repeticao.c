/*E2_21) Faça um programa que leia 10 valores e armazene-os em um vetor.
Na sequência, leia um número e procure esse número no vetor. E apresente o índice de todas as ocorrências localizadas, caso contrário -1.*/

#include <stdio.h>
#define TAM 10

int main() {
    int valores[TAM], i, num, encontrou = 0;

    for (i = 0; i < TAM; i++) {
        scanf("%d", &valores[i]);
    }

    scanf("%d", &num);

    for (i = 0; i < TAM; i++) {
        if (valores[i] == num) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("%d", i);
    }

    return 0;
}
