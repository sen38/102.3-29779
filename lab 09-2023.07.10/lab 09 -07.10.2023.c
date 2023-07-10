#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10],i,minimum,maximum;
    float sum = 0,average;

    for (i = 0; i < 10; i++) {
        printf("Enter a value for element %d: ", i);
        scanf("%d", &arr[i]);
    }
    minimum = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    maximum = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }
    average = sum / 10;

    for (i = 0; i < 5; i++) {
        int temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    printf("Minimum value: %d\n", minimum);
    printf("Maximum value: %d\n", maximum);
    printf("Average value: %.2f\n", average);
    printf("Reversed order of values: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

