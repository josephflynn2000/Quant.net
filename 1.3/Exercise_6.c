#include <stdio.h>

int main(){
    int x;

    printf("Enter a integear: ");
    scanf("%i", &x);

    unsigned int shift = x;

    printf("Logical: %i\n", shift>>2);
    printf("Arithmatic: %i\n", x>>2);
}