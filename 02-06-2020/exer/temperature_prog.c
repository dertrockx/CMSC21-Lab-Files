#include <stdio.h>
#include "temperature.h"

void main() {
    double temp;
    // asks for temperature in celcius
    printf("Enter temperature ( in celcius ) ");
    scanf("%lf", &temp);
    // converts from celcius to fahrenheit
    temp = cel_to_fahr(temp);
    printf("Now, in fahrenheit: %.2lf\n", temp);
    // asks for temperature in fahrenheit
    printf("Now, enter temperature ( in fahrenheit ) ");
    scanf("%lf", &temp);
    // converts from fahrenheit to celcius
    temp = fahr_to_cel(temp);
    printf("Now, in celcius: %.2lf\n", temp);
}