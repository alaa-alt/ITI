#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The multiplication table from 1 to 10 in ascending order\n");
    for (int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            int mul = i*j;
            printf("%d * %d = %d\n", i, j, mul);
        }
            printf("*******************************\n");

    }
    return 0;
}
