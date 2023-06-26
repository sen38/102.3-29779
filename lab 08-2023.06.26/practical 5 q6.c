#include <stdio.h>
#include <stdlib.h>

   int main()
{
    int power=1,exponent,base;
    printf("enter a number for base: ");
    scanf("%d",&base);
    printf("enter a number for exponent: ");
    scanf("%d",&exponent);

    while(exponent>0){
        power*=base;
        exponent--;
    }
    printf("%d is the power of the integer",power);
    return 0;
}
