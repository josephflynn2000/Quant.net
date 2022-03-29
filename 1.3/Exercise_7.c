#include <stdio.h>

int main(){
    //initialized variable
    int x;
    int n;

    //input integer to be multiplied (integer data type)
    printf("Enter an integer: ");
    scanf("%i", &x);

    //loop to check if n is positive 
    do{

        //message for n being negative 
        if(n<0){
            printf("Number must be positive!\n");
        }

        //input integer to be the a power (integer data type)
        printf("Enter a positive integer: ");
        scanf("%i", &n);

    }while(n < 0);

    //shifting an integer (x) left n times
    //is the same as (x)*(2^n)
    printf("%i\n", x << n);
    
    return 0;
}