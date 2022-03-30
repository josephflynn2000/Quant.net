#include <stdio.h>

float minus(float x, float y);

int main(){

    printf("%f\n",minus(3,4));

    return 0;
}

float minus(float x, float y){
    return x-y;
}