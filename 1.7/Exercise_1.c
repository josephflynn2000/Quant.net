#include <stdio.h>

void Swap(int *x, int *y);

int main(){
    //initialized variables
    int x = 3;
    int y = 7;

    //print before values
    printf("\nBefore Swap:\nx = %i\ny = %i\n\n",x,y);

    //call swap function (give memory locations)
    Swap(&x,&y);

    //print values after swap
    printf("After Swap:\nx = %i\ny = %i\n\n",x,y);

    return 0;
}

void Swap(int *x, int *y){
    
    //swaps the values at the memory addresses provided
    int temp = *x;
    *x = *y;
    *y = temp;
}