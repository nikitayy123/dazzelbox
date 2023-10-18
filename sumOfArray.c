#include <stdio.h>

int main()
{
    int marks[4]={1,2,3,4},i,sum=0;
     for(i=0;i<=3;i++)
     {
         sum=sum+marks[i];
        
     }
      printf("%d",sum);
     
    return 0;
}