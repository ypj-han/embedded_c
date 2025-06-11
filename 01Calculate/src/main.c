#include <stdio.h>
#include "calculator.h"

int main() {
    int a = 10, b = 5;

    printf("Calculator test:\n");
    printf("%d + %d = %d\n", a, b, add(a,b));
    printf("%d - %d = %d\n", a, b, subtract(a,b));
    printf("%d * %d = %d\n", a, b, multiply(a,b));

    return 0;
}