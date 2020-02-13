#include <stdio.h>

int repeat(int n);
int factorial(int n);
int main(){
    int count, fact;
    /*
    printf("Now, how many repeatitions? ");
    scanf("%d", &count);
    repeat(count);
    printf("Count : %d\n", count);
    */
   printf("Now, how many repeatitions? ");
    scanf("%d", &count);
    fact = factorial(count);
    printf("5! = %d\n", fact);
}



int repeat(int n){
    if(n == 1){
        printf("tdog\n");
        return 0;
    }
    printf("HA");
    return repeat( --n );
}

int factorial(int n){
    if(n == 1 || n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}