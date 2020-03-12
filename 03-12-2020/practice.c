#include <stdio.h>
#include <stdlib.h>

// Practicing with malloc and free

int * create1DArray(int size);
int ** create2DArray(int rows, int cols);

void show1DArray(int * array, int size);
void show2DArray(int ** array, int rows, int cols );

int main() {
    int * arr1D;
    int ** arr2D;
    int size, rows, columns;

    printf("Enter size of 1D dynamic array");
    scanf("%i", &size);

    arr1D = create1DArray(size);
    show1DArray(arr1D, size);

    printf("Enter rows and columns of 2D dynamic array: ");
    scanf("%i %i", &rows, &columns);

    arr2D = create2DArray(rows, columns);
    show2DArray(arr2D, rows, columns);
}

int * create1DArray(int size){
    // allocate memory
    int * temp_arr = (int * ) malloc ( size * sizeof(int) );
    for( int i = 0; i < size; i++){
        temp_arr[i] = 0;
    }
    return temp_arr;
}

void show1DArray(int * array, int size){
    printf("1D Array:\n");
    for(int i = 0; i < size; i++){
        printf("%i, ", array[i]);
    }
    printf("\n");
}

int ** create2DArray(int rows, int cols){
    int ** matrix;

    // allocate rows of empty pointers / arrays
    matrix = (int ** ) malloc( rows * sizeof(int * ) );
    for(int i = 0; i < rows; i++){
        // allocate each col of a row with array
        matrix[i] = (int *) malloc( cols * sizeof( int ) );
        for(int j = 0; j < cols; j++){
            // initialize value of each column in a row array with 0
            matrix[i][j] = 0;
        }
    }
    return matrix;
}

void show2DArray( int ** matrix, int rows, int cols){
    printf("2D array\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0 ; j < cols; j++){
            printf("%i, ", matrix[i][j]);
        }
        printf("\n");
    }
}