#include <stdio.h>

int main(void){

//input three integers,represent the lengths of the three sides of triangle

  int iSide1;
  int iSide2;
  int iSide3;

 puts("Please enter the first lengths:");
 scanf("%d", &iSide1);

 puts("Please enter the second lengths:");
 scanf("%d", &iSide2);

 puts("Please enter the third lengths:");
 scanf("%d", &iSide3);
//whether it is triangle
 if(iSide1+iSide2<=iSide3){
    puts("Cannot form a triangle.");
 }
  else if(iSide1+iSide3<=iSide2){
    puts("Cannot form a triangle.");
 }
   else if(iSide2+iSide3<=iSide1){
    puts("Cannot form a triangle.");
 }
 //whether it is right triangle
   else if(iSide1*iSide1+iSide2*iSide2==iSide3*iSide3){
    puts("A Right Triangle");
 }
   else if(iSide1*iSide1+iSide3*iSide3==iSide2*iSide2){
    puts("A Right Triangle");
 }
    else if(iSide2*iSide2+iSide3*iSide3==iSide1*iSide1){
    puts("A Right Triangle");
 }
    else{
    puts("Not a right triangle.");
 }//end if





puts("Program ends.");


}//end main