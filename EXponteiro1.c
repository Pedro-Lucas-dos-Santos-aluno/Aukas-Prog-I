#include <stdio.h>

int main() {
    char frase[] = "nao gosto de programar em C";
    char *p = frase + 4;
    printf("%s\n", p);
    return 0;
}