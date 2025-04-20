/*E2_20) Faça um programa que leia 10 valores e armazene-os em um vetor.
Na sequência, leia um número e procure esse número no vetor. Se encontrar, apresente o índice da posição da primeira que ocorrência do número, caso contrário apresente o valor -1.*/

#include <stdio.h>
#define TAM 10

int main ()
{
    int valores[TAM], i, num;

    for (i = 0; i < TAM; i++) {
        scanf("%d", &valores[i]);
    }

    scanf("%d", &num);

    for (i = 0; i < TAM; i++) {
        if (valores[i] == num) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
