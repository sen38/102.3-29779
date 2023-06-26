#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("Print all the ASCII values for letters A to Z:\n");
    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c:%d ", letter, letter);
    }

    return 0;
}
