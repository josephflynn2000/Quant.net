#include <stdio.h>

int main(){
    int x;
    int n;

    printf("Enter an integer: ");
    scanf("%i", &x);

    printf("Enter a positive integer: ");
    scanf("%i", &n);

    printf("%i\n", x << n);
    return 0;
}