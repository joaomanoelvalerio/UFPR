/*Faça um programa que leia uma String e apresente todos os prefixos da string.*/

#include <stdio.h>

int main () {
    char texto[30];
    int i = 0, j = 0;
    fgets(texto, sizeof(texto), stdin);
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }

    for (i = 0; texto[i] != '\0'; i++) {
        for  (j = 0; j < i; j++) {
            printf("%c", texto[j]);
        }
    }


    return 0;
}