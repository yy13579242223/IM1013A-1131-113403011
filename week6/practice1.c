#include<stdio.h>
#include<math.h>

int main(void){
  double pincipal=1000.0;
  double rate= .05;

  printf("%4s%21s\n","Year","Amount on deposit");

  for(unsigned int year=1;year<=10;++year){
     double amount = pincipal * pow(1.0+rate, year);
     printf("%4u%21.2f\n", year, amount);
  }
}//end main//math.h need -lm