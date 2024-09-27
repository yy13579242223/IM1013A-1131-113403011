#include <stdio.h>

//main function
int main(void){

  int iNumber1;
  int iNumber2;

  printf("Enter 1st number:\n");
  scanf("%d", &iNumber1);

  printf("iNumber1:%d\n",iNumber1);

    printf("Enter 2nd number:\n");
  scanf("%d", &iNumber2);

  printf("iNumber2:%d\n",iNumber2);

  int sum;
  sum=iNumber1+iNumber2;
  printf("Sum is %d\n",sum);



}//end main function