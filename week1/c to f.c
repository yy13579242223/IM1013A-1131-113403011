#include <stdio.h>

int main(void){

float fCelcius;
float fFahrenheit;

puts("this program converts temperature in Celcius into Fahrenheit.");
puts("please enter a temperature in Celcius:");

scanf("%f", &fCelcius);

fFahrenheit=((float)fCelcius*9)/5+32;

printf ("Celcius:%f\n", fCelcius);

printf ("Fahrenheit:%f\n", fFahrenheit);






}//end

