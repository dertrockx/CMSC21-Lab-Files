#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// a and b are formal parameters
void swap(int * a, int * b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void randomize( int a[], int size){
    srand(time(NULL));
    for(int i = 0; i < size; i++){
        // int index = rand() % ( size - i ) + i;
        // a[i] = a[index];
        a[i] = (rand() % 100) + 1;
    }
}

void display_contents( int a[], int size ){
    for(int i = 0; i < size; i++){
        printf("[%d] - %d\n", i, a[i]);
    }
}

void bubble_sort( int a[], int size){
    int i = 0, j;
    for(i; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            // check if the current value is smaller than the holding value
            if ( a[i] > a[j] ){
                // swap the values
                swap( &a[i], &a[j] );
            }
        }
    }
}

int find(int a[], int size, int query){
    for(int i = 0; i < size; i++){
        if(a[i] == query){
            return i;
        }
    }
    return -1;
}

