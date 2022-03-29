#include <stdio.h>

int main(){
    //initialized married to 0 (False)
    int married = 0;

    //print statement with ternary operator (True = Married, False = Not Married)
    printf("%s", married ? "Married\n" : "Not Married\n");
    
    return 0;
}