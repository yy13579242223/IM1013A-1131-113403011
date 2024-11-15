#include<stdio.h>

float bmi(int, int);

int main(void){

    int height=0;
    int weight=0;
    float BMI;
 puts("Enter your height in cm");
 scanf("%d", &height);
 puts("Enter your weight in kg");
 scanf("%d", &weight);
 BMI = bmi(height, weight);
 printf("%f", BMI);

}//end main

float bmi(int arg_heightCM, int arg_weightKG){

float bmi = arg_weightKG/(arg_heightCM/100)*(arg_heightCM/100) ;
return bmi;

}//end bmi