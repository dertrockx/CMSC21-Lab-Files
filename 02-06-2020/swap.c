#include <stdio.h>

// a and b are formal parameters
void swap(int * a, int * b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}