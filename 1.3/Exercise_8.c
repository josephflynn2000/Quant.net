#include <stdio.h>

int main(){
     int x=2;
     int y; int z;

     x*=3+2;
     // x = 2*(3+2)
     // x = 2*5
     // x = 10

     printf("x=%d\n", x);
     //output: 10

     x*=y=z=4;
     // z = 4 and z =4
     // x = 10*4
     // x = 40

     printf("x=%d\n", x);
     //output: 40

     x=y==z;
     // y and z are the same (True)
     // x = True
     // x = 1

     printf("x=%d\n", x);
     //output: 1

     return 0; 
}