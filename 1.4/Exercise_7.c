#include <stdio.h>

int main(){
    //initialized variables (File and character data type)
    FILE *fp;
    char x;

    //initialized variables (integer data type)
    int total_0 = 0;
    int total_1 = 0;
    int total_2 = 0;
    int total_3 = 0;
    int total_4 = 0;

    int other = 0;

    //opens file to write
    fp = fopen("file.txt", "w");

    //take in inputs
    while((x = getchar()) != EOF){
        putc(x,fp);
    }

    //closes file
    fclose(fp);

    //opens file to read
    fp = fopen("file.txt", "r");

    //reads through file till EOF appears
    while((x=getc(fp)) != EOF){

        //switch to count certain characters
        switch(x){
            case '0':
                total_0++;
                break;
            case '1':
                total_1++;
                break;
            case '2':
                total_2++;
                break;
            case '3':
                total_3++;
                break;
            case '4':
                total_4++;
                break;

            default:
                other++;
                break;
        }
    }   

    //prints out results from 0 to 2
    printf("Count of 0: %i\nCount of 1: %i\nCount of 2: %i\n", total_0, total_1, total_2);

    //prints out results for 3
    switch(total_3){
        case 0:
            printf("Number three appears zero times.\n");
            break;
        case 1:
            printf("Number three appears one time.\n");
            break;
        case 2:
            printf("Number three appears two times.\n");
            break;
        default:
            printf("The number three appears more than two times.\n");
            break;
    }

    //prints out results from 4 to other
    printf("Count of 4: %i\nCount of other: %i\n", total_4, other);
    
    //removes text file that was created earlier
    remove("file.txt");

    return 0;
}