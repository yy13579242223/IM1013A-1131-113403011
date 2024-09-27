#include <stdio.h>

int main(void){

int iCelcius;
float fFahrenheit;

printf("this program can turn Celcius to Fahrenheit:\n");
printf("Enter Celcius:\n");
scanf("%d", &iCelcius);

fFahrenheit=(iCelcius*9)/5+32;

printf ("Celcius:%d\n", iCelcius);

printf ("Fahrenheit:%f\n", fFahrenheit);






}//end

