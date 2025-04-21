/*Faça um programa que leia 10 valores e armazene-os em um vetor. 
Na sequência, leia dois valores inteiros que estejam entre 0 e 9 (índices a e b) e apresente os valores lidos (vetor) que estejam entre os índices a e b.*/

#include <stdio.h>

int main () {
    int matriz[10], i, a, b;

    for (i = 0; i < 10; i++) {
        scanf("%d", &matriz[i]);
    }

    scanf("%d", &a);
    scanf("%d", &b);

    for (i = a + 1; i <= b; i++) {
        printf("%d\n", matriz[i + 1]);
    }

    return 0;
}