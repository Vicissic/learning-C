#include <stdio.h>
int main(void) {
    int a = 1;
    // size_t is an unsigned integer type of at least 2 bytes used to represent
    // the size of an object.
    size_t size = sizeof(a++); // a++ is not evaluated
    printf("sizeof(a++) = %zu where a = %d\n", size, a);
    return 0;
}
