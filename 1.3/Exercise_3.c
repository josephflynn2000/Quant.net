#include <stdio.h>

int main(){
    int x;

    x=-3+4*5-6;
    // -3+(4*5)-6 = -3+20-6
    // (-3+20)-6 = 17-6
    // 17-6 = 11

    printf("x=%d\n", x);
    //output: 11

    x=3+4%5-6;
    // 3+(4%5)-6 = 3+4-6
    // (3+4)-6 = 7-6
    // 7-6 = 1

    printf("x=%d\n", x);
    //output: 1

    x=-3*4%-6/5;
    //(-3*4)%-6/5 = -12%-6/5
    //(-12%-6)/5 = 0/5 (Remainder of zero)
    // 0/5 = 0

    printf("x=%d\n", x);
    //output: 0

    x=(7+6)%5/2;
    // (7+6)%5/2 = 13%5/2
    // 13%5/2 = 3/2 (Remainder of three)
    // 3/2 = 1 (Does integer division)

    printf("x=%d\n", x);
    //output: 1

    return 0;
}