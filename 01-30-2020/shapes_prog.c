#include <stdio.h>
#include "area_shapes.h"
/*
    Formal parameters - parameter of the user-defined function
    Actual parameters - parameter of the function when being called

*/



void main() {
    // variable declaration
    double radius;
    int side;

    printf("Enter radius: ");
    scanf("%lf", &radius);
                                        // actual parameter
    printf("Answer is %lf\n",  area_circle(radius)  );
}