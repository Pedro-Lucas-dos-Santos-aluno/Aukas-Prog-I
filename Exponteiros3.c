#include <stdio.h>
#include <strings.h>

int contar (char *str) {
    int count = 0;
    while (*str) {
        if(*str == ' ')
        count++;
        str++;
    }

    return count;
}

int main() {
    char texto[100];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    printf("O texto possui %d espacos em branco.\n", contar(texto));
    return 0;
}