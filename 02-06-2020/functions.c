#include <stdio.h>
#include "swap.h"

void main() {
    int *num1, *num2;
    printf("Enter two numbers: ");
    scanf("%d %d", num1, num2);

    swap(num1, num2);
    printf("Swapped values: %d %d\n", num1, num2);
}