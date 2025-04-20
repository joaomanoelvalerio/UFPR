/*Faça um programa que leia três valores inteiros (a0, r e n), onde a0 será o primeiro termo, r é a razão da progressão e n o número de termos. Apresente um termo em cada linha. Lembre-se que na progressão geométrica o termo atual é igual o termo anterior multiplicado pela razão ou an=a1*qn-1*/

#include <stdio.h>

int main () {
    int a0, r, n;
    scanf("%d", &a0);
    scanf("%d", &r);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) { 
        printf("%d\n", a0);
	a0 = a0 * r;
    } 
}
