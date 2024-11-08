#include<stdio.h>
int main(void){
    int row, column;
    int myrow=4, mycolumn=5;
    int myR, myC;
    char confirm;

    for(row=0;row<1;row++){
    puts("   C1  C2  C3  C4  C5");
    }
    for(row=1; row<=myrow; row++){

        for(column=1; column<=mycolumn; column++){
            if(column==1){
              printf("R%u ", row);
            }
            printf("*   ");
        }
        puts ("");
    }

    printf("enter row:");
    scanf("%d", &myR);
    printf("enter column:");
    scanf("%d", &myC);

    for(row=0;row<1;row++){
    puts("   C1  C2  C3  C4  C5");
    }
    for(row=1; row<=myrow; row++){

        for(column=1; column<=mycolumn; column++){
            if(column==1){
              printf("R%u ", row);
            }
            if(row==myR&&column==myC){
                printf("X   ");
            }
            else{
            printf("*   ");
            }
        }
        puts ("");
    }
}//endmain
