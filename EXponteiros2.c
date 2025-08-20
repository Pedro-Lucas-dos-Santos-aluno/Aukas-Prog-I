#include <stdio.h>
#include <strings.h>
int main() {
    int mat[4][4], x, count = 0;
    int *p = &mat[0][0];

    printf("Digite os 16 valores da matriz 4x4:\n");
    for (int i = 0; i < 16; i++) {
        scanf("%d", p + i);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (int i = 0; i < 16; i++) {
        if (*(p + i) == x) count++;
    }

    printf("O valor %d aparece %d vezes.\n", x, count);
    return 0;
}