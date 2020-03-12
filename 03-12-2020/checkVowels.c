#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countLetters( char * word){
    int count = 0, index = 0;
    char current = word[index];
    while( current != '\0'){
        count++;
        index++;
        current = word[index];
    }
    return count;
}

int countVowels(char * string){
    char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
    int vowelCount = 0;
    for(int i = 0; i < strlen(string); i++){
        switch( tolower( string[i] ) ){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
            default:
                continue;
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
   if(argc != 2){
       printf("Usage: ./check_vowels <word>\n");
       return 0;
   }
   int vowels = countVowels( argv[1] );
   printf("Vowels: %i\n", vowels);
}