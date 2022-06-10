#include <stdio.h>
#include "add.h"

int main() {
    int a = 7;
    int b = 14;
    int c = add1(a, b) + add1(b, a);
    printf("hello world\n");
    return 0;
}
