#include <stdio.h>
int main()
{
int x=2;
int y; int z;
     x*=3+2;
     printf("x=%d\n", x);
     x*=y=z=4;
     printf("x=%d\n", x);
     x=y==z;
     printf("x=%d\n", x);
return 0; }