#include <stdio.h>

int main() {
    int i = 10;
    char c = 'A';
    long long x = 123456789;

    int *p1 = &i;
    char *p2 = &c;
    long long *p3 = &x;

    p1++;
    p2++;
    p3++;

    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);
    printf("p3: %p\n", p3);
    printf("to increment in pointers it just increment to the next location in the memory with the same size for every variable like p1 is incremented by 4 bytes");
    return 0;
}
