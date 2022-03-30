#include <stdio.h>

int main(){
    //initialized variables
    char x;
    char previous;

    //counter starts
    int word = 0;
    int character = 0;
    int newline = 0;

    //loop continues till EOF is detected
    while((int)x != EOF){

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
    }

    //prints end totals
    printf("words: %i\nchar: %i\nlines: %i\n",word,character,newline);
    
    return 0;
}