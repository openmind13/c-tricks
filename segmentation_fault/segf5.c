#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5;
    int *ptr = &x;

    free(ptr);
    printf("%d\n", x);

    return 0;
}