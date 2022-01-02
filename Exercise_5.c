#include <stdio.h>

int main(){
    printf("|%s||%s|\n------------------------\n","   Clesius","Fahrenheit");

    for(int i = 0; i<20; i++){
        float f = ((9.0/5.0)*i)+32;
        printf("|%10i||%10.1f|\n",i,f);
    }
    
    return 0;
}