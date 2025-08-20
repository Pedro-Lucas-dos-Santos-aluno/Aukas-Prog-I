#include <stdio.h>

int main() {
    int a = 20, b = 15;
    int *p1 = &a;
    int *p2 = &b;
    int **pp1 = &p1;
    int **pp2 = &p2;

    *pp1 = *pp2;  

    **pp1 = (*p2 += **pp1);
  
    b = (pp1 == &p1) + (*pp1 == &a);

 
    *pp1 = (p1 && p2);

    a = (*pp1 == *pp2) ? **pp2 : **pp1;

    printf("a=%d, b=%d\n", a, b);
    return 0;
}
