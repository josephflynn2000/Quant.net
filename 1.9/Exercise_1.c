#include <stdio.h>
#include <stdlib.h>

/*
    BEST TO USE REALLOC
    There can be danger when using pointers.
    This implementation doesn't check if there is more memory.
*/

int main(){
    //initialized pointers
    int* ptrArray;
    int* ptrTemp;

    //keeps track of array's size and last index
    int size = 1;
    int idx = 0;
    int last_newline = 0;

    //set first pointer to array of one int
    ptrArray = (int*)malloc(size*sizeof(int));

    //loop continues till specified character is input
    //CTRL + A is equal to 1
    while((ptrArray[idx] = getchar()) != 1){

        if(ptrArray[idx] == '\n'){
            for(int i = last_newline; i <idx; i++){
                if(ptrArray[i] != '\n'){
                    putchar(ptrArray[i]);
                }
            }
            putchar('\n');
            last_newline = idx;
        }
        //allocate memory to array that will temporarily store ptrArray
        ptrTemp = (int*)malloc(size*sizeof(int));

        //store ptrArray into ptrTemp
        for(int i = 0; i<size;i++){
            ptrTemp[i] = ptrArray[i];
        }

        //free ptrArray allocated memory block
        free(ptrArray);

        //increment size of array and last index by 1
        size++;
        idx++;

        //allocate new block of memory to ptrArray that is larger by 1 int
        ptrArray = (int*)malloc(size*sizeof(int));

        //place tempArray values back into ptrArray
        for(int i = 0; i<idx;i++){
            ptrArray[i] = ptrTemp[i];
        }

        //free ptrTemp allocated memory block
        free(ptrTemp);
    }

    printf("CTRL + A is a correct ending.\n");
    return 0;
}