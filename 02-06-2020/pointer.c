#include <stdio.h>

int main() {
    int * num_ptr; // create variables
    int num = 6;

    printf("num is %d with the address %p\n", num, &num);
    printf("num_ptr points to %p and content is %d with the num_ptr address of %p\n", num_ptr, *num_ptr, &num_ptr);
    // now, num_ptr now points to the address of num, hence the syntax num_ptr = &num
    num_ptr = &num; 
    printf("Now, num_ptr now points to %p with value %d with the address of %p\n", num_ptr, *num_ptr, &num_ptr);

    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    temp = num2;
    num2 = num1;
    num1 = temp;
    printf("Swapped values: %d %d\n", num1, num2);
}