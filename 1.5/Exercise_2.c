#include <stdio.h>

int fact(int x);

int main(){

    printf("6! = %i\n0! = %i\n",fact(6),fact(0));

    return 0;
}

int fact(int x){
    if(x > 1){
        return x*fact(x-1);
    }else{
        return 1;
    }
}