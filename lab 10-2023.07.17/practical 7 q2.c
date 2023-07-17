#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr1[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr1[i][j]==5)
            {
                printf("The element is at array [%d][%d] array address \n",i,j);
            }
        }
    }
    return 0;
}
