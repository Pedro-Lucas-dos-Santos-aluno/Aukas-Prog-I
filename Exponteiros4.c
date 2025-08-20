#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++) scanf("%d", vet + i);

    int *p1 = vet;
    int *p2 = vet + (n - 1);

    while (p1 <= p2) {
        printf("%d - %d\n", *p1, *p2);
        p1++;
        p2--;
    }

    free(vet);
    return 0;
}
