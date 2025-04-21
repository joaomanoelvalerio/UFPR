/*Faça um programa que leia uma string e apresente-a o texto de forma que inverta a caixa do texto, 
ou seja, imprima as letras originalmente minúsculas em maiúsculas e vice-versa.*/

#include <stdio.h>

int calcula_tamanho(char A[]) {
    int cont = 0;
    while (A[cont] != '\0') {  
        cont++;
    }
    return cont;
}

int main () {
    char texto[30];
    int i;
    fgets(texto, sizeof(texto), stdin);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }

    for (i = 0; i < calcula_tamanho(texto); i++) {
        if (texto[i] > 64 && texto[i] < 91) {
            texto[i] = texto[i] + 32;
        } else if (texto[i] > 96 && texto[i] < 123) {
            texto[i] = texto[i] - 32;
        }
    }

    for (i = 0; i < calcula_tamanho(texto); i++) {
        printf("%c", texto[i]);
    }

    return 0;
}