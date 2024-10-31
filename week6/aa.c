#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int x , y , i ;

    for(x=1 ; x<=7 ; x++)
   {
       if (x % 2 !=0) {  //當 x 無法被 2 整除時往下執行 , 即 x = 1,3,5,7
           for(i=0 ; i<(7-x)/2 ; i++)    //計算前方有多少個空白
                printf(" ");
           for(y=1 ; y<=x ; y++)         // y 值代表該行應印出多少 * 號的數量
                printf("*");
      }
      else
           printf("\n");
   }
   printf("\n");
   system("pause");
}//end main