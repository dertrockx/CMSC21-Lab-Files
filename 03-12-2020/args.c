#include <stdio.h>
#include <string.h>

int countVowels(char * string){
    char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
    int vowelCount = 0;
    for(int i = 0; i < strlen(string); i++){
        for(int j = 0; j < 5; j++){
            if( string[i] == vowels[j] )
                vowelCount++;
        }
    }
    return vowelCount;
}

int main( int argc, char ** argv){
    /*
    loops through the parameters
    for(int i = 0; i < argc; i ++){
        printf("%s\n", argv[i]);
    }
    */
   char * test = "The quick brown fox jumped over the window\0";
   int vowels = countVowels( test );
   printf("Vowels: %i\n", vowels);
}