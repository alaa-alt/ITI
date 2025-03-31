#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{   int n, x, y;
    printf("Enter n: \n");
    scanf("%d", &n);
    int f=Fact(n);
    while(f>n){
        printf("\nEnter X: \n");
        scanf("%d", &x);
        printf("Enter Y: \n");
        scanf("%d", &y);
        int r = pow(x,y);
        printf("result is %d", r);
    }
    return 0;
}

int Fact(int n)
{
    if (n == 0) {
        return 1;
    }
    return n * Fact(n - 1);
}

