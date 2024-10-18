#include<stdio.h>

int main (void){

    int iCurrentgrade=0;
    int iTotal=0;
    int iGradeCounter=1;
    float fAverage=0;
    int iNumOfstudent;

    printf("Enter a number of students:\n");
    scanf("%d", &iNumOfstudent);

    while(iNumOfstudent<1){
         puts("Please enter a number of students.The number should be>=1!");
         puts("Enter a number of students:");
         scanf("%d", &iNumOfstudent);
    }//end while

    while(iGradeCounter<= iNumOfstudent){
        puts("Enter a grade for student:");
        scanf("%d", &iCurrentgrade);

        while(iCurrentgrade<0 || iCurrentgrade>100){
          puts("Please enter a grade for student.The number should be>=0 and<=100!");
          puts("Enter a grade for student:");
          scanf("%d", &iCurrentgrade);
         }//end while

    iTotal+=iCurrentgrade;//shorthand for iTotal=iTotal+iCurrentgrade
    iGradeCounter++;
    }

    fAverage=(float)iTotal/iNumOfstudent;
    printf("class average is:%.2f\n", fAverage);

}//end main