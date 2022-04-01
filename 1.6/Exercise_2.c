#include <stdio.h>

//Macro definitions
#define MAX2(x,y) x>y ? x:y
#define MAX3(x,y,z) z>MAX2(x,y) ? z : MAX2(x,y)

int main(){
    //initialized variables (integer data type)
    int x = 100;
    int y = 20;
    int z = 200;

    //print statements that use Macros
    printf("%i\n",MAX2(x,y));
    printf("%i\n",MAX3(x,y,z));

    return 0;
}