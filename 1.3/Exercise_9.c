#include <stdio.h>

int main(){
    int x=1;
    int y=1;
    int z=1;

    x+=y+=x;
    printf("%d\n\n", (x<y)?y:x);     
    printf("%d\n", (x<y)?x++:y++);
    printf("%d\n", x);
    printf("%d\n", y);
    
    return 0; 
}
