/*34) Faça um programa que leia uma String (com até 100 símbolos) e leia um símbolo. 
O programa deverá procurar a ocorrência do símbolo na String. Se o símbolo não for encontrado o programa deverá apresentar -1, 
caso contrário, deverá apresentar o índice do vetor que ocorre a primeira ocorrência do símbolo. 
Não poderar fazer uso das funções da biblioteca padrão iniciadas com str ou mem...*/

#include <stdio.h>

int main () {
    char texto[100], simbolo;
    int i;

    fgets(texto, sizeof(texto), stdin);
    scanf("%c", &simbolo);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == simbolo) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}