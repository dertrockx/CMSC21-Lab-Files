#include <stdio.h>
// #include "divide.h"
#include "fibonacci.h"

void main(){
    /*
    int dividend, divisor, quotient;
    printf("Enter dividend and divisor (format: dividend / divisor):");
    scanf("%i/%i", &dividend, &divisor);
    quotient = divide(dividend, divisor);
    printf("Quotient: %i\n", quotient);
    */
    printf("Start of Fibonacci: ");
    int fib;
    scanf("%i", &fib);

    printf("Fibonacci sum: %i\n", fibonacci(fib));

}