#include <stdio.h>

struct Article
{
    int id_num;
    int quant;
    char desc[21];
};

void print(struct Article* pt);

int main(){
    //initialized and assigned struct
    struct Article a1 = {7, 3, "Hello"};

    //calls print function (gives address)
    print(&a1);

    return 0;
}

void print(struct Article* pt){

    //prints values of struct
    printf("(%d, %d, %s)\n", pt->id_num, pt->quant, pt->desc);
}