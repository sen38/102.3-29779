#include <stdio.h>
#include <stdlib.h>

void findproduct(int a,int b)
{
    int product;
    product=a*b;
    printf("product is %d",product);
}
int main()
{
    int a,b;
    printf("enter 2 numbers ");
    scanf("%d %d",&a,&b);
    findproduct(a,b);
}
