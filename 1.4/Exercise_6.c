#include <stdio.h>

int main(){
    FILE *fp;
    char x;

    int total_0 = 0;
    int total_1 = 0;
    int total_2 = 0;
    int total_3 = 0;
    int total_4 = 0;

    int other = 0;

    //opens file to write
    fp = fopen("file.txt", "w");

    //take in inputs
    while((x = getchar())!=EOF){
        putc(x,fp);
    }

    //closes file
    fclose(fp);

    //opens file to read
    fp = fopen("file.txt","r");

    //reads through file till EOF appears
    while((x=getc(fp))!=EOF){

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

    //prints out results
    printf("Count of 0: %i\nCount of 1: %i\nCount of 2: %i\nCount of 3: %i\nCount of 4: %i\nCount of other: %i\n", total_0, total_1, total_2, total_3, total_4, other);

    return 0;
}