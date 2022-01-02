#include <stdio.h>

int main(){
    printf("|%s||%s|\n------------------------\n","Fahrenheit","   Celsius");

    for(int i = 0; i<=300; i+=20){
        float c = (5.0/9.0)*(i-32);
        printf("|%10i||%10.1f|\n",i,c);
    }
    
    return 0;
}