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

    printf("Enter your seat row number:");
    scanf("%d", &myR);
    printf("Enter your seat column number:");
    scanf("%d", &myC);

    for(row=0;row<1;row++){
    puts("   C1  C2  C3  C4  C5");
    }
    for(row=1; row<=myrow; row++){

        for(column=1; column<=mycolumn; column++){
            if(column==1){
              printf("R%u ", row);
            }
            if(row==myR && column==myC){
                printf("X   ");
            }
            else{
            printf("*   ");
            }
        }
        puts ("");
    }
    printf("X=R%d, C%d\n", myR, myC);
    puts("Confirm seat[1/0]:");
    scanf(" %c", &confirm);
    getchar();

    if(confirm == '1'){
        printf("Thank you for booking your seat.\n");
        }
    while(confirm == '0'){
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

        printf("Enter your seat row number:");
        scanf("%d", &myR);
        printf("Enter your seat column number:");
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
        printf("X=R%d, C%d\n", myR, myC);
        puts("Conferm seat[1/0]:");
        scanf(" %c", &confirm);
        getchar();
        if(confirm == '1'){
          printf("Thank you for booking your seat.\n");
        }
    }
    
}//endmain
