#include <stdio.h>

void printnumber(int x);

int main(){
    //initialize int to a value (integer data type)
    int x = 12345;

    //send integer to function
    printnumber(x);

    //prevents "%" character
    putchar('\n');

    return 0;
}


void printnumber(int x){

    //checks if x is divisible by 10
    if(x/10 != 0){

        //recursive if true
        printnumber(x/10);
    }

    //send last character
    putchar(x%10 + '0');

}