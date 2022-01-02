#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;

    for(int i = 0; i<5; i++){
       printf("%i %i\n",--x,y--); 
    }

    return 0;
}