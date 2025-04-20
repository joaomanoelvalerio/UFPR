/*E2_13) Faça um programa que leia uma matriz de inteiros de 3x3 e apresente os elementos da diagonal secundária.*/

#include <stdio.h>

int main() {
    int matriz[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%d\n", matriz[i][2 - i]);
    }

    return 0;
}
