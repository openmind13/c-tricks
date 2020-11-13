#include <stdio.h>

int main() {
    int i = 0;
    while(1) {
        alloca(1024);
        i++;
        printf("%d on stack\n", i);
    }
    return 0;
}