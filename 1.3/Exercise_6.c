#include <stdio.h>

int main(){
    //initialized variable
    int x;

    //input integer (integer data type)
    printf("Enter an integer: ");
    scanf("%i", &x);

    //allows first bit to be shifted right
    unsigned int shift = x;

    //Logical Right Shift: 
    //moves to bits to the right and replaces them with zero
    //works for integers > 0
    printf("Logical: %i\n", shift>>2);

    //Arithmatic Right Shift:
    //moves to bits to the right and keeps first bit for sign
    //works for all integers
    printf("Arithmatic: %i\n", x>>2);
}