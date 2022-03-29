#include <stdio.h>

int main(){
    //initialize variables for later use
    double h;
    double l;
    double area;

    //input height (double data type)
    printf("Enter height: ");
    scanf("%lf", &h);
    
    //input length (double data type)
    printf("Enter length: ");
    scanf("%lf", &l);

    //calculate and print area (double data type)
    area = 0.5*l*h;
    printf("The area is %lf\n",area);
    
    return 0;
}