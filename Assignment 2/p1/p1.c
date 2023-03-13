#include <stdio.h>

void increment(int *num);

int main() {
    int num = 0;

    void (*increment_ptr)(int *);

    increment_ptr = &increment;

    (*increment_ptr)(&num);

    printf("num = %d\n", num);

    return 0;
}

void increment(int *num) {
    (*num)++;
}
