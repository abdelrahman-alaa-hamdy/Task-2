#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};

    
    int *ptr = arr;

    
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf(" %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
