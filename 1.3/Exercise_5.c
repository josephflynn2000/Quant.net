#include <stdio.h>

int main(){
    //initialized variables (both 10)
    int x = 10;
    int y = 10;

    //loop that cycles 5 times
    for(int i = 0; i<5; i++){

        printf("%i %i\n", --x, y--); 
        //the --x operator goes first before printing, 
        //while the y-- goes after printing. 
        //Giving two different numbers.
    }

    //
    // ANOTHER WAY TO SHOW THIS
    //

    //initialized variables (both 1)
    x = 1;
    y = 1;

    //x is incremented before printing
    //y is incremented after printing
    printf("x = %d\ny = %d\n",++x,y++);

    return 0;
}