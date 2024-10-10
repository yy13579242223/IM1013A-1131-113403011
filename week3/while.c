#include<stdio.h>

int main (void){

    int iCurrentgrade=0;
    int iTotal=0;
    int iGradeCounter=1;
    float fAverage=0;
    int iNumOfGrades=10;

    while(iGradeCounter<=iNumOfGrades){
         printf("Enter a grade for student:%d\n", iGradeCounter);
         scanf("%d", &iCurrentgrade);
         iTotal+=iCurrentgrade;//shorthand for iTotal=iTotal+iCurrentgrade
         iGradeCounter++;
    }//end while

    fAverage=(float)iTotal/iNumOfGrades;
    printf("class average is:%.2f\n", fAverage);

}//end main