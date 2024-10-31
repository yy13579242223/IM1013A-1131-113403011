#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , i , n;

    printf("請輸入欲顯示幾列 ");
    scanf("%d",&n);

    for(x=1 ; x<=n*2-1 ; x++)
    {
       if (x % 2 !=0)                        //當 x 無法被 2 整除時往下執行 , 即 x = 1,3,5,7
       {
          for(i=0 ; i<((n*2-1)-x)/2 ; i++)   //計算前方有多少個空白
             printf(" ");
          for(y=1 ; y<=x ; y++)             // y 值代表該行應印出多少 * 號的數量
             printf("*");
       }
       else
          printf("\n");
    }
    printf("\n");
system("pause");
}

//空心金字塔
#include<stdio.h>
 int main()
 {
 	int i=1;
 	while(i<=5)
 	{
 		int k=1;
 		while(k<=(5-i))
 		{
 			printf(" ");
 			k++;
		}//每行輸出的空格 
		int j=1;
		while(j<=(2*i-1))
		{
			if(i==1||i==5)
			{
				printf("*");
			}//第一行和最後一行照常輸出 
			else
			{
			   if(j==1||j==2*i-1)
			   {
			      printf("*");
			   }
			   else
			   {
			   	  printf(" ");
			   }		
			}//新增空心部位 除第一個和最後一個外，全部都換成空格  
			j++;
		}
		i++;
		printf("\n");
	 }
  }