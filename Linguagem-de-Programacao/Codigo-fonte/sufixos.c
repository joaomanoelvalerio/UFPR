/*Faça um programa que leia uma String e apresente todos os sufixos da string.*/

#include <stdio.h>

int calcula_tamanho(char B[]) {
    int cont = 0;
    while (B[cont] != '\0') {  
        cont++;
    }
    return cont;
}

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

    int tamanho = calcula_tamanho(texto);
    
    for (i = 0; i <= tamanho; i++) {
        for (j = i; j <= tamanho; j++) {
            printf("%c", texto[j]);
        }
        printf("\n");
    }

    return 0;
}