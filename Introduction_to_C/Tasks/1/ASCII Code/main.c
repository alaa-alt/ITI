#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    printf("Hello, type a character: ");
    scanf("%c", &input);
    printf("The user wrote: %c", input);
    printf("\nThe ASCII Code for it is %d", input);
    return 0;
}
