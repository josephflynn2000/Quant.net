#include <stdio.h>

int main(){
    double h;
    double l;
    double area;

    printf("Enter height: ");
    scanf("%lf", &h);
    
    printf("Enter length: ");
    scanf("%lf", &l);

    area = 0.5*l*h;
    printf("The area is %lf\n",area);
    
    return 0;
}