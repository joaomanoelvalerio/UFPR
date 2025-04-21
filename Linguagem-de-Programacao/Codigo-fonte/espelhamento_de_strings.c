/*Faça um programa que leia uma string e apresente-a na ordem inversa, do último símbolo para o primeiro. 
Não use funções da biblioteca padrão.*/

#include <stdio.h>

int calcula_tamanho(char a[]) {
    int i, j = 0;

    for (i = 0; a[i] != '\0'; i++) {
        j++;
    }

    return j;
}

int main () {

    char a[30];
    int i;

    fgets(a, sizeof(a), stdin);

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == '\n') {
            a[i] = '\0';
            break;
        }
    }

    int tamanho = calcula_tamanho(a);

    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }

    return 0;
}