#include <stdio.h>
#include <stdlib.h>

int calculateSum(int num1, int num2) {
    return num1 + num2;
}

void readAndDisplaySum() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int sum = calculateSum(num1, num2);
    printf("Sum: %d\n", sum);
}

int main() {
    int numTimes;

    printf("How many times do you want to calculate the sum? ");
    scanf("%d", &numTimes);

    for (int i = 0; i < numTimes; i++) {
        printf("\nCalculation %d:\n", i + 1);
        readAndDisplaySum();
    }

    return 0;
}
