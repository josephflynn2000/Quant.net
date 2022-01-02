#include <stdio.h>

int main(){
    char x;
    char previous;

    int word = 0;
    int character = 0;
    int newline = 0;

    while((int)x != EOF){
    x = getchar();

    character++;
    previous = x;
    }

    printf("words: %i\nchar: %i\nlines: %i\n",word,character,newline);
    return 0;
}