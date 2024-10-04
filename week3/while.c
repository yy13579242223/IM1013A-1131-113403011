#include<stdio.h>
int main (void){

int iTotal=0;
int iGradecounter=1;
float fAverage;

while(iGradecounter<=10){

     printf ("counter=%d/n", iGradecounter);
     iTotal=iTotal+iGradecounter;
     iGradecounter=iGradecounter+1;

}//end while

fAverage=iTotal/10.0;
printf("class average=%f/n", fAverage);




}//end main
