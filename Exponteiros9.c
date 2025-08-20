#include <stdio.h>

int main() {
    int mat[4][5] = {0};
    mat[1][3] = 42;

    printf("%d\n", *(*(mat + 1) + 3)); 
    printf("%d\n", *(mat[1] + 3));    
    printf("%d\n", mat[1][3]);       

    return 0;
}
