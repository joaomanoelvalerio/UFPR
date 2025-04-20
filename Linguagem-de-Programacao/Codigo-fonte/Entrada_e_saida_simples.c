/*Faça um programa em C que leia nessa ordem:
a) um valor inteiro e apresente-o (scanf com %d).
b) uma tecla e apresente o código ASCII, um espaço e o símbolo correspondente (use as funções para ler teclas - getch/getchar)
c) um ponto flutuante (scanf %f) e apresente com %.2f - veja o ponto antes do 2f)
d) leia um texto (char texto[100]) usando a função gets(texto) e apresente-o com printf usando o %s.

Após cada saída deverá conter uma quebra de linha (\n) e não deverá ter mais nenhuma outra informação, seja para orientar a entrada ou a saída.*/
#include <stdio.h>

int main ()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", a);

    while (getchar() != '\n');

    char tecla = getchar();
    printf("%d %c\n", tecla, tecla);

    float flutuante;
    scanf("%f", &flutuante);
    printf("%.2f\n", flutuante);

    while (getchar() != '\n');

    char texto[100];
    fgets(texto, sizeof(texto), stdin);
    printf("%s", texto);

    return 0;
}
