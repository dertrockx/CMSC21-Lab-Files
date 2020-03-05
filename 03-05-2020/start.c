#include <stdio.h>
#include "practice.h"
#include "exer.h"







int main() {
    int my_numbers[10];

    // randomize numbers
    randomize( my_numbers, sizeof(my_numbers) / sizeof(int) );
    bubble_sort( my_numbers, sizeof(my_numbers) / sizeof(int) );
    // display contents
    display_contents( my_numbers, sizeof(my_numbers) / sizeof(int) );
    // sort, yeah
    
    // display contents
    // display_contents( my_numbers, sizeof(my_numbers) / sizeof(int) );
    /*
    int query;
    printf("Number to find: ");
    scanf("%i", &query);
    int index = find(my_numbers, sizeof(my_numbers) / sizeof(int), query);
    if(index != -1){
        printf("Found at index %d\n", index);
    } else {
        printf("Number not found\n");
    }
    */
   int sum = total_sum( my_numbers, sizeof(my_numbers) / sizeof(int) );
   printf("Sum: %d\n", sum);
   float ave = average( my_numbers, sizeof(my_numbers) / sizeof(int) );
   printf("Average: %f\n", ave); 
   if( detect_duplicates(my_numbers, sizeof(my_numbers) / sizeof(int)) ){
       printf("Duplicate detected\n");
   } else {
       printf("There are no duplicates\n");
   }
}

