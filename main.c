#include <stdio.h>
#include "calc.h"

int main() {
    int a = 3, b = 4;
    printf("add: %d + %d = %d\n", a, b, add(a, b));
    printf("mul: %d * %d = %d\n", a, b, mul(a, b));
    return 0;
}
