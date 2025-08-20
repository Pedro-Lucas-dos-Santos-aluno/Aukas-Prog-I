#include <stdio.h>
#define MAX 255

int main() {
    char str[MAX], caractere;
    char *p;
    int count = 0, i = 0;

    printf("Entre com a string: ");
    fgets(str, MAX, stdin);

    printf("Entre com o caractere: ");
    scanf("%c", &caractere);

    for (p = str; *p != '\0'; p++, i++) {
        if (*p == caractere) {
            printf("%d\n", i);
            count++;
        }
    }

    if (count == 0)
        printf("-1\n");

    return 0;
}
