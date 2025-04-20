/*E2_14) Faça um programa que leia uma matriz de inteiros de 3x4 e apresente a soma de cada coluna. A saída deverá ter um número por linha.*/

#include <stdio.h>

int main()
{
    int matriz[3][4], soma, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 4; j++)
    {
        soma = 0;
        for (i = 0; i < 3; i++)
        {
            soma += matriz[i][j];
        }
        printf("%d\n", soma);
    }

    return 0;
}

