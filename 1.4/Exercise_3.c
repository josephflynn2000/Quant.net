#include <stdio.h>

int main(){
    //initialized variables (character data type)
    char x;
    char previous;

    //initialized variables (integer data type)
    int word = 0;
    int character = 0;
    int newline = 0;

    //loop continues till EOF is detected
    while((int)x != EOF){

        //get character
        x = getchar();

        //switch statement
        switch(x){

            //if character is a newline
            case '\n':
                newline++;
                break;

            //if character is a space
            case ' ':
                break;

            //doesn't match any previous case
            default:

                //nested switch
                switch(previous){

                    //if previous character was a newline
                    case '\n':
                        word++;
                        break;

                    //if previous character was a space
                    case ' ':
                        word++;
                        break;
                }
        }

        //counts all characters (including EOF)
        character++;

        //stores previous character
        previous = x;
    } 

    //print end totals
    printf("words: %i\nchar: %i\nlines: %i\n",word,character,newline);
    return 0;
}