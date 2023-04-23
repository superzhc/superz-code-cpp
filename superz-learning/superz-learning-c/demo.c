#include "stdio.h"

int main() {
    int a = 10;
    int *p = &a;

    if (p == a) {
        printf("equal");
    } else {
        printf("not");
    }

    return 0;
}