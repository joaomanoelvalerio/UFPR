/*E2_11) Faça um programa que leia 10 números, armazene-os em um vetor e apresente os 5 (cinco) números que estão nas posições ímpares.*/

#include <stdio.h>
#define TAM 10

int main ()
{
    int arr[TAM], i;
    for (i = 0; i < TAM; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < TAM; i++) {
        if (i & 1) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
