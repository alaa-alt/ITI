#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The multiplication table from 10 to 1 in descending order\n");
    for (int i=10; i>0; i--){
        for(int j=10; j>0; j--){
            int mul = i*j;
            printf("%d * %d = %d\n", i, j, mul);
        }
            printf("*******************************\n");

    }
    return 0;
}
