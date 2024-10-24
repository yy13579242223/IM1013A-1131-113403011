#include <stdio.h>

int main(void){
    int counter;
    int grade;
    int total;
    float average;

    counter=0;
    total=0;
    puts("Please enter a grade, -1 to end:");
    scanf("%d", &grade);

    while(grade!=-1){
        total+=grade;
        counter++;
        puts("Please enter a grade, -1 to end:");
        scanf("%d", &grade);
    }//end while

    if(counter!=0){
        average=(float)total/counter;
        printf("Class average is %.2f\n", average);

    }else{

        puts("No grade were entered.");
    }




}//end main

