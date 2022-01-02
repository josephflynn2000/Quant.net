#include <stdio.h>

int main(){
    char x;
    char previous;

    int word = 0;
    int character = 0;
    int newline = 0;

    do{
    x = getchar();

    if(x == '\n'){
        newline++;
    }

    if(previous != ' ' && (x == ' ' || x == '\n')){
        word++;
    }

    character++;
    previous = x;
    }while((int)x != EOF);

    printf("words: %i\nchar: %i\nlines: %i\n",word,character,newline);
    return 0;
}