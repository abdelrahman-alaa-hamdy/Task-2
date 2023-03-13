 #include <stdio.h>

int main() {
    int hexValue = 0x00FFA5;

    int *ptr = &hexValue;

    printf("*ptr++ = %x\n", *ptr++);//his operation first dereferences the pointer ptr to get the value stored in the memory location Then, it increments the pointer ptr to point to the next memory location.
    printf("*++ptr = %x\n", *++ptr); 
    printf("++*ptr = %x\n", ++*ptr); // 
    return 0;
}
