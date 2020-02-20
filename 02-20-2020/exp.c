#include <stdio.h>
#include "exponent.h"

void main() {
    double num;
    int exp;
    printf("Enter num and exponent ( format: num,exponent ): ");
    scanf("%lf,%i", &num, &exp);
    printf("%lf raised to %i is %f\n", num, exp, power(num, exp));

}