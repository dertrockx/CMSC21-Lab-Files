int total_sum(int a[], int size){
    int sum;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum;
}

float average(int a[], int size){
    int sum = total_sum(a, size);
    return ( (float) sum / size ) ;
}

int detect_duplicates(int a[], int size){
    int i = 0, j;
    for(i; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(a[j] == a[i])
                return 1;
        }
    }
    return 0;
}