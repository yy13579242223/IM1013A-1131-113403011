#include <stdio.h>

int main(void){

 int iScore;

//enter the scores and output grade distribution
 puts("Please enter the scores of three students:%d");
 scanf("%d", &iScore);
  if(90<=iScore<=100){
   puts("Grade distribution:");
   puts("A (90 and above):%d student");
  }
   else if(80<=iScore<=89){
    puts("B (80-89):%d student");
  }
   else if(70<=iScore<=79){
    puts("C(70-79):%d student");
  }
   else if(60<=iScore<=69){
    puts("D (60-69):%d student");
  }
   else if(0<=iScore<=59){
    puts("F (below 60):%d student");
  }
   else{
    puts("Sorry, all scores must be between 0 and 100.");
  }//end if

  puts("Program ends.");


}//end main