/*Faça um programa em C que leia dois valores inteiros A e B. Depois apresente todos os números, em ordem crescente, entre A e B (inclusive). Apresente um número inteiro por linha.*/

#include <stdio.h>

int main()
{
    int A, B, i;
    scanf("%d", &A);
    scanf("%d", &B);

    if (A < B)
    {
        for (i = A; i <= B; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (i = B; i <= A; i++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
