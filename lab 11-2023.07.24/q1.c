#include <stdio.h>
#include <stdlib.h>

   void calculateSumAndDifference()
    {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
}

int main()
{
    calculateSumAndDifference();
    return 0;
}

