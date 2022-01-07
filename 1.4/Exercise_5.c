#include <stdio.h>

int main(){
    int start = 0;
    int end = 19;
    int step = 1;

    printf("|%s||%s|\n------------------------\n","   Clesius","Fahrenheit");

    for(int i = start; i<=end; i+=step){

        //F to C
        float f = ((9.0/5.0)*i)+32;

        //print results
        printf("|%10i||%10.1f|\n",i,f);
    }
    
    return 0;
}