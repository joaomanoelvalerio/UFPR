/*E30) Faça um programa que leia uma string com até 1000 símbolos e apresente o tamanho da string. Não deverá fazer uso da função strlen.*/

#include <stdio.h>

int main() {
    char str[1000];
    int i;

    gets(str);

    for (i = 0; str[i] != '\0'; i++);

    printf("%d", i - 1);
    return 0;
}
