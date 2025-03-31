#include <stdio.h>
#include <stdlib.h>

int main()
{   int array[5];
    printf("Enter 5 integers\n");
    for(int i=0; i<5; i++){
        scanf("%d", &array[i]);
    }
    printf("array given by the user is\n [");
    for(int j=0; j<5; j++){
            printf("%d  ", array[j]);

    }
    printf("]");
    return 0;
}
