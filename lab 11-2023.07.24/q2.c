#include <stdio.h>
#include <stdlib.h>

    void findsum(int a,int b)
    {
        int sum;
        sum=a+b;
        printf("sum is %d \n",sum);
    }
    void finddifference(int a,int b)
    {
        int difference;
        difference=a-b;
        printf("difference is %d",difference);
    }
    int main()
    {
     int a,b;
     printf("enter 2 numbers ");
     scanf("%d %d",&a,&b);
     findsum(a,b);
     finddifference(a,b);
     //finddifference(a,b);
    }
