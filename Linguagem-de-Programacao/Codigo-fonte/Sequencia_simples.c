/*Faça um programa que leia três valores inteiros (a0, razao e n). E apresente os "n" termos da progressão aritmética.
Apresente um termo em cada linha. Lembre-se que o próximo termo é dado pela soma do termo atual (ou inicial, a0) com o valor da razao.*/

#include <stdio.h>

int main () {
    int a0, razao, n;

    scanf("%d", &a0);
    scanf("%d", &razao);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", a0);
        a0 = a0 + razao;
    }
}
