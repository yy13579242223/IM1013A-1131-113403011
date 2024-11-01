#include<stdbool.h>
#include<stdio.h>
int main(void){

int iMenuOption;
int iDiningtime;
int iAdult;
int iChildren;
int iPrice;
float fTotal;
int iTotals;
int iAverage;
int iNumOfIntegers;
int iNumCounter=1;
int iCurrentInteger;
int iTotalIntegers;
int n=29;
int cnt=0;

//ask user to enter menu
  puts("Welcome to the top level menu.");
  puts("Enter 1 or 2 for choosing menu:");

  scanf("%d",&iMenuOption);

switch(iMenuOption){ 
//in the case1,we should count the buffet price
  case 1:
  puts("This program helps you to count the buffet price.") ;
  puts("Please enter the dining time period:");
  scanf("%d",&iDiningtime);
  //determine the price and peaple during each dining time period
  switch(iDiningtime){
    case 1:
    iPrice=985;
    puts("Please enter the number of adults:");
    scanf("%d",&iAdult);

    puts("Please enter the number of children:");
    scanf("%d",&iChildren);

    fTotal=iPrice*iAdult + 0.7*iPrice*iChildren;
    if(iAdult+iChildren>=20){
       fTotal*0.95=iTotals;}
    else{
      fTotal*1.1=iTotals;
    }//end if
    iAverage=iTotals/(iAdult+iChildren);
    printf("Weekday Lunch $%d/person", iAverage);
    printf("Total amount to be paid $%d", iTotals);
    break;

    case 2:
    iPrice=795;
    puts("Please enter the number of adults:");
    scanf("%d",&iAdult);

    puts("Please enter the number of children:");
    scanf("%d",&iChildren);

    fTotal=iPrice*iAdult + 0.7*iPrice*iChildren;
    if(iAdult+iChildren>=20){
       fTotal*0.95=iTotals;}
    else{
      fTotal*1.1=iTotals;
    }//end if
    iAverage=iTotals/(iAdult+iChildren);
    printf("Weekday Afternoon Tea $%d/person", iAverage);
    printf("Total amount to be paid $%d", iTotals);
    break;

    case 3:
    iPrice=1085;
    puts("Please enter the number of adults:");
    scanf("%d",&iAdult);

    puts("Please enter the number of children:");
    scanf("%d",&iChildren);

    fTotal=iPrice*iAdult + 0.7*iPrice*iChildren;
    if(iAdult+iChildren>=20){
       fTotal*0.95=iTotals;}
    else{
      fTotal*1.1=iTotals;
    }//end if
    iAverage=iTotals/(iAdult+iChildren);
    printf("Weekday Dinner $%d/person", iAverage);
    printf("Total amount to be paid $%d", iTotals);
    break;

    case 4:
    iPrice=1085;
    puts("Please enter the number of adults:");
    scanf("%d",&iAdult);

    puts("Please enter the number of children:");
    scanf("%d",&iChildren);

    fTotal=iPrice*iAdult + 0.7*iPrice*iChildren;
    if(iAdult+iChildren>=20){
       fTotal*0.95=iTotals;}
    else{
      fTotal*1.1=iTotals;
    }//end if
    iAverage=iTotals/(iAdult+iChildren);
    printf("Weekend Lunch $%d/person", iAverage);
    printf("Total amount to be paid $%d", iTotals);
    break;

    case 5:
    iPrice=975;
    puts("Please enter the number of adults:");
    scanf("%d",&iAdult);

    puts("Please enter the number of children:");
    scanf("%d",&iChildren);

    fTotal=iPrice*iAdult + 0.7*iPrice*iChildren;
    if(iAdult+iChildren>=20){
       fTotal*0.95=iTotals;}
    else{
      fTotal*1.1=iTotals;
    }//end if
    iAverage=iTotals/(iAdult+iChildren);
    printf("Weekend Afternoon Tea $%d/person", iAverage);
    printf("Total amount to be paid $%d", iTotals);
    break;

    case 6:
    iPrice=1195;
    puts("Please enter the number of adults:");
    scanf("%d",&iAdult);

    puts("Please enter the number of children:");
    scanf("%d",&iChildren);

    fTotal=iPrice*iAdult + 0.7*iPrice*iChildren;
    if(iAdult+iChildren>=20){
       fTotal*0.95=iTotals;}
    else{
      fTotal*1.1=iTotals;
    }//end if
    iAverage=iTotals/(iAdult+iChildren);
    printf("Weekend Dinner $%d/person", iAverage);
    printf("Total amount to be paid $%d", iTotals);
    break;

  }//end switch dining price
puts("<back to the top level menu>");
break;

//in the case2,we should sum of non-prime numbers
  case 2:
  //ask user to enter how many numbers they want to sum
  puts("Please enter the positive number of integers:");
  scanf("%d",&iNumOfIntegers);
  //make sure if the number is non-prime number
      while(iNumCounter<=iNumOfIntegers){
         printf("Enter integer:%d\n", iNumCounter);
         scanf("%d", &iCurrentInteger);
         if(n<=1){
            iTotalIntegers+=iCurrentInteger;
         }
         else{
            for(int i=1;i<=n;i++){
              if(n%i==0)
                cnt++;
         }
         if(cnt>2)
            iTotalIntegers+=iCurrentInteger;
        else
            iTotalIntegers=0+iTotalIntegers;
         }
         iNumCounter++;
    }//end while
  printf("The sum of integers is:%d",iTotalIntegers);
  puts("<back to the top level menu>");
  break;

  }//end total switch
}//end main