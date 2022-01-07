#include <stdio.h>

int main(){
    int start = 0;
    int end = 300;
    int step = 20;

    printf("|%s||%s|\n------------------------\n","Fahrenheit","   Celsius");

    while(start <= end){

        //Convert F to C
        float c = (5.0/9.0)*(start-32);

        //print results
        printf("|%10i||%10.1f|\n",start,c);

        //increases start by step
        start += step;
    }
    
    return 0;
}