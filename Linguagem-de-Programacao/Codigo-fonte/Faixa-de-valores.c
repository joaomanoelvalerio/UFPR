/*Faça um programa que leia quatro valores inteiros (x1,x2,y1,y2) e
apresente na forma de tabela os valores dos intervalores x1+y a x2+y para colunas e y representando as linhas no intervalor de y1 a y2. Nas repetições, inclua os valores de x2 e y2.*/

#include <stdio.h>

int main() {
    int x1, x2, y1, y2;

    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &y1);
    scanf("%d", &y2);

    for (int y = y1; y <= y2; y++) {
        for (int x = x1; x <= x2; x++) {
            printf("%d\t", y + x);
        }
        printf("\n");
    }

    return 0;
}
