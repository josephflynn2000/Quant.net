/* Predict what will be printed on the screen */
#include <stdio.h>

#define PRD(a) printf("%d", (a) )

#define NL printf("\n");

// Create and initialse array
int a[]={0, 1, 2, 3, 4};

int main(){

    int i;
    int* p;

    //goes through each element in the array
    for (i=0; i<=4; i++) PRD(a[i]);                     //1
    NL;
    /*
    01234\n
    */

    //goes through each element address in memory and prints value
    for (p=&a[0]; p<=&a[4]; p++) PRD(*p);               //2
    NL;
    NL;
    /*
    01234\n
    \n
    */

    //goes through each element in the array
    for (p=&a[0], i=0; i<=4; i++) PRD(p[i]);            //3
    NL;
    /*
    01234\n
    */

    //increases both p and i, skipping every odd index
    for (p=a, i=0; p+i<=a+4; p++, i++) PRD(*(p+i));     //4
    NL;
    NL;
    /*
    024\n
    \n
    */

    //reverse order through array
    for (p=a+4; p>=a; p--) PRD(*p);                     //5
    NL;
    /*
    43210\n
    */

    //reverse index to go reverse through array
    for (p=a+4, i=0; i<=4; i++) PRD(p[-i]);             //6
    NL;
    /*
    43210\n
    */

    //reverse order
    for (p=a+4; p>=a; p--) PRD(a[p-a]);                 //7
    NL;
    /*
    43210\n
    */


    // FULL PRINT OUT //
    /*
    01234
    01234

    01234
    024

    43210
    43210
    43210
    */


return 0; }