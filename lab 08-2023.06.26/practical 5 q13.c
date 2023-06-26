#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,sum=0,num;
    printf("enter a number: \n");
    while(1){
        scanf("%d",&num);
        if (num==-1)
        {
            break;
        }
        else
        {
            sum+=num;
            i++;
        }
    }
    printf("sum of entered numbers:  %d\n",sum);
    printf("total numbers entered: %d\n",i);
}

