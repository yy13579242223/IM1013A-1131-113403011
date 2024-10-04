
#include <stdio.h>

int main(void){

  float fCelcius, fFahrenheit;
  int iMenuOption;

  puts("This program converts temperature in Celcius into Fahrenheit.");
  puts("Enter 1 or 2 for convertion:");

  scanf("%d",&iMenuOption);
  if(iMenuOption==1){
    puts("menu 1");

    puts("this program converts temperature in Celcius into Fahrenheit.");
    puts("please enter a temperature in Celcius:");

    scanf("%f", &fCelcius);

    fFahrenheit=(fCelcius*9)/5+32;

    printf ("%.2f degrees Celcius is %.2f degrees Fahrenheit.\n", fCelcius,fFahrenheit);


  }
  else if (iMenuOption==2){
    puts("menu 2");

    puts("this program converts temperature in Fahrenheit into Celcius.");
    puts("please enter a temperature in Fahrenheit:");

    scanf("%f", &fFahrenheit);

    fCelcius=(fFahrenheit-32)*(5.0/9);

    printf ("%.2f degrees Fahrenheit is %.2f degrees Celcius.\n",fFahrenheit, fCelcius);

 }else {
    puts("invalid menu option");
 }






}//end main