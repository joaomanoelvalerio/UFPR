/*Faça um programa que leia dois valores inteiros (nlin e ncol) e apresente uma tabela que tenha nlin linhas por ncol colunas.
O valor a ser apresentado em cada célula da tabela deverá apresentar o valor resultante da expressão linha*ncol+coluna.
Onde llinha varia de 0 até nlin-1 e coluna varia de 0 até ncol-1. Use UM ESPAÇO como delimitador entre as colunas.*/

#include <stdio.h>

int main () {
    int nlin, ncol, linha, coluna;
    scanf("%d", &nlin);
    scanf("%d", &ncol);

    for (linha = 0; linha <= nlin - 1; linha++) {
        for (coluna = 0; coluna <= ncol - 1; coluna++) {
            printf("%d ", linha * ncol + coluna);
        }
        printf("\n");
    }

    return 0;
}
