#include "add_tmp.h"

int add1(int a, int b) {
    if (a > 1) {
        a = a + 1;
    }
    int x = add_temp(1, 1);
    return add_temp(a + 1, b);
}

