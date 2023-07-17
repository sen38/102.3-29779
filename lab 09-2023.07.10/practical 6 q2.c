#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter values for the first array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter values for the second array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    int scalar_sum = 0;
    for (int i = 0; i < size; i++) {
        scalar_sum += array1[i];
    }

    int vector_sum[size];
    for (int i = 0; i < size; i++) {
        vector_sum[i] = array1[i] + array2[i];
    }

    printf("Scalar Sum: %d\n", scalar_sum);

    printf("Vector Sum: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vector_sum[i]);
    }
    printf("\n");
    return 0;
}
