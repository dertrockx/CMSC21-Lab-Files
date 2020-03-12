#include <stdio.h>

int main(int argc, char ** argv) {
    char * a = argv[1];
    printf("Size: %li\n", sizeof(a));
}