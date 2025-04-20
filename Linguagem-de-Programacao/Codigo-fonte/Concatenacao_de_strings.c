/*E31) Faça um programa que leia DUAS string (A e B) com até 100 símbolos cada, concatene o conteúdo da String B na string A e apresente o conteúdo da String A. Não deverá fazer uso da função strcat ou strcpy.*/

#include <stdio.h>

int main() {
    char A[100], B[100];
    int i, j;

    scanf("%99[^\n]%*c\n", A);
    scanf("%99[^\n]%*c\n", B);

    for (i = 0; A[i] != '\0'; i++);

    for (j = 0; B[j] != '\0' && i < 99; j++) {
        A[i++] = B[j];
    }
    A[i] = '\0';

    printf("%s\n", A);
    return 0;
}
