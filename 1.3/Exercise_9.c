#include <stdio.h>

int main(){
    int x=1;
    int y=1;
    int z=1;

    x+=y+=x;
    // y = x+1
    // y = 1+1 = 2
    // x = y+1 
    // x = 2+1 = 3

    // x = 3, y = 2, z = 1

    printf("%d\n\n", (x<y)?y:x);  
    // x<y -> 3<2 (False)
    // should select x
    //output: 3

    printf("%d\n", (x<y)?x++:y++);
    // x<y -> 3<2 (False)
    // should select y
    //output: 2
    //
    // y then increments by 1
    // y = 3

    printf("%d\n", x);
    //output: 3

    printf("%d\n", y);
    //output: 3
    
    return 0; 
}
