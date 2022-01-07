#include <stdio.h>

int main(){
    int x;
    int n;

    printf("Enter an integer: ");
    scanf("%i", &x);

    printf("Enter a positive integer: ");
    scanf("%i", &n);

    //shifting an integer (x) left n times
    // is the same as (x)*(2^n)
    printf("%i\n", x << n);
    
    return 0;
}