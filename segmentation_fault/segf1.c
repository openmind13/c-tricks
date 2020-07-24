#include <stdio.h>

int i = 0;

int main() {
    i++;
    printf("iteration = %d\n", i);

    // stack overflow
    main();

    return 0;
}