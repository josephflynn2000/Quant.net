#include <stdio.h>

int main(){
    char x;
    char previous;

    int word = 0;
    int character = 0;
    int newline = 0;

    //works till EOF is detected
    do{
        //get character
        x = getchar();

        //counts newline when newline character is entered
        if(x == '\n'){
            newline++;
        }

        //counts word when previous character is a whitespace/newline 
        //and last character wasn't a whitespace
        if(previous != ' ' && (x == ' ' || x == '\n')){
            word++;
        }

        //counts all characters
        character++;

        //saves last character
        previous = x;

    }while((int)x != EOF);

    printf("words: %i\nchar: %i\nlines: %i\n",word,character,newline);
    return 0;
}