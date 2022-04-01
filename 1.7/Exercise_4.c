#include <stdio.h>

void DayName(int x);

int main(){
    //day selected
    int day = 23;

    //if a day selected out of range
    while(day > 7 || day < 1){
        printf("Please input a correct day\n");
        scanf("%i",&day);
    }
    
    //call function
    DayName(day);

    return 0;
}

void DayName(int x){

    //days of the week (array of strings)
    char day[7][10] ={
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    //prints result
    printf("Day %i is a %s\n",x,day[x-1]);
}