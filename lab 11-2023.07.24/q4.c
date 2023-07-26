#include <stdio.h>
#include <stdlib.h>

int calculateQuotient(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 0;
    }

    int quotient = num1 / num2;
    return quotient;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = calculateQuotient(num1, num2);
    printf("Quotient: %d\n", result);

    return 0;
}
