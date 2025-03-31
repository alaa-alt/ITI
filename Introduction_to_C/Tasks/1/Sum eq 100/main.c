#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int num = 0;
    printf("Enter integer numbers\n");
    while(sum<=100){
        scanf("%d",&num);
        sum+=num;
    }
printf("Sum exceeded 100");

    return 0;
}
