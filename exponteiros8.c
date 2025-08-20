#include <stdio.h>

int main() {
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = mat;
    ptr++;
    printf("%d\n", (*ptr)[2]); 
    return 0;
}
