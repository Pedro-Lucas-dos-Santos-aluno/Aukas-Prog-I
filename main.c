#include <stdio.h>

int main() {
    char frase[] = "não gosto de programar em C";
    char *p = frase + 4; // Pula "não "
    printf("%s\n", p);
    return 0;
}
